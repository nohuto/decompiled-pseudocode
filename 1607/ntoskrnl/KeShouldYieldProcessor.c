/*
 * XREFs of KeShouldYieldProcessor @ 0x140094EC0
 * Callers:
 *     MiEmptyWorkingSet @ 0x140015A54 (MiEmptyWorkingSet.c)
 *     MiTrimWorkingSet @ 0x140015D90 (MiTrimWorkingSet.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     MiLargeFreePageToMdl @ 0x140089824 (MiLargeFreePageToMdl.c)
 *     MiGetWorkingSetInfoList @ 0x1400B5870 (MiGetWorkingSetInfoList.c)
 *     MiOutSwapWorkingSetCallback @ 0x1400B7C60 (MiOutSwapWorkingSetCallback.c)
 *     NtUnlockVirtualMemory @ 0x1400B8170 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1400B8D58 (NtLockVirtualMemory.c)
 *     MiWalkVaRange @ 0x1400B9514 (MiWalkVaRange.c)
 *     MiCloneVads @ 0x1400BA3F0 (MiCloneVads.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010E778 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x1401337A8 (MiEmptyWsPrivatePagesCallback.c)
 *     MiReleaseCommitForResetPageCallback @ 0x1401E068C (MiReleaseCommitForResetPageCallback.c)
 *     MiShouldYieldProcessor @ 0x1401E66CC (MiShouldYieldProcessor.c)
 *     MmUpdateOldWorkingSetPages @ 0x1401EA350 (MmUpdateOldWorkingSetPages.c)
 *     MiTransferPartitionPageRun @ 0x1401F1E84 (MiTransferPartitionPageRun.c)
 *     MiConvertPfnsForLargePage @ 0x1401F5268 (MiConvertPfnsForLargePage.c)
 *     MiCombineWorkingSet @ 0x1401F7EFC (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     MiScrubLargeMappedPage @ 0x1401FE160 (MiScrubLargeMappedPage.c)
 * Callees:
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1401D1CD8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     EtwTraceShouldYieldProcessor @ 0x140225FE8 (EtwTraceShouldYieldProcessor.c)
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
