/*
 * XREFs of ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0
 * Callers:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x140002518 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     MiAcquireProperVm @ 0x140007D88 (MiAcquireProperVm.c)
 *     MiSystemFault @ 0x1400097D0 (MiSystemFault.c)
 *     KeQueryBasePriorityThread @ 0x1400285C8 (KeQueryBasePriorityThread.c)
 *     KeQueryAffinityProcess @ 0x140028660 (KeQueryAffinityProcess.c)
 *     KiRundownMutants @ 0x14002BB9C (KiRundownMutants.c)
 *     KiAbEntryRemoveFromTree @ 0x140033590 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400348F0 (KiAbEntryGetLockedHeadEntry.c)
 *     MmUnlockLoadedModuleListShared @ 0x140035BB8 (MmUnlockLoadedModuleListShared.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiQueryAddressSpan @ 0x14005E760 (MiQueryAddressSpan.c)
 *     MiGetControlAreaPtes @ 0x140062620 (MiGetControlAreaPtes.c)
 *     MiPageToNode @ 0x140071380 (MiPageToNode.c)
 *     IoPageRead @ 0x140077720 (IoPageRead.c)
 *     ExProtectPool @ 0x140077FD0 (ExProtectPool.c)
 *     PfSnGetFileInformation @ 0x140079990 (PfSnGetFileInformation.c)
 *     MiStartingOffsetNeedLock @ 0x14007C8C0 (MiStartingOffsetNeedLock.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140094210 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeSetLegacyAffinityThread @ 0x140095414 (KeSetLegacyAffinityThread.c)
 *     MiAbortCombineScan @ 0x1400A980C (MiAbortCombineScan.c)
 *     MiLocateSubsectionNode @ 0x1400AAEC0 (MiLocateSubsectionNode.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiSystemImageHasPrivateFixups @ 0x1400DF9F4 (MiSystemImageHasPrivateFixups.c)
 *     vDbgPrintExWithPrefixInternal @ 0x1400E69D8 (vDbgPrintExWithPrefixInternal.c)
 *     MiProtoFault @ 0x1400EA824 (MiProtoFault.c)
 *     DbgEnumerateCallback @ 0x1400F44E0 (DbgEnumerateCallback.c)
 *     MiRecheckVaVm @ 0x140129974 (MiRecheckVaVm.c)
 *     KeQueryCpuSetsProcess @ 0x1401C855C (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1401C8784 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x1401CC3D8 (KiSelectCandidateProcessor.c)
 *     MmReadProcessPageTables @ 0x1401DE458 (MmReadProcessPageTables.c)
 *     MiGetSharedProtos @ 0x1401E2F60 (MiGetSharedProtos.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1401F790C (DbgpRemoveDebugPrintCallback.c)
 *     VmAccessFault @ 0x14020C258 (VmAccessFault.c)
 *     VmpInvalidateOutstandingFaults @ 0x14020C814 (VmpInvalidateOutstandingFaults.c)
 *     ViDeadlockDetectionUnlock @ 0x1406CD3D8 (ViDeadlockDetectionUnlock.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14021424C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
