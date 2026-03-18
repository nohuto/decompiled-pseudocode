/*
 * XREFs of KeShouldYieldProcessor @ 0x14010B540
 * Callers:
 *     MiCloneVads @ 0x140001EE4 (MiCloneVads.c)
 *     MiOutSwapWorkingSetCallback @ 0x14003CFD0 (MiOutSwapWorkingSetCallback.c)
 *     MiGetZeroedPages @ 0x140077560 (MiGetZeroedPages.c)
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 *     MiEmptyWorkingSet @ 0x14007B85C (MiEmptyWorkingSet.c)
 *     NtUnlockVirtualMemory @ 0x14007ECE0 (NtUnlockVirtualMemory.c)
 *     MiWalkVaRange @ 0x14007F5DC (MiWalkVaRange.c)
 *     MiTrimWorkingSet @ 0x140080FFC (MiTrimWorkingSet.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     NtLockVirtualMemory @ 0x1400FD8C4 (NtLockVirtualMemory.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x1402138D0 (MiEmptyWsPrivatePagesCallback.c)
 *     MmUpdateOldWorkingSetPages @ 0x14021B8BC (MmUpdateOldWorkingSetPages.c)
 *     MiReturnPartitionPagesToParent @ 0x14021D9D8 (MiReturnPartitionPagesToParent.c)
 *     MiCombineWorkingSet @ 0x140227B38 (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 *     MiScrubLargeMappedPage @ 0x140232658 (MiScrubLargeMappedPage.c)
 * Callees:
 *     EtwTraceShouldYieldProcessor @ 0x14025D5E8 (EtwTraceShouldYieldProcessor.c)
 */

LOGICAL KeShouldYieldProcessor(void)
{
  struct _KPRCB *CurrentPrcb; // rcx
  LOGICAL v1; // edi
  unsigned int v2; // ebx
  unsigned int DpcWatchdogCount; // r10d
  volatile int DpcRequestSummary; // edx
  unsigned int DpcTimeCount; // r9d
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
