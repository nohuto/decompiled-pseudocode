/*
 * XREFs of KiAbProcessContextSwitch @ 0x1400A1D30
 * Callers:
 *     KiCheckForThreadDispatch @ 0x14000DCB4 (KiCheckForThreadDispatch.c)
 *     KiSchedulerApc @ 0x14000EB14 (KiSchedulerApc.c)
 *     ExTryQueueWorkItem @ 0x1400292FC (ExTryQueueWorkItem.c)
 *     KeSetLegacyAffinityThread @ 0x140043120 (KeSetLegacyAffinityThread.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KeRemoveQueueEx @ 0x14009E640 (KeRemoveQueueEx.c)
 *     KiSwapThread @ 0x1400A0810 (KiSwapThread.c)
 *     KiQuantumEnd @ 0x1400A25A0 (KiQuantumEnd.c)
 *     CcMapAndCopyInToCache @ 0x1400B2720 (CcMapAndCopyInToCache.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     PpmCheckRun @ 0x1400E7D30 (PpmCheckRun.c)
 *     NtYieldExecution @ 0x1400EB420 (NtYieldExecution.c)
 *     KiReadyOutSwappedThreads @ 0x1401106FC (KiReadyOutSwappedThreads.c)
 *     KxDispatchInterrupt @ 0x14018A480 (KxDispatchInterrupt.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x14000DCB4 (KiCheckForThreadDispatch.c)
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiAbTryIncrementIoWaiterCount @ 0x1400F2BB4 (KiAbTryIncrementIoWaiterCount.c)
 *     KiAbProcessThreadLocks @ 0x1400F3A10 (KiAbProcessThreadLocks.c)
 *     KiAbSetMinimumThreadPriority @ 0x1400F475C (KiAbSetMinimumThreadPriority.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x1400F4BA0 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x1400F4C38 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400F6A90 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbDetermineMaxWaiterPriority @ 0x140117EEC (KiAbDetermineMaxWaiterPriority.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x1401203A0 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x14012041C (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbCpuBoostOwners @ 0x140122E4C (KiAbCpuBoostOwners.c)
 *     KiAbIoBoostOwners @ 0x140123290 (KiAbIoBoostOwners.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

char __fastcall KiAbProcessContextSwitch(__int64 a1, int a2)
{
  __int64 LockedHeadEntry; // rax
  int v3; // edi
  struct _KPRCB *CurrentPrcb; // r13
  __int64 p_AbSelfIoBoostsList; // r14
  __int64 v6; // r12
  unsigned int v7; // r15d
  bool v8; // zf
  int v9; // ecx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdi
  char v13; // al
  __int64 v14; // rax
  char v15; // si
  char v16; // al
  char v17; // dl
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  char CpuPriorityKey; // bl
  int v22; // r9d
  __int64 *v23; // rcx
  __int64 *v24; // rbx
  _QWORD *i; // rbx
  _BYTE *v26; // rdx
  signed __int32 v28[6]; // [rsp+8h] [rbp-59h] BYREF
  _QWORD *v29; // [rsp+48h] [rbp-19h] BYREF
  struct _KPRCB *v30; // [rsp+50h] [rbp-11h]
  __int64 v31[4]; // [rsp+58h] [rbp-9h] BYREF
  void *retaddr; // [rsp+C0h] [rbp+5Fh]
  __int16 v33; // [rsp+C8h] [rbp+67h] BYREF
  int v34; // [rsp+D0h] [rbp+6Fh]
  int v35; // [rsp+D8h] [rbp+77h]
  __int64 *v36; // [rsp+E0h] [rbp+7Fh] BYREF

  v34 = a2;
  LODWORD(LockedHeadEntry) = *(char *)(a1 + 792);
  v3 = a2;
  if ( ((unsigned int)LockedHeadEntry | *(char *)(a1 + 1418)) == 0x3F || !KiAbEnabled )
    return LockedHeadEntry;
  CurrentPrcb = KeGetCurrentPrcb();
  LOBYTE(LockedHeadEntry) = *(_BYTE *)(a1 + 792) | *(_BYTE *)(a1 + 1418);
  v29 = 0LL;
  p_AbSelfIoBoostsList = (__int64)&CurrentPrcb->AbSelfIoBoostsList;
  v36 = 0LL;
  v30 = CurrentPrcb;
  if ( (_BYTE)LockedHeadEntry == 63 )
    goto LABEL_49;
  v6 = a1 + 800;
  v7 = (*(char *)(a1 + 792) | *(char *)(a1 + 1418)) ^ 0x3F;
  v8 = !_BitScanForward((unsigned int *)&a1, v7);
  v35 = v9;
  if ( v8 )
    goto LABEL_49;
  do
  {
    v7 &= v7 - 1;
    v10 = v6 + 96 * a1;
    LockedHeadEntry = *(_QWORD *)(v10 + 32);
    if ( !LockedHeadEntry || (LockedHeadEntry & 2) != 0 || (LockedHeadEntry & 1) != 0 )
      goto LABEL_43;
    LockedHeadEntry = *(_QWORD *)(v10 + 32) >> 63;
    if ( *(__int64 *)(v10 + 32) < 0 )
    {
      if ( (*(_BYTE *)(v10 + 27) & 1) != 0 )
        goto LABEL_43;
      if ( (*(_BYTE *)(v10 + 25) & 1) != 0 )
      {
        LOBYTE(LockedHeadEntry) = *(_BYTE *)(v10 - (unsigned __int16)(16 * *(unsigned __int8 *)(v10 + 24)) + 195);
        if ( (char)LockedHeadEntry > 15 )
          LOBYTE(LockedHeadEntry) = 15;
        if ( (_BYTE)LockedHeadEntry == *(_BYTE *)(v10 + 48) )
          goto LABEL_43;
      }
      else
      {
        LOBYTE(LockedHeadEntry) = KiAbOwnerComputeCpuPriorityKey(v6 + 96 * a1, 15LL);
        if ( (_BYTE)LockedHeadEntry == *(_BYTE *)(v10 + 48) )
          goto LABEL_43;
      }
    }
    LockedHeadEntry = KiAbEntryGetLockedHeadEntry((PRTL_BALANCED_NODE)v10);
    v12 = LockedHeadEntry;
    if ( !LockedHeadEntry )
      goto LABEL_43;
    if ( (*(_BYTE *)(v10 + 25) & 1) == 0 )
    {
      if ( v10 != LockedHeadEntry )
        KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v10);
      KiAbDetermineMaxWaiterPriority(v12, &v33);
      if ( v33
        && (unsigned int)KiAbSetMinimumThreadPriority(
                           v10,
                           (unsigned int)&v33,
                           (unsigned int)&v29,
                           (unsigned int)&v36,
                           p_AbSelfIoBoostsList)
        && v10 != v12 )
      {
        KiAbEntryUpdateOwnerTreePosition((PRTL_BALANCED_NODE)v10);
      }
      goto LABEL_57;
    }
    if ( v10 != LockedHeadEntry )
      KiAbEntryUpdateWaiterTreePosition((PRTL_BALANCED_NODE)v10);
    v13 = 0;
    if ( *(_WORD *)(v12 + 90) )
      v13 = 2;
    HIBYTE(v33) = v13;
    v14 = *(_QWORD *)(v12 + 56);
    if ( v14 )
      v15 = *(_BYTE *)(v14 + 48);
    else
      v15 = 15;
    v8 = (*(_BYTE *)(v12 + 25) & 1) == 0;
    LOBYTE(v33) = v15;
    if ( v8 )
    {
      v16 = KiAbOwnerComputeCpuPriorityKey(v12, v11);
      v17 = v15;
      if ( v16 < v15 )
        v17 = v16;
      v15 = v17;
      LOBYTE(v33) = v17;
    }
    v18 = KiAbTryIncrementIoWaiterCount(v10, v12);
    CpuPriorityKey = KiAbEntryGetCpuPriorityKey(v10, v19, v20, v18);
    if ( v15 < CpuPriorityKey )
    {
      if ( v22 )
LABEL_55:
        KiAbIoBoostOwners(v12, &v29, &v36, p_AbSelfIoBoostsList);
      KiAbCpuBoostOwners(
        v12,
        (unsigned __int8)CpuPriorityKey,
        (unsigned int)&v29,
        (unsigned int)&v36,
        p_AbSelfIoBoostsList);
LABEL_57:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
LABEL_38:
        LOBYTE(LockedHeadEntry) = KiReleaseQueuedSpinLockInstrumented(v31, retaddr);
        goto LABEL_43;
      }
      goto LABEL_39;
    }
    if ( v22 )
      goto LABEL_55;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      goto LABEL_38;
LABEL_39:
    LockedHeadEntry = v31[0];
    _m_prefetchw(v31);
    if ( !LockedHeadEntry )
    {
      LockedHeadEntry = _InterlockedCompareExchange64((volatile signed __int64 *)v31[1], 0LL, (signed __int64)v31);
      if ( (__int64 *)LockedHeadEntry == v31 )
        goto LABEL_43;
      LockedHeadEntry = KxWaitForLockChainValid(v31);
    }
    v31[0] = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(LockedHeadEntry + 8), 1uLL);
LABEL_43:
    v8 = !_BitScanForward((unsigned int *)&a1, v7);
    v35 = a1;
  }
  while ( !v8 );
  v23 = v36;
  for ( CurrentPrcb = v30; v36; v23 = v36 )
  {
    LockedHeadEntry = *v23;
    v24 = v23 - 172;
    v36 = (__int64 *)*v23;
    *v23 = 1LL;
    _InterlockedOr(v28, 0);
    if ( *((_BYTE *)v23 - 583) )
      LOBYTE(LockedHeadEntry) = KiAbProcessThreadLocks(
                                  (int)v23 - 1376,
                                  0,
                                  1,
                                  0,
                                  (__int64)&v29,
                                  (__int64)&v36,
                                  p_AbSelfIoBoostsList);
    _InterlockedDecrement16((volatile signed __int16 *)v24 + 708);
  }
  v3 = v34;
LABEL_49:
  for ( i = v29; i; LOBYTE(LockedHeadEntry) = KiDeferredReadyThread((__int64)CurrentPrcb, v26) )
  {
    v26 = i - 27;
    i = (_QWORD *)*i;
  }
  if ( v3 )
    LOBYTE(LockedHeadEntry) = KiCheckForThreadDispatch((__int64)CurrentPrcb, 2u);
  return LockedHeadEntry;
}
