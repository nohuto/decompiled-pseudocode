/*
 * XREFs of KeShouldYieldProcessor @ 0x1400D54D0
 * Callers:
 *     MiWalkVaRange @ 0x14001C524 (MiWalkVaRange.c)
 *     MiCloneVads @ 0x14001D7C8 (MiCloneVads.c)
 *     MiOutSwapWorkingSetCallback @ 0x14001F030 (MiOutSwapWorkingSetCallback.c)
 *     MiEmptyWorkingSet @ 0x14001F584 (MiEmptyWorkingSet.c)
 *     NtUnlockVirtualMemory @ 0x140021060 (NtUnlockVirtualMemory.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     MiTrimWorkingSet @ 0x1400B5BA0 (MiTrimWorkingSet.c)
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 *     NtLockVirtualMemory @ 0x1400BB80C (NtLockVirtualMemory.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x14012BE8C (MiEmptyWsPrivatePagesCallback.c)
 *     MmUpdateOldWorkingSetPages @ 0x1401D8810 (MmUpdateOldWorkingSetPages.c)
 *     MiReturnPartitionPagesToParent @ 0x1401D98E4 (MiReturnPartitionPagesToParent.c)
 *     MiCombineWorkingSet @ 0x1401E0DFC (MiCombineWorkingSet.c)
 *     MiScrubLargeMappedPage @ 0x1401E5BA4 (MiScrubLargeMappedPage.c)
 * Callees:
 *     EtwTraceShouldYieldProcessor @ 0x14020E308 (EtwTraceShouldYieldProcessor.c)
 */

LOGICAL KeShouldYieldProcessor(void)
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 DpcWatchdogCount; // r9
  LOGICAL v2; // ebx
  unsigned int DpcTimeCount; // r10d
  volatile int DpcRequestSummary; // edx
  int v5; // r11d
  _KTHREAD *NextThread; // rcx
  unsigned int v8; // edi

  CurrentPrcb = KeGetCurrentPrcb();
  DpcWatchdogCount = (unsigned int)CurrentPrcb->DpcWatchdogCount;
  v2 = 1;
  DpcTimeCount = CurrentPrcb->DpcTimeCount;
  DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
  if ( (DpcRequestSummary & 1) != 0 )
  {
    v5 = 1;
    if ( DpcTimeCount > 7 )
    {
      if ( CurrentPrcb->QuantumEnd )
      {
        v8 = 1;
        goto LABEL_8;
      }
      goto LABEL_21;
    }
LABEL_5:
    if ( (unsigned int)DpcWatchdogCount <= 7 )
      return 0;
    if ( !v5 )
    {
LABEL_17:
      _disable();
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      _enable();
      v8 = 0;
      goto LABEL_8;
    }
LABEL_21:
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v8 = 5;
      goto LABEL_8;
    }
    if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
    {
      v8 = 6;
      goto LABEL_8;
    }
    goto LABEL_17;
  }
  v5 = 0;
  if ( (DpcRequestSummary & 0x1E) != 0 )
  {
    v8 = 2;
  }
  else
  {
    if ( !CurrentPrcb->QuantumEnd )
    {
      NextThread = CurrentPrcb->NextThread;
      if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
      {
        v8 = 4;
        goto LABEL_8;
      }
      goto LABEL_5;
    }
    v8 = 3;
  }
LABEL_8:
  if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
    EtwTraceShouldYieldProcessor(v8, (unsigned int)DpcWatchdogCount, DpcTimeCount, DpcWatchdogCount);
  if ( !v8 )
    return 0;
  return v2;
}
