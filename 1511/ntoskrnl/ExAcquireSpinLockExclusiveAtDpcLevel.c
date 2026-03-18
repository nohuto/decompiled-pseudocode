/*
 * XREFs of ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70
 * Callers:
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140002548 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     MiOutPageSingleKernelStack @ 0x1400052A8 (MiOutPageSingleKernelStack.c)
 *     MiTrimSharedPage @ 0x1400081F8 (MiTrimSharedPage.c)
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MmLockLoadedModuleListExclusive @ 0x14001A824 (MmLockLoadedModuleListExclusive.c)
 *     KiAcquireProcessLockExclusive @ 0x14002AB2C (KiAcquireProcessLockExclusive.c)
 *     MiGatherMappedPages @ 0x14002EDB4 (MiGatherMappedPages.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400348F0 (KiAbEntryGetLockedHeadEntry.c)
 *     MiSectionCreated @ 0x140038BD8 (MiSectionCreated.c)
 *     MiRemoveUnusedSubsection @ 0x14003A500 (MiRemoveUnusedSubsection.c)
 *     MiRemoveUnusedSegment @ 0x14003AB30 (MiRemoveUnusedSegment.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     KeReleaseMutant @ 0x140087250 (KeReleaseMutant.c)
 *     KeForceResumeProcess @ 0x1400946B4 (KeForceResumeProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x140094784 (KeSetProcessSchedulingGroup.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140094B64 (KeSetPriorityAndQuantumProcess.c)
 *     KeUpdateProcessSharedReadyQueueAffinity @ 0x1400952DC (KeUpdateProcessSharedReadyQueueAffinity.c)
 *     KeThawProcess @ 0x140095D30 (KeThawProcess.c)
 *     KeFreezeProcess @ 0x140096ED4 (KeFreezeProcess.c)
 *     MmUnmapViewInSystemCache @ 0x1400ADB30 (MmUnmapViewInSystemCache.c)
 *     MiDereferenceControlAreaPfn @ 0x1400B5418 (MiDereferenceControlAreaPfn.c)
 *     MiCheckForControlAreaDeletion @ 0x1400B54F4 (MiCheckForControlAreaDeletion.c)
 *     PopPepWork @ 0x1400DAB48 (PopPepWork.c)
 *     PopPepLockActivityLink @ 0x1400DBDD8 (PopPepLockActivityLink.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400DF7A4 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     MiClearFilePointer @ 0x1400EA004 (MiClearFilePointer.c)
 *     MiZeroSectionObjectPointer @ 0x1400F3B10 (MiZeroSectionObjectPointer.c)
 *     MiWaitForPageWriteCompletion @ 0x1401074A4 (MiWaitForPageWriteCompletion.c)
 *     KeSetAffinityThread @ 0x14012DAD4 (KeSetAffinityThread.c)
 *     MiFreeUnusedPfnPages @ 0x1401322A8 (MiFreeUnusedPfnPages.c)
 *     KeSetAffinityProcess @ 0x14014075C (KeSetAffinityProcess.c)
 *     HvlpIumEfiRuntimeService @ 0x1401B3808 (HvlpIumEfiRuntimeService.c)
 *     KeTransitionProcessorParkState @ 0x1401CBFEC (KeTransitionProcessorParkState.c)
 *     MiPurgeSubsection @ 0x1401D1590 (MiPurgeSubsection.c)
 *     MiClearFileOnlyPfn @ 0x1401E3318 (MiClearFileOnlyPfn.c)
 *     MiNoPagesLastChance @ 0x1401E3DB0 (MiNoPagesLastChance.c)
 *     DbgpInsertDebugPrintCallback @ 0x1401F785C (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1401F790C (DbgpRemoveDebugPrintCallback.c)
 *     VmpFaultEntryInsert @ 0x14020C3C8 (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x14020C460 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockExclusive @ 0x14020C900 (VmpProcessContextLockExclusive.c)
 *     ViDeadlockDetectionLock @ 0x1406CD3A4 (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockExclusiveAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  volatile LONG v4; // edx
  bool v5; // zf
  signed __int32 v6; // eax
  int v7; // [rsp+38h] [rbp+10h] BYREF

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(v1) = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SpinLock, v1);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    {
      LOBYTE(v1) = -1;
      v7 = ExpWaitForSpinLockExclusiveAndAcquire(SpinLock, v1, v2);
    }
    v4 = *SpinLock;
    while ( (v4 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v4 & 0x40000000) == 0 )
      {
        v6 = _InterlockedCompareExchange(SpinLock, v4 | 0x40000000, v4);
        v5 = v4 == v6;
        v4 = v6;
        if ( !v5 )
          continue;
      }
      KeYieldProcessorEx(&v7);
      v4 = *SpinLock;
    }
  }
}
