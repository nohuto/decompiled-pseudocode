/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x140035AF0
 * Callers:
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140002548 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     MiAcquireProperVm @ 0x140007D88 (MiAcquireProperVm.c)
 *     MiSystemFault @ 0x1400097D0 (MiSystemFault.c)
 *     KiAcquireProcessLockShared @ 0x140028764 (KiAcquireProcessLockShared.c)
 *     KiRundownMutants @ 0x14002BB9C (KiRundownMutants.c)
 *     MmLockLoadedModuleListShared @ 0x140032BA0 (MmLockLoadedModuleListShared.c)
 *     KiAbEntryRemoveFromTree @ 0x140033590 (KiAbEntryRemoveFromTree.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiPageToNode @ 0x140071380 (MiPageToNode.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x140094210 (KiActivateWaiterQueueWithNoLocks.c)
 *     KeSetLegacyAffinityThread @ 0x140095414 (KeSetLegacyAffinityThread.c)
 *     MiAbortCombineScan @ 0x1400A980C (MiAbortCombineScan.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     vDbgPrintExWithPrefixInternal @ 0x1400E69D8 (vDbgPrintExWithPrefixInternal.c)
 *     MiProtoFault @ 0x1400EA824 (MiProtoFault.c)
 *     DbgEnumerateCallback @ 0x1400F44E0 (DbgEnumerateCallback.c)
 *     MiRecheckVaVm @ 0x140129974 (MiRecheckVaVm.c)
 *     KiSelectCandidateProcessor @ 0x1401CC3D8 (KiSelectCandidateProcessor.c)
 *     MiGetSharedProtos @ 0x1401E2F60 (MiGetSharedProtos.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1401F790C (DbgpRemoveDebugPrintCallback.c)
 *     VmAccessFault @ 0x14020C258 (VmAccessFault.c)
 *     VmpInvalidateOutstandingFaults @ 0x14020C814 (VmpInvalidateOutstandingFaults.c)
 *     ViDeadlockDetectionLock @ 0x1406CD3A4 (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400AAE30 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14021416C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
