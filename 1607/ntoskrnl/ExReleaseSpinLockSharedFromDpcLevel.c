/*
 * XREFs of ExReleaseSpinLockSharedFromDpcLevel @ 0x1400EA3E0
 * Callers:
 *     MmUnlockLoadedModuleListShared @ 0x140014A04 (MmUnlockLoadedModuleListShared.c)
 *     MiPageToNode @ 0x14001BA54 (MiPageToNode.c)
 *     MiSystemFault @ 0x14001BFF0 (MiSystemFault.c)
 *     MiAbortCombineScan @ 0x14001D810 (MiAbortCombineScan.c)
 *     MiLocateSubsectionNode @ 0x140021BC0 (MiLocateSubsectionNode.c)
 *     MiGetControlAreaPtes @ 0x14002C870 (MiGetControlAreaPtes.c)
 *     KiAbEntryRemoveFromTree @ 0x140031030 (KiAbEntryRemoveFromTree.c)
 *     PfSnGetFileInformation @ 0x140037630 (PfSnGetFileInformation.c)
 *     MiQueryAddressSpan @ 0x140042CC0 (MiQueryAddressSpan.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiUnlinkPageFromList @ 0x140065A40 (MiUnlinkPageFromList.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14007E5F8 (KiActivateWaiterQueueWithNoLocks.c)
 *     vDbgPrintExWithPrefixInternal @ 0x140081BB0 (vDbgPrintExWithPrefixInternal.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x140084530 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     MiStartingOffsetNeedLock @ 0x140099C4C (MiStartingOffsetNeedLock.c)
 *     KeQueryAffinityProcess @ 0x14009CC5C (KeQueryAffinityProcess.c)
 *     InsertEventEntryInLookUpTable @ 0x14009EF40 (InsertEventEntryInLookUpTable.c)
 *     MiProtoFault @ 0x1400A3E68 (MiProtoFault.c)
 *     MiAcquireProperVm @ 0x1400A4200 (MiAcquireProperVm.c)
 *     KeSetLegacyAffinityThread @ 0x1400CA8C8 (KeSetLegacyAffinityThread.c)
 *     MiMarkSharedImageCfgBits @ 0x1400E9AA0 (MiMarkSharedImageCfgBits.c)
 *     IoPageReadEx @ 0x1400E9F10 (IoPageReadEx.c)
 *     ExProtectPoolEx @ 0x1400EA270 (ExProtectPoolEx.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400ECA30 (KiAbEntryGetLockedHeadEntry.c)
 *     KiRundownMutants @ 0x1400F2320 (KiRundownMutants.c)
 *     KeQueryBasePriorityThread @ 0x1400F6910 (KeQueryBasePriorityThread.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     DbgEnumerateCallback @ 0x1401356CC (DbgEnumerateCallback.c)
 *     KeQueryCpuSetsProcess @ 0x1401D761C (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1401D7844 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x1401DC064 (KiSelectCandidateProcessor.c)
 *     MmReadProcessPageTables @ 0x1401EEF28 (MmReadProcessPageTables.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1401F50B0 (MiGetSharedProtosAtDpcLevel.c)
 *     MiRecheckVaVm @ 0x1401FA2EC (MiRecheckVaVm.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402114B0 (DbgpRemoveDebugPrintCallback.c)
 *     VmAccessFault @ 0x140223D14 (VmAccessFault.c)
 *     VmpInvalidateOutstandingFaults @ 0x14022441C (VmpInvalidateOutstandingFaults.c)
 *     ViDeadlockDetectionUnlock @ 0x1407151C0 (ViDeadlockDetectionUnlock.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14022DEBC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __stdcall ExReleaseSpinLockSharedFromDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(SpinLock, retaddr);
  }
  else
  {
    _InterlockedAnd(SpinLock, 0xBFFFFFFF);
    _InterlockedDecrement(SpinLock);
  }
}
