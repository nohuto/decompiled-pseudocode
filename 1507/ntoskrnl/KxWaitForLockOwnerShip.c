/*
 * XREFs of KxWaitForLockOwnerShip @ 0x140042D90
 * Callers:
 *     IopCheckVpbMounted @ 0x140006570 (IopCheckVpbMounted.c)
 *     MiEmptyDecayClusterTimers @ 0x140011F70 (MiEmptyDecayClusterTimers.c)
 *     IopGetMountFlag @ 0x140025EC0 (IopGetMountFlag.c)
 *     CcUninitializeCacheMap @ 0x140030770 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x1400328D0 (CcWorkerThread.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     CcInitializeCacheMap @ 0x140040D10 (CcInitializeCacheMap.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     AlpcpSignalAndWait @ 0x140044130 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x1400444B0 (AlpcpSignal.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1400456B0 (ExpRemovePoolTrackerExpansion.c)
 *     IopDecrementVpbRefCount @ 0x1400457D0 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400458A0 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x140045A10 (IopDecrementDeviceObjectRef.c)
 *     ExpAllocateBigPool @ 0x140046030 (ExpAllocateBigPool.c)
 *     ExFreeLargePool @ 0x140046E10 (ExFreeLargePool.c)
 *     IopCheckDeviceAndDriver @ 0x140047EC0 (IopCheckDeviceAndDriver.c)
 *     MiInsertAndUnlockStandbyPages @ 0x1400553B0 (MiInsertAndUnlockStandbyPages.c)
 *     MiInsertProtectedStandbyPage @ 0x140055700 (MiInsertProtectedStandbyPage.c)
 *     MiReplaceTransitionPage @ 0x140059C70 (MiReplaceTransitionPage.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14006BE00 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14006C640 (ExpWorkerFactoryCheckCreate.c)
 *     NtSetInformationWorkerFactory @ 0x14006CC00 (NtSetInformationWorkerFactory.c)
 *     IoAcquireCancelSpinLock @ 0x140073D60 (IoAcquireCancelSpinLock.c)
 *     CcSetFileSizesEx @ 0x140078B30 (CcSetFileSizesEx.c)
 *     MiProcessWorkingSets @ 0x140099DB0 (MiProcessWorkingSets.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14009C480 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x14009D7A0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14009D900 (NtWaitForWorkViaWorkerFactory.c)
 *     MiDeleteBatch @ 0x1400B2010 (MiDeleteBatch.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1400C7B60 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     IoGetAttachedDeviceReference @ 0x1400CF130 (IoGetAttachedDeviceReference.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x1400D6F58 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x1400F5E10 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400F6A90 (KiAbEntryGetLockedHeadEntry.c)
 *     MiInsertInSystemSpace @ 0x1400F8C80 (MiInsertInSystemSpace.c)
 *     MiAttachThreadDone @ 0x1400FB904 (MiAttachThreadDone.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400FF2B0 (ExpInsertPoolTrackerExpansion.c)
 *     IopDereferenceVpbAndFree @ 0x14010C250 (IopDereferenceVpbAndFree.c)
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1402009B4 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x140200A04 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExDeferredFreePool @ 0x14028A240 (ExDeferredFreePool.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KxWaitForLockOwnerShip(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ebx

  *(_QWORD *)(a1 + 8) |= 1uLL;
  v3 = 0;
  *a2 = a1;
  do
  {
    if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v3);
  }
  while ( (*(_QWORD *)(a1 + 8) & 1) != 0 );
  return v3;
}
