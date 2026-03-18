/*
 * XREFs of KeShouldYieldProcessor @ 0x1400956C0
 * Callers:
 *     MiEmptyWorkingSet @ 0x140015ED4 (MiEmptyWorkingSet.c)
 *     MiTrimWorkingSet @ 0x140016210 (MiTrimWorkingSet.c)
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     MmUnlockPages @ 0x140051A80 (MmUnlockPages.c)
 *     MiLargeFreePageToMdl @ 0x14008A124 (MiLargeFreePageToMdl.c)
 *     MiGetWorkingSetInfoList @ 0x1400B79E0 (MiGetWorkingSetInfoList.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B9DD0 (MiOutSwapWorkingSetCallback.c)
 *     NtUnlockVirtualMemory @ 0x1400BA2E0 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400BAEC8 (NtLockVirtualMemory.c)
 *     MiWalkVaRange @ 0x1400BB684 (MiWalkVaRange.c)
 *     MiCloneVads @ 0x1400BC560 (MiCloneVads.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010E214 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x140133238 (MiEmptyWsPrivatePagesCallback.c)
 *     MiReleaseCommitForResetPageCallback @ 0x1401E0860 (MiReleaseCommitForResetPageCallback.c)
 *     MiShouldYieldProcessor @ 0x1401E68A0 (MiShouldYieldProcessor.c)
 *     MmUpdateOldWorkingSetPages @ 0x1401EA524 (MmUpdateOldWorkingSetPages.c)
 *     MiTransferPartitionPageRun @ 0x1401F2058 (MiTransferPartitionPageRun.c)
 *     MiConvertPfnsForLargePage @ 0x1401F543C (MiConvertPfnsForLargePage.c)
 *     MiCombineWorkingSet @ 0x1401F80D0 (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x1401FA8E4 (MiSharePages.c)
 *     MiScrubLargeMappedPage @ 0x1401FE334 (MiScrubLargeMappedPage.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1401D1EAC (KiResetGlobalDpcWatchdogProfiler.c)
 *     EtwTraceShouldYieldProcessor @ 0x1402261BC (EtwTraceShouldYieldProcessor.c)
 */

LOGICAL KeShouldYieldProcessor(void)
{
  struct _KPRCB *CurrentPrcb; // rcx
  LOGICAL v1; // edi
  unsigned int v2; // ebx
  unsigned int DpcWatchdogCount; // ebp
  volatile int DpcRequestSummary; // edx
  unsigned int DpcTimeCount; // esi
  _KTHREAD *NextThread; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  v2 = 1;
  DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
  DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
  DpcTimeCount = CurrentPrcb->DpcTimeCount;
  if ( (DpcRequestSummary & 1) != 0 )
  {
    if ( DpcTimeCount > 7 )
    {
      if ( CurrentPrcb->QuantumEnd )
        goto LABEL_19;
LABEL_14:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v2 = 5;
        goto LABEL_19;
      }
      if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
      {
        v2 = 6;
        goto LABEL_19;
      }
LABEL_18:
      _disable();
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      KiResetGlobalDpcWatchdogProfiler(CurrentPrcb);
      _enable();
      v2 = 0;
      goto LABEL_19;
    }
LABEL_12:
    if ( DpcWatchdogCount <= 7 )
      return 0;
    if ( !v2 )
      goto LABEL_18;
    goto LABEL_14;
  }
  v2 = 0;
  if ( (DpcRequestSummary & 0x1E) != 0 )
  {
    v2 = 2;
  }
  else if ( CurrentPrcb->QuantumEnd )
  {
    v2 = 3;
  }
  else
  {
    NextThread = CurrentPrcb->NextThread;
    if ( !NextThread || NextThread == CurrentPrcb->CurrentThread )
      goto LABEL_12;
    v2 = 4;
  }
LABEL_19:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v2, DpcWatchdogCount, DpcTimeCount);
  LOBYTE(v1) = v2 != 0;
  return v1;
}
