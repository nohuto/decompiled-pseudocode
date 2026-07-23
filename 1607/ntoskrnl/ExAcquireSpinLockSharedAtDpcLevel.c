/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x14001D8E0
 * Callers:
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     MiSystemFault @ 0x14001BB70 (MiSystemFault.c)
 *     MiAbortCombineScan @ 0x14001D390 (MiAbortCombineScan.c)
 *     MmLockLoadedModuleListShared @ 0x14001F120 (MmLockLoadedModuleListShared.c)
 *     KiAbEntryRemoveFromTree @ 0x140030BB0 (KiAbEntryRemoveFromTree.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14007E678 (KiActivateWaiterQueueWithNoLocks.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400826C0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     vDbgPrintExWithPrefixInternal @ 0x140084D34 (vDbgPrintExWithPrefixInternal.c)
 *     InsertEventEntryInLookUpTable @ 0x140085234 (InsertEventEntryInLookUpTable.c)
 *     KeQueryAffinityProcess @ 0x14009C45C (KeQueryAffinityProcess.c)
 *     MiProtoFault @ 0x1400A2790 (MiProtoFault.c)
 *     MiAcquireProperVm @ 0x1400A2B28 (MiAcquireProperVm.c)
 *     KeSetLegacyAffinityThread @ 0x1400C8768 (KeSetLegacyAffinityThread.c)
 *     KiRundownMutants @ 0x1400F0170 (KiRundownMutants.c)
 *     KeQueryBasePriorityThread @ 0x1400F4760 (KeQueryBasePriorityThread.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     DbgEnumerateCallback @ 0x140135C3C (DbgEnumerateCallback.c)
 *     KiAcquireProcessLockShared @ 0x1401DAD7C (KiAcquireProcessLockShared.c)
 *     KiSelectCandidateProcessor @ 0x1401DBE90 (KiSelectCandidateProcessor.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1401F4EDC (MiGetSharedProtosAtDpcLevel.c)
 *     MiRecheckVaVm @ 0x1401FA118 (MiRecheckVaVm.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402112DC (DbgpRemoveDebugPrintCallback.c)
 *     VmAccessFault @ 0x140223B40 (VmAccessFault.c)
 *     VmpInvalidateOutstandingFaults @ 0x140224248 (VmpInvalidateOutstandingFaults.c)
 *     ViDeadlockDetectionLock @ 0x14071518C (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140089320 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14022DC08 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockSharedAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  signed __int32 v1; // eax
  __int64 v2; // rdx

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, -1);
  }
  else
  {
    _m_prefetchw((const void *)SpinLock);
    v1 = *SpinLock & 0x7FFFFFFF;
    v2 = (unsigned int)(v1 + 1);
    if ( v1 != _InterlockedCompareExchange(SpinLock, v2, v1) )
    {
      LOBYTE(v2) = -1;
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, v2);
    }
  }
}
