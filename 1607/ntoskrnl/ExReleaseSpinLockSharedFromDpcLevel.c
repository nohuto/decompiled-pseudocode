/*
 * XREFs of ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250
 * Callers:
 *     MmUnlockLoadedModuleListShared @ 0x140014584 (MmUnlockLoadedModuleListShared.c)
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     MiSystemFault @ 0x14001BB70 (MiSystemFault.c)
 *     MiAbortCombineScan @ 0x14001D390 (MiAbortCombineScan.c)
 *     MiLocateSubsectionNode @ 0x140021740 (MiLocateSubsectionNode.c)
 *     MiGetControlAreaPtes @ 0x14002C3F0 (MiGetControlAreaPtes.c)
 *     KiAbEntryRemoveFromTree @ 0x140030BB0 (KiAbEntryRemoveFromTree.c)
 *     PfSnGetFileInformation @ 0x1400371B0 (PfSnGetFileInformation.c)
 *     MiQueryAddressSpan @ 0x140042840 (MiQueryAddressSpan.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14007E678 (KiActivateWaiterQueueWithNoLocks.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x140082690 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     vDbgPrintExWithPrefixInternal @ 0x140084D34 (vDbgPrintExWithPrefixInternal.c)
 *     InsertEventEntryInLookUpTable @ 0x140085234 (InsertEventEntryInLookUpTable.c)
 *     MiStartingOffsetNeedLock @ 0x14009944C (MiStartingOffsetNeedLock.c)
 *     KeQueryAffinityProcess @ 0x14009C45C (KeQueryAffinityProcess.c)
 *     MiProtoFault @ 0x1400A2790 (MiProtoFault.c)
 *     MiAcquireProperVm @ 0x1400A2B28 (MiAcquireProperVm.c)
 *     KeSetLegacyAffinityThread @ 0x1400C8768 (KeSetLegacyAffinityThread.c)
 *     MiMarkSharedImageCfgBits @ 0x1400E7910 (MiMarkSharedImageCfgBits.c)
 *     IoPageReadEx @ 0x1400E7D80 (IoPageReadEx.c)
 *     ExProtectPoolEx @ 0x1400E80E0 (ExProtectPoolEx.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400EA8A0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiRundownMutants @ 0x1400F0170 (KiRundownMutants.c)
 *     KeQueryBasePriorityThread @ 0x1400F4760 (KeQueryBasePriorityThread.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     DbgEnumerateCallback @ 0x140135C3C (DbgEnumerateCallback.c)
 *     KeQueryCpuSetsProcess @ 0x1401D7448 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1401D7670 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x1401DBE90 (KiSelectCandidateProcessor.c)
 *     MmReadProcessPageTables @ 0x1401EED54 (MmReadProcessPageTables.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1401F4EDC (MiGetSharedProtosAtDpcLevel.c)
 *     MiRecheckVaVm @ 0x1401FA118 (MiRecheckVaVm.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402112DC (DbgpRemoveDebugPrintCallback.c)
 *     VmAccessFault @ 0x140223B40 (VmAccessFault.c)
 *     VmpInvalidateOutstandingFaults @ 0x140224248 (VmpInvalidateOutstandingFaults.c)
 *     ViDeadlockDetectionUnlock @ 0x1407151C0 (ViDeadlockDetectionUnlock.c)
 * Callees:
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14022DCE8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
