/*
 * XREFs of MiFlushDirtyBitsToPfn @ 0x1400A44FC
 * Callers:
 *     MmFlushVirtualMemory @ 0x1404B5438 (MmFlushVirtualMemory.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiAnyAddressLocked @ 0x1401E25C4 (MiAnyAddressLocked.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

_BOOL8 __fastcall MiFlushDirtyBitsToPfn(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, BOOL a4)
{
  BOOL v6; // r15d
  _QWORD *v7; // rdi
  unsigned __int64 v8; // r14
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  __int64 v11; // r9
  KIRQL v12; // r12
  __int64 NextPageTable; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  BOOL v23; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h]
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v28; // [rsp+54h] [rbp-ACh]
  __int64 v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h]

  v23 = a4;
  v29 = 20LL;
  v27 = 1;
  v28 = 0;
  v30 = 0LL;
  v6 = a4;
  v31 = 0LL;
  v7 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = *(_QWORD *)(a3 + 184) + 1280LL;
  SharedVm = MiGetSharedVm(v26);
  v10 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v12 = v10;
  if ( v6 )
  {
    v6 = MiAnyAddressLocked(a1, a2) != 1;
    v23 = v6;
  }
  if ( (unsigned __int64)v7 <= v8 )
  {
    do
    {
      LOBYTE(v11) = v12;
      NextPageTable = MiGetNextPageTable((unsigned __int64)v7, v8, (__int64)&v27, v11, 4, &v25);
      v7 = (_QWORD *)NextPageTable;
      if ( !NextPageTable )
        break;
      v14 = NextPageTable << 25 >> 16;
      do
      {
        v15 = MI_READ_PTE_LOCK_FREE(v7);
        v24 = v15;
        if ( (v15 & 1) != 0 && (v15 & 0x42) != 0 )
        {
          v16 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v24) - 0x58000000000LL;
          v17 = MiLockPageInline(v16);
          *(_BYTE *)(v16 + 34) |= 0x10u;
          _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v17);
          v18 = v24 & 0xFFFFFFFFFFFFFFBDuLL;
          v24 = v18;
          *v7 = v18;
          if ( (unsigned int)MiPteInShadowRange(v7, v18) )
            MiWritePteShadow(v20, v19);
          MiInsertTbFlushEntry(&v27, v14, 1LL);
        }
        v14 += 4096LL;
        ++v7;
      }
      while ( (v14 & 0x1FFFFF) != 0 && (unsigned __int64)v7 <= v8 );
    }
    while ( (unsigned __int64)v7 <= v8 );
    v6 = v23;
  }
  MiFlushTbList(&v27);
  LOBYTE(v21) = v12;
  MiUnlockWorkingSetExclusive(v26, v21);
  return v6;
}
