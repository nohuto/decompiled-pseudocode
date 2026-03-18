/*
 * XREFs of MiDeletePagablePteRange @ 0x1400BACF0
 * Callers:
 *     MiDeleteVadBitmap @ 0x14001C358 (MiDeleteVadBitmap.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14001EDD8 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiDeletePteRun @ 0x14004FE20 (MiDeletePteRun.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiTerminateWsle @ 0x1400B7650 (MiTerminateWsle.c)
 *     MiReleasePageFileSpace @ 0x1400E5464 (MiReleasePageFileSpace.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiDeletePagablePteRange(__int64 a1)
{
  unsigned __int16 v2; // cx
  unsigned __int64 v3; // r13
  _QWORD *v4; // r14
  KIRQL v5; // al
  ULONG_PTR NextPageTable; // rax
  __int64 v7; // r8
  int *v8; // r13
  unsigned __int64 v9; // rsi
  ULONG_PTR v10; // r14
  ULONG_PTR v11; // r12
  unsigned int v12; // r15d
  unsigned __int64 v13; // rax
  _KPROCESS *v14; // rdx
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // r15
  ULONG_PTR v19; // r13
  unsigned __int64 *v20; // rsi
  __int64 v21; // rbx
  ULONG_PTR *v22; // rax
  unsigned __int64 v23; // rbx
  _KPROCESS *v24; // rdx
  KIRQL v26; // [rsp+30h] [rbp-D0h]
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v28; // [rsp+40h] [rbp-C0h]
  int *v29; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B0h]
  int v31; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+70h] [rbp-90h]
  __int64 v35; // [rsp+78h] [rbp-88h]
  __int64 v36; // [rsp+80h] [rbp-80h]
  int v37; // [rsp+90h] [rbp-70h] BYREF
  __int16 v38; // [rsp+94h] [rbp-6Ch]
  __int64 v39; // [rsp+98h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]

  v32 = a1;
  v34 = 0LL;
  v2 = *(_WORD *)(a1 + 1460);
  v33 = 0LL;
  v3 = 0xFFFFF6FAC0000000uLL;
  v35 = 0LL;
  v36 = 0LL;
  v4 = (_QWORD *)(a1 + 1280);
  v29 = MiPartitionIdToPointer(v2);
  v28 = v4;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v4);
  v26 = v5;
  do
  {
    NextPageTable = MiGetNextPageTable(v3, 0xFFFFF6FAC0084018uLL, 0LL, v5, 4, &v31);
    BugCheckParameter2 = NextPageTable;
    if ( !NextPageTable )
      break;
    v8 = v29;
    v9 = NextPageTable;
    v10 = (__int64)(NextPageTable << 25) >> 16;
    v11 = NextPageTable;
    v39 = 20LL;
    v12 = 0;
    v37 = 1;
    v38 = 0;
    v40 = 0LL;
    v41 = 0LL;
    do
    {
      v13 = MI_READ_PTE_LOCK_FREE(v9);
      v27 = v13;
      v15 = v13;
      if ( v13 )
      {
        if ( (v13 & 1) != 0 )
        {
          v16 = MI_GET_PAGE_FRAME_FROM_PTE(&v27);
          MiTerminateWsle(v10, v28, *(_QWORD *)(48 * v16 - 0x58000000000LL));
          MiInsertTbFlushEntry((__int64)&v37, v10 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
          v17 = v15 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          v27 = v17;
          *(_QWORD *)v9 = v17;
          if ( (unsigned int)MiPteInShadowRange(v9) )
            MiWritePteShadow(v9, v17);
          v11 = v9;
        }
        else if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v13) )
        {
          v11 = v9;
        }
        else
        {
          MiReleasePageFileSpace(v8, v15, 1LL);
          *(_QWORD *)v9 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(v9) )
            MiWritePteShadow(v9, 0LL);
        }
      }
      v10 += 4096LL;
      v9 += 8LL;
      if ( v9 > 0xFFFFF6FAC0084018uLL )
        break;
      if ( (v9 & 0xFFF) == 0 )
        break;
      ++v12;
    }
    while ( v12 < 0x200 );
    MiFlushTbList((__int64)&v37, v14);
    v18 = v32;
    v19 = BugCheckParameter2;
    MiDeletePteRun(BugCheckParameter2, v11, v32, 0LL, (__int64)&v33);
    v20 = (unsigned __int64 *)(((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (*(_QWORD *)(MI_GET_PFN_FROM_PTE(v20) + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    {
      v27 = MI_READ_PTE_LOCK_FREE(v20);
      v21 = v27;
      v22 = (ULONG_PTR *)MI_GET_PFN_FROM_PTE(&v27);
      v4 = v28;
      MiTerminateWsle(v19, v28, *v22);
      MiInsertTbFlushEntry((__int64)&v37, v19 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
      v23 = v21 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v27 = v23;
      *v20 = v23;
      if ( (unsigned int)MiPteInShadowRange(v20) )
        MiWritePteShadow(v20, v23);
      MiFlushTbList((__int64)&v37, v24);
      MiDeletePteRun((ULONG_PTR)v20, (ULONG_PTR)v20, v18, 0LL, (__int64)&v33);
    }
    else
    {
      v4 = v28;
    }
    v5 = v26;
    v3 = v19 + 4096;
  }
  while ( v3 <= 0xFFFFF6FAC0084018uLL );
  MiUnlockWorkingSetExclusive((__int64)v4, v26, v7);
  return v34;
}
