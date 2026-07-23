/*
 * XREFs of ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0
 * Callers:
 *     MiGatherMappedPages @ 0x14001FD70 (MiGatherMappedPages.c)
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MiRemoveUnusedSegment @ 0x140026894 (MiRemoveUnusedSegment.c)
 *     MiInsertUnusedSubsection @ 0x14002694C (MiInsertUnusedSubsection.c)
 *     MiInsertUnusedSegment @ 0x140026B6C (MiInsertUnusedSegment.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MmUnmapViewInSystemCache @ 0x140048E40 (MmUnmapViewInSystemCache.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     MiOutPageSingleKernelStack @ 0x1400757B4 (MiOutPageSingleKernelStack.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14007EAE4 (KeSetPriorityAndQuantumProcess.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400826C0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     MmLockLoadedModuleListExclusive @ 0x140082E18 (MmLockLoadedModuleListExclusive.c)
 *     MiBeginLargePageAccessor @ 0x14008A4F8 (MiBeginLargePageAccessor.c)
 *     MiRemoveFaultNode @ 0x14008AF78 (MiRemoveFaultNode.c)
 *     MiTrimSharedPage @ 0x14008DE44 (MiTrimSharedPage.c)
 *     MiDereferenceControlAreaPfnList @ 0x14008F3D0 (MiDereferenceControlAreaPfnList.c)
 *     MiCheckForControlAreaDeletion @ 0x14008F4B0 (MiCheckForControlAreaDeletion.c)
 *     MiClearFilePointer @ 0x14008F584 (MiClearFilePointer.c)
 *     MiRemoveUnusedSubsection @ 0x14008FC04 (MiRemoveUnusedSubsection.c)
 *     MiWaitForPageWriteCompletion @ 0x1400973E8 (MiWaitForPageWriteCompletion.c)
 *     MiZeroSectionObjectPointer @ 0x1400B2FC0 (MiZeroSectionObjectPointer.c)
 *     PopPepWork @ 0x1400BFC34 (PopPepWork.c)
 *     PopPepLockActivityLink @ 0x1400C059C (PopPepLockActivityLink.c)
 *     KeThawProcess @ 0x1400C52E8 (KeThawProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x1400C69B4 (KeSetProcessSchedulingGroup.c)
 *     KeForceResumeProcess @ 0x1400C6D10 (KeForceResumeProcess.c)
 *     KeFreezeProcess @ 0x1400C6DDC (KeFreezeProcess.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400EA8A0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAcquireProcessLockExclusive @ 0x1400F0DA0 (KiAcquireProcessLockExclusive.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1400F4EDC (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     MiSectionCreated @ 0x1400FB048 (MiSectionCreated.c)
 *     KeSetAffinityThread @ 0x140134874 (KeSetAffinityThread.c)
 *     MiFreeUnusedPfnPages @ 0x14013E7A4 (MiFreeUnusedPfnPages.c)
 *     KeSetAffinityProcess @ 0x14014A628 (KeSetAffinityProcess.c)
 *     VslIumEfiRuntimeService @ 0x1401C2A84 (VslIumEfiRuntimeService.c)
 *     KeFreezeProcessNew @ 0x1401D1F5C (KeFreezeProcessNew.c)
 *     KeTransitionProcessorParkState @ 0x1401DBAA4 (KeTransitionProcessorParkState.c)
 *     MiPurgeSubsection @ 0x1401DEEA0 (MiPurgeSubsection.c)
 *     MiInitializeDynamicPfnsTarget @ 0x1401E1D40 (MiInitializeDynamicPfnsTarget.c)
 *     MiClearFileOnlyPfn @ 0x1401ED230 (MiClearFileOnlyPfn.c)
 *     MiNoPagesLastChance @ 0x1401F31B0 (MiNoPagesLastChance.c)
 *     DbgpInsertDebugPrintCallback @ 0x14021122C (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402112DC (DbgpRemoveDebugPrintCallback.c)
 *     VmpFaultEntryInsert @ 0x140223CB4 (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x140223D4C (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockExclusive @ 0x140224334 (VmpProcessContextLockExclusive.c)
 *     ViDeadlockDetectionLock @ 0x14071518C (ViDeadlockDetectionLock.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EA80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
