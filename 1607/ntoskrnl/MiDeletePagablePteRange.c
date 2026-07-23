/*
 * XREFs of MiDeletePagablePteRange @ 0x140075220
 * Callers:
 *     MiDeleteVadBitmap @ 0x140075150 (MiDeleteVadBitmap.c)
 * Callees:
 *     MiReleasePageFileSpace @ 0x140021DB8 (MiReleasePageFileSpace.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     MiDeletePteRun @ 0x140064CC0 (MiDeletePteRun.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1400BBD64 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiTerminateWsle @ 0x1400E0160 (MiTerminateWsle.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeletePagablePteRange(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  unsigned __int16 v7; // cx
  LONG *SharedVm; // rbx
  KIRQL v9; // r12
  ULONG_PTR NextPageTable; // rax
  _QWORD *v11; // rsi
  ULONG_PTR v12; // r12
  __int64 v13; // r14
  unsigned __int64 v14; // r13
  unsigned int v15; // r15d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rbx
  _QWORD *v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r14
  ULONG_PTR v28; // r13
  unsigned __int64 *v29; // rsi
  __int64 v30; // rbx
  _QWORD *v31; // rax
  unsigned __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  KIRQL v36; // [rsp+30h] [rbp-D0h]
  __int64 v37; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v39; // [rsp+48h] [rbp-B8h]
  int v40; // [rsp+50h] [rbp-B0h] BYREF
  struct _KEVENT *v41; // [rsp+58h] [rbp-A8h]
  __int64 v42; // [rsp+60h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h]
  __int64 v44; // [rsp+70h] [rbp-90h] BYREF
  __int64 v45; // [rsp+78h] [rbp-88h]
  __int64 v46; // [rsp+80h] [rbp-80h]
  __int64 v47; // [rsp+88h] [rbp-78h]
  int v48; // [rsp+90h] [rbp-70h] BYREF
  __int16 v49; // [rsp+94h] [rbp-6Ch]
  __int64 v50; // [rsp+98h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]

  v3 = 0LL;
  v42 = a1;
  v45 = 0LL;
  v46 = 0LL;
  v44 = 0LL;
  v47 = 0LL;
  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = a1 + 1280;
  v7 = *(_WORD *)(a1 + 1444);
  v39 = v5;
  v38 = v6;
  v41 = (struct _KEVENT *)MiPartitionIdToPointer(v7);
  SharedVm = MiGetSharedVm(v6);
  v36 = ExAcquireSpinLockExclusive(SharedVm);
  v9 = v36;
  SharedVm[1] = 0;
  if ( v4 <= v5 )
  {
    do
    {
      NextPageTable = MiGetNextPageTable(v4, v5, 0LL, v9, 4, &v40);
      BugCheckParameter2 = NextPageTable;
      if ( !NextPageTable )
        break;
      v11 = (_QWORD *)NextPageTable;
      v50 = 20LL;
      v12 = NextPageTable;
      v13 = (__int64)(NextPageTable << 25) >> 16;
      v14 = v39;
      v15 = 0;
      v48 = 1;
      v49 = 0;
      v51 = 0LL;
      v52 = 0LL;
      do
      {
        v16 = MI_READ_PTE_LOCK_FREE(v11);
        v37 = v16;
        v20 = v16;
        if ( v16 )
        {
          if ( (v16 & 1) != 0 )
          {
            v21 = (_QWORD *)MI_GET_PFN_FROM_PTE(&v37);
            MiTerminateWsle(v13, v38, *v21, 0LL);
            MiInsertTbFlushEntry(&v48, v13 & 0xFFFFFFFFFFFFF000uLL, 1LL);
            v22 = v20 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
            v37 = v22;
            *v11 = v22;
            if ( (unsigned int)MiPteInShadowRange(v11, v23) )
              MiWritePteShadow(v24, v22);
            v12 = (ULONG_PTR)v11;
          }
          else if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v16, v17, v18, v19) )
          {
            v12 = (ULONG_PTR)v11;
          }
          else
          {
            MiReleasePageFileSpace(v41, v20, 1LL);
            *v11 = 0LL;
            if ( (unsigned int)MiPteInShadowRange(v11, v25) )
              MiWritePteShadow(v26, 0LL);
          }
        }
        v13 += 4096LL;
        if ( (unsigned __int64)++v11 > v14 )
          break;
        if ( ((unsigned __int16)v11 & 0xFFF) == 0 )
          break;
        ++v15;
      }
      while ( v15 < 0x200 );
      MiFlushTbList(&v48);
      v27 = v42;
      v28 = BugCheckParameter2;
      MiDeletePteRun((_QWORD *)BugCheckParameter2, v12, v42, 0LL, (__int64)&v44);
      v29 = (unsigned __int64 *)(((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( (*(_QWORD *)(MI_GET_PFN_FROM_PTE(v29) + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v37 = MI_READ_PTE_LOCK_FREE(v29);
        v30 = v37;
        v31 = (_QWORD *)MI_GET_PFN_FROM_PTE(&v37);
        v6 = v38;
        MiTerminateWsle(v28, v38, *v31, 0LL);
        MiInsertTbFlushEntry(&v48, v28 & 0xFFFFFFFFFFFFF000uLL, 1LL);
        v32 = v30 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v37 = v32;
        *v29 = v32;
        if ( (unsigned int)MiPteInShadowRange(v29, v33) )
          MiWritePteShadow(v34, v32);
        MiFlushTbList(&v48);
        MiDeletePteRun(v29, (ULONG_PTR)v29, v27, 0LL, (__int64)&v44);
      }
      else
      {
        v6 = v38;
      }
      v5 = v39;
      v4 = v28 + 4096;
      v9 = v36;
    }
    while ( v4 <= v39 );
    v3 = v45;
  }
  MiUnlockWorkingSetExclusive(v6, v9);
  return v3;
}
