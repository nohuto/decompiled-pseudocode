/*
 * XREFs of KxWaitForLockOwnerShip @ 0x14001B920
 * Callers:
 *     ExFreeLargePool @ 0x140010760 (ExFreeLargePool.c)
 *     ExpAllocateBigPool @ 0x140011650 (ExpAllocateBigPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140012670 (ExpInsertPoolTrackerExpansion.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14001B2E0 (MiInsertLargePageInNodeListHelper.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IopCheckDeviceAndDriver @ 0x14002D820 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x14002DA60 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x14002E870 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14002E950 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementVpbRefCount @ 0x14002E9F0 (IopDecrementVpbRefCount.c)
 *     KiAbEntryRemoveFromTree @ 0x140030BB0 (KiAbEntryRemoveFromTree.c)
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     AlpcpSignalAndWait @ 0x14005DBA0 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x14005DED0 (AlpcpSignal.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E490 (NtWaitForWorkViaWorkerFactory.c)
 *     MiDeleteBatch @ 0x140064690 (MiDeleteBatch.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140066880 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x14006FD40 (MiInsertProtectedStandbyPage.c)
 *     KxAcquireQueuedSpinLock @ 0x140070478 (KxAcquireQueuedSpinLock.c)
 *     IoAcquireCancelSpinLock @ 0x1400784C0 (IoAcquireCancelSpinLock.c)
 *     MiUnlinkNodeLargePage @ 0x140089F30 (MiUnlinkNodeLargePage.c)
 *     MiLargePageFreeToZero @ 0x14008AC60 (MiLargePageFreeToZero.c)
 *     IopDereferenceVpbAndFree @ 0x140095FB0 (IopDereferenceVpbAndFree.c)
 *     MiDecayPfnFullyInitialized @ 0x140096210 (MiDecayPfnFullyInitialized.c)
 *     MiEmptyDecayClusterTimers @ 0x1400BC1A0 (MiEmptyDecayClusterTimers.c)
 *     IoGetAttachedDeviceReference @ 0x1400C2790 (IoGetAttachedDeviceReference.c)
 *     MiProcessWorkingSets @ 0x1400CB4E0 (MiProcessWorkingSets.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400EA8A0 (KiAbEntryGetLockedHeadEntry.c)
 *     IopGetMountFlag @ 0x1400EC860 (IopGetMountFlag.c)
 *     NtSetInformationWorkerFactory @ 0x1400F5A50 (NtSetInformationWorkerFactory.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400F65E0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1400F6740 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400F68B0 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400F6D70 (ExpWorkerFactoryCheckCreate.c)
 *     MiInsertInSystemSpace @ 0x1400FD020 (MiInsertInSystemSpace.c)
 *     MiReturnNonPagedPoolVa @ 0x1401013F0 (MiReturnNonPagedPoolVa.c)
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
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
