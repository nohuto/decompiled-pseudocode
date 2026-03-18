/*
 * XREFs of MiFlushDirtyBitsToPfn @ 0x140098664
 * Callers:
 *     MmFlushVirtualMemory @ 0x140455438 (MmFlushVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAnyAddressLocked @ 0x1401D24EC (MiAnyAddressLocked.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

_BOOL8 __fastcall MiFlushDirtyBitsToPfn(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, BOOL a4)
{
  __int64 v4; // r13
  _QWORD *v7; // rdi
  unsigned __int64 v9; // r14
  _KPROCESS *v10; // rdx
  __int64 v11; // r9
  KIRQL v12; // r12
  __int64 NextPageTable; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+38h] [rbp-C8h] BYREF
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v25; // [rsp+44h] [rbp-BCh]
  __int64 v26; // [rsp+48h] [rbp-B8h]
  __int64 v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]

  v4 = *(_QWORD *)(a3 + 184);
  v26 = 20LL;
  v24 = 1;
  v25 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v7 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 1280));
  if ( a4 )
    a4 = MiAnyAddressLocked(a1, a2) != 1;
  while ( (unsigned __int64)v7 <= v9 )
  {
    LOBYTE(v11) = v12;
    NextPageTable = MiGetNextPageTable((unsigned __int64)v7, v9, (__int64)&v24, v11, 4, &v23);
    v7 = (_QWORD *)NextPageTable;
    if ( !NextPageTable )
      break;
    v14 = NextPageTable << 25 >> 16;
    do
    {
      v15 = MI_READ_PTE_LOCK_FREE(v7);
      v22 = v15;
      if ( (v15 & 1) != 0 && (v15 & 0x42) != 0 )
      {
        v16 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v22) - 0x58000000000LL;
        v17 = MiLockPageInline(v16);
        *(_BYTE *)(v16 + 34) |= 0x10u;
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v17);
        v18 = v22 & 0xFFFFFFFFFFFFFFBDuLL;
        v22 = v18;
        *v7 = v18;
        if ( (unsigned int)MiPteInShadowRange(v7) )
          MiWritePteShadow(v7, v18);
        MiInsertTbFlushEntry((__int64)&v24, v14, 1LL, 0);
      }
      v14 += 4096LL;
      ++v7;
    }
    while ( (v14 & 0x1FFFFF) != 0 && (unsigned __int64)v7 <= v9 );
  }
  MiFlushTbList((__int64)&v24, v10);
  LOBYTE(v19) = v12;
  MiUnlockWorkingSetExclusive(v4 + 1280, v19, v20);
  return a4;
}
