/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x14001DD60
 * Callers:
 *     MiPageToNode @ 0x14001BA54 (MiPageToNode.c)
 *     MiSystemFault @ 0x14001BFF0 (MiSystemFault.c)
 *     MiAbortCombineScan @ 0x14001D810 (MiAbortCombineScan.c)
 *     MmLockLoadedModuleListShared @ 0x14001F5A0 (MmLockLoadedModuleListShared.c)
 *     KiAbEntryRemoveFromTree @ 0x140031030 (KiAbEntryRemoveFromTree.c)
 *     MiUnlinkPageFromList @ 0x140065A40 (MiUnlinkPageFromList.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14007E5F8 (KiActivateWaiterQueueWithNoLocks.c)
 *     vDbgPrintExWithPrefixInternal @ 0x140081BB0 (vDbgPrintExWithPrefixInternal.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140084560 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     KeQueryAffinityProcess @ 0x14009CC5C (KeQueryAffinityProcess.c)
 *     InsertEventEntryInLookUpTable @ 0x14009EF40 (InsertEventEntryInLookUpTable.c)
 *     MiProtoFault @ 0x1400A3E68 (MiProtoFault.c)
 *     MiAcquireProperVm @ 0x1400A4200 (MiAcquireProperVm.c)
 *     KeSetLegacyAffinityThread @ 0x1400CA8C8 (KeSetLegacyAffinityThread.c)
 *     KiRundownMutants @ 0x1400F2320 (KiRundownMutants.c)
 *     KeQueryBasePriorityThread @ 0x1400F6910 (KeQueryBasePriorityThread.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     DbgEnumerateCallback @ 0x1401356CC (DbgEnumerateCallback.c)
 *     KiAcquireProcessLockShared @ 0x1401DAF50 (KiAcquireProcessLockShared.c)
 *     KiSelectCandidateProcessor @ 0x1401DC064 (KiSelectCandidateProcessor.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1401F50B0 (MiGetSharedProtosAtDpcLevel.c)
 *     MiRecheckVaVm @ 0x1401FA2EC (MiRecheckVaVm.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402114B0 (DbgpRemoveDebugPrintCallback.c)
 *     VmAccessFault @ 0x140223D14 (VmAccessFault.c)
 *     VmpInvalidateOutstandingFaults @ 0x14022441C (VmpInvalidateOutstandingFaults.c)
 *     ViDeadlockDetectionLock @ 0x14071518C (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140089C20 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14022DDDC (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
