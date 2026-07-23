/*
 * XREFs of MiSplitPrivatePage @ 0x1400980C0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x14042E0B0 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400298C0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiVadPureReserve @ 0x14002B610 (MiVadPureReserve.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14002BAD0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiIncreaseUsedPtesCount @ 0x140037030 (MiIncreaseUsedPtesCount.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     MiMakeProtoLeafValid @ 0x1400984DC (MiMakeProtoLeafValid.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetUsedPtesHandle @ 0x1401EF60C (MiGetUsedPtesHandle.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteVadLookup @ 0x1401F2594 (MiMakePrototypePteVadLookup.c)
 *     MiChargeFullProcessCommitment @ 0x14042F830 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x14042F900 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x1404A8A18 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitPrivatePage(ULONG_PTR a1, __int64 a2)
{
  __int64 Process; // r15
  __int64 *v5; // rdi
  __int64 v6; // rbp
  int v7; // r12d
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  __int64 v10; // r9
  KIRQL v11; // si
  __int64 v12; // rbx
  ULONG_PTR v13; // rcx
  __int64 v14; // rdx
  struct _KTHREAD *v15; // rsi
  int v16; // ebx
  LONG *v17; // rbx
  KIRQL v18; // al
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 UsedPtesHandle; // rax
  __int16 v22; // ax
  __int64 PrototypePteVadLookup; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 PrototypePteDirect; // rax
  __int64 v29; // r9
  unsigned __int64 v30; // rdx
  int v31; // eax
  __int64 DemandZeroPte; // rax
  __int64 v33; // rcx
  int v35; // [rsp+30h] [rbp-78h] BYREF
  __int64 v36; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 ProtoPteAddress; // [rsp+40h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-60h]
  __int64 *v39; // [rsp+50h] [rbp-58h] BYREF
  int v41; // [rsp+B8h] [rbp+10h]
  int v42; // [rsp+C0h] [rbp+18h]
  int v43; // [rsp+C8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v42 = MiVadPureReserve(a2);
  v5 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v39 = *(__int64 **)(a2 + 72);
  v41 = 0;
  v6 = (int)MiChargeFullProcessCommitment(Process, 1LL);
  v7 = 0;
  v43 = 0;
  SharedVm = MiGetSharedVm(Process + 1280);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v11 = v9;
LABEL_2:
  v12 = v6;
  while ( 1 )
  {
    LOBYTE(v10) = v11;
    v13 = (ULONG_PTR)v5;
    if ( v42 )
      break;
LABEL_8:
    MiMakeSystemAddressValid(v13, 0LL, (*(_DWORD *)(a2 + 48) >> 8) & 0x3F, v10, 1);
LABEL_9:
    ProtoPteAddress = MiGetProtoPteAddress(a2, a1 >> 12, 1, &v39);
    v36 = MI_READ_PTE_LOCK_FREE(v5);
    v20 = v36;
    if ( !v36 )
    {
      if ( (int)v6 < 0 )
        goto LABEL_42;
      UsedPtesHandle = MiGetUsedPtesHandle(a1);
      MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
      v10 = ProtoPteAddress;
      if ( v42 )
      {
        if ( !ProtoPteAddress )
          goto LABEL_29;
        v22 = MI_READ_PTE_LOCK_FREE(((ProtoPteAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( (v22 & 1) == 0 && (v22 & 0x3E0) == 0 )
          goto LABEL_29;
      }
      PrototypePteVadLookup = MiMakePrototypePteVadLookup(1LL);
      v36 = PrototypePteVadLookup;
      *v5 = PrototypePteVadLookup;
      v20 = PrototypePteVadLookup;
      if ( (unsigned int)MiPteInShadowRange(v5, v24) )
        MiWritePteShadow(v25, v20);
    }
    if ( (v20 & 1) == 0 )
    {
      if ( (v20 & 0x400) != 0 )
      {
        if ( (unsigned int)MiIsPrototypePteVadLookup(v20)
          || (PrototypePteDirect = MiGetPrototypePteDirect(v20), PrototypePteDirect == v29) )
        {
          if ( (__int64 *)MiMakeProtoLeafValid((ULONG_PTR)v5) == v5 || v20 != MI_READ_PTE_LOCK_FREE(v5) )
            goto LABEL_2;
          if ( (int)v6 < 0 )
          {
LABEL_42:
            LOBYTE(v19) = v11;
            MiUnlockWorkingSetExclusive(Process + 1280, v19);
            return (unsigned int)v6;
          }
LABEL_29:
          v7 = 1;
          v41 = 1;
LABEL_30:
          v30 = (((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31) | *(_DWORD *)(a2 + 52) & 0x7FFFFFFF) + 1;
          v31 = v30 ^ *(_DWORD *)(a2 + 52);
          v19 = v30 >> 31;
          *(_DWORD *)(a2 + 52) ^= v31 & 0x7FFFFFFF;
          *(_BYTE *)(a2 + 34) = v19;
          if ( v41 == 1 )
          {
            DemandZeroPte = MiMakeDemandZeroPte(1LL, v19, 0x7FFFFFFFLL, v10);
            v36 = DemandZeroPte;
            *v5 = DemandZeroPte;
            if ( (unsigned int)MiPteInShadowRange(v5, DemandZeroPte) )
              MiWritePteShadow(v33, v19);
          }
        }
      }
LABEL_33:
      LOBYTE(v19) = v11;
      MiUnlockWorkingSetExclusive(Process + 1280, v19);
      if ( v43 == 1 )
        UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
      if ( !v7 && (int)v6 >= 0 )
        MiReturnFullProcessCommitment(Process, 1LL);
      return 0LL;
    }
    v26 = MI_GET_PAGE_FRAME_FROM_PTE(&v36);
    v19 = 0x200000000000000LL;
    if ( (*(_QWORD *)(48 * v26 - 0x58000000000LL + 40) & 0x200000000000000LL) == 0 )
      goto LABEL_33;
    v19 = 0x8000000000000000uLL;
    if ( (*(_QWORD *)(48 * v26 - 0x58000000000LL + 8) | 0x8000000000000000uLL) != v27 )
      goto LABEL_33;
    v12 = v6;
    if ( (int)v6 < 0 )
      goto LABEL_42;
    if ( (unsigned int)MiCopyOnWriteEx(a1, 0) )
    {
      v7 = 1;
      goto LABEL_30;
    }
  }
  if ( v5 == (__int64 *)MiGetNextPageTable((unsigned __int64)v5, (unsigned __int64)v5, 0LL, v10, 4, &v35) )
    goto LABEL_9;
  LOBYTE(v14) = v11;
  MiUnlockWorkingSetExclusive(Process + 1280, v14);
  if ( v12 < 0 )
    return (unsigned int)v6;
  v15 = CurrentThread;
  v43 = 1;
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  v16 = MiCommitPageTablesForVad(a2, a1, a1);
  if ( v16 >= 0 )
  {
    v17 = MiGetSharedVm(Process + 1280);
    v18 = ExAcquireSpinLockExclusive(v17);
    v17[1] = 0;
    v11 = v18;
    LOBYTE(v10) = v18;
    v13 = (ULONG_PTR)v5;
    goto LABEL_8;
  }
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)v15, Process);
  if ( (int)v6 >= 0 )
    MiReturnFullProcessCommitment(Process, 1LL);
  return (unsigned int)v16;
}
