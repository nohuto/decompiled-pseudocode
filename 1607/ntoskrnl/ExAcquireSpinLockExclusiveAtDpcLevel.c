/*
 * XREFs of ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026F70
 * Callers:
 *     MiGatherMappedPages @ 0x1400201F0 (MiGatherMappedPages.c)
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MiRemoveUnusedSegment @ 0x140026D14 (MiRemoveUnusedSegment.c)
 *     MiInsertUnusedSubsection @ 0x140026DCC (MiInsertUnusedSubsection.c)
 *     MiInsertUnusedSegment @ 0x140026FEC (MiInsertUnusedSegment.c)
 *     MiFlushSectionInternal @ 0x140029DB0 (MiFlushSectionInternal.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MmUnmapViewInSystemCache @ 0x1400492C0 (MmUnmapViewInSystemCache.c)
 *     MiInsertPageInList @ 0x1400695D0 (MiInsertPageInList.c)
 *     MiOutPageSingleKernelStack @ 0x140075734 (MiOutPageSingleKernelStack.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14007EA64 (KeSetPriorityAndQuantumProcess.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140084560 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     MmLockLoadedModuleListExclusive @ 0x140084CB8 (MmLockLoadedModuleListExclusive.c)
 *     MiBeginLargePageAccessor @ 0x14008ADF8 (MiBeginLargePageAccessor.c)
 *     MiRemoveFaultNode @ 0x14008B878 (MiRemoveFaultNode.c)
 *     MiTrimSharedPage @ 0x14008E6E4 (MiTrimSharedPage.c)
 *     MiDereferenceControlAreaPfnList @ 0x14008FC70 (MiDereferenceControlAreaPfnList.c)
 *     MiCheckForControlAreaDeletion @ 0x14008FD50 (MiCheckForControlAreaDeletion.c)
 *     MiClearFilePointer @ 0x14008FE24 (MiClearFilePointer.c)
 *     MiRemoveUnusedSubsection @ 0x1400904A4 (MiRemoveUnusedSubsection.c)
 *     MiWaitForPageWriteCompletion @ 0x140097BE8 (MiWaitForPageWriteCompletion.c)
 *     MiZeroSectionObjectPointer @ 0x1400B5188 (MiZeroSectionObjectPointer.c)
 *     PopPepWork @ 0x1400C1DA4 (PopPepWork.c)
 *     PopPepLockActivityLink @ 0x1400C270C (PopPepLockActivityLink.c)
 *     KeThawProcess @ 0x1400C7448 (KeThawProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x1400C8B14 (KeSetProcessSchedulingGroup.c)
 *     KeForceResumeProcess @ 0x1400C8E70 (KeForceResumeProcess.c)
 *     KeFreezeProcess @ 0x1400C8F3C (KeFreezeProcess.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400ECA30 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAcquireProcessLockExclusive @ 0x1400F2F50 (KiAcquireProcessLockExclusive.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400F709C (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     MiSectionCreated @ 0x1400FD2C8 (MiSectionCreated.c)
 *     KeSetAffinityThread @ 0x140134304 (KeSetAffinityThread.c)
 *     MiFreeUnusedPfnPages @ 0x14013E234 (MiFreeUnusedPfnPages.c)
 *     KeSetAffinityProcess @ 0x14014A0B8 (KeSetAffinityProcess.c)
 *     VslIumEfiRuntimeService @ 0x1401C2BA0 (VslIumEfiRuntimeService.c)
 *     KeFreezeProcessNew @ 0x1401D2130 (KeFreezeProcessNew.c)
 *     KeTransitionProcessorParkState @ 0x1401DBC78 (KeTransitionProcessorParkState.c)
 *     MiPurgeSubsection @ 0x1401DF074 (MiPurgeSubsection.c)
 *     MiInitializeDynamicPfnsTarget @ 0x1401E1F14 (MiInitializeDynamicPfnsTarget.c)
 *     MiClearFileOnlyPfn @ 0x1401ED404 (MiClearFileOnlyPfn.c)
 *     MiNoPagesLastChance @ 0x1401F3384 (MiNoPagesLastChance.c)
 *     DbgpInsertDebugPrintCallback @ 0x140211400 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402114B0 (DbgpRemoveDebugPrintCallback.c)
 *     VmpFaultEntryInsert @ 0x140223E88 (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x140223F20 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockExclusive @ 0x140224508 (VmpProcessContextLockExclusive.c)
 *     ViDeadlockDetectionLock @ 0x14071518C (ViDeadlockDetectionLock.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EF00 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DD30 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockExclusiveAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  volatile LONG v2; // edx
  char v3; // dl
  bool v4; // zf
  signed __int32 v5; // eax
  char v6; // dl
  int v7; // [rsp+38h] [rbp+10h] BYREF

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v6 = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SpinLock, v6);
  }
  else
  {
    v7 = 0;
    if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    {
      v3 = -1;
      v7 = ExpWaitForSpinLockExclusiveAndAcquire(SpinLock, v3);
    }
    v2 = *SpinLock;
    while ( (v2 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v2 & 0x40000000) == 0 )
      {
        v5 = _InterlockedCompareExchange(SpinLock, v2 | 0x40000000, v2);
        v4 = v2 == v5;
        v2 = v5;
        if ( !v4 )
          continue;
      }
      KeYieldProcessorEx(&v7);
      v2 = *SpinLock;
    }
  }
}
