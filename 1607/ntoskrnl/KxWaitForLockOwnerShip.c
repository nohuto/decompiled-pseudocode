/*
 * XREFs of KxWaitForLockOwnerShip @ 0x14001BDA0
 * Callers:
 *     ExFreeLargePool @ 0x140010BE0 (ExFreeLargePool.c)
 *     ExpAllocateBigPool @ 0x140011AD0 (ExpAllocateBigPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140012AF0 (ExpInsertPoolTrackerExpansion.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14001B760 (MiInsertLargePageInNodeListHelper.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001BCF0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     IopCheckDeviceAndDriver @ 0x14002DCA0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x14002DEE0 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x14002ECF0 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14002EDD0 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementVpbRefCount @ 0x14002EE70 (IopDecrementVpbRefCount.c)
 *     KiAbEntryRemoveFromTree @ 0x140031030 (KiAbEntryRemoveFromTree.c)
 *     MmCheckCachedPageStates @ 0x140033AB0 (MmCheckCachedPageStates.c)
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     AlpcpSignalAndWait @ 0x14005E020 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x14005E350 (AlpcpSignal.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E910 (NtWaitForWorkViaWorkerFactory.c)
 *     MiDeleteBatch @ 0x140064B10 (MiDeleteBatch.c)
 *     MiUnlinkPageFromList @ 0x140065A40 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140066D00 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400671C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1400695D0 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x1400701C0 (MiInsertProtectedStandbyPage.c)
 *     KxAcquireQueuedSpinLock @ 0x1400708F8 (KxAcquireQueuedSpinLock.c)
 *     IoAcquireCancelSpinLock @ 0x140078440 (IoAcquireCancelSpinLock.c)
 *     MiUnlinkNodeLargePage @ 0x14008A830 (MiUnlinkNodeLargePage.c)
 *     MiLargePageFreeToZero @ 0x14008B560 (MiLargePageFreeToZero.c)
 *     IopDereferenceVpbAndFree @ 0x1400967B0 (IopDereferenceVpbAndFree.c)
 *     MiDecayPfnFullyInitialized @ 0x140096A10 (MiDecayPfnFullyInitialized.c)
 *     MiEmptyDecayClusterTimers @ 0x1400BE310 (MiEmptyDecayClusterTimers.c)
 *     IoGetAttachedDeviceReference @ 0x1400C48F0 (IoGetAttachedDeviceReference.c)
 *     MiProcessWorkingSets @ 0x1400CD640 (MiProcessWorkingSets.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E8D30 (KeAcquireQueuedSpinLock.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400ECA30 (KiAbEntryGetLockedHeadEntry.c)
 *     IopGetMountFlag @ 0x1400EE9E0 (IopGetMountFlag.c)
 *     NtSetInformationWorkerFactory @ 0x1400F7C10 (NtSetInformationWorkerFactory.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400F87A0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1400F8900 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400F8A70 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400F8F30 (ExpWorkerFactoryCheckCreate.c)
 *     MiInsertInSystemSpace @ 0x1400FF2A0 (MiInsertInSystemSpace.c)
 *     MiReturnNonPagedPoolVa @ 0x140103670 (MiReturnNonPagedPoolVa.c)
 *     MiZeroPageThread @ 0x140139C40 (MiZeroPageThread.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401BAE68 (HvlNotifyLongSpinWait.c)
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
