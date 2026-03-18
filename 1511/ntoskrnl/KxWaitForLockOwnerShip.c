/*
 * XREFs of KxWaitForLockOwnerShip @ 0x1400B1C70
 * Callers:
 *     MiInsertInSystemSpace @ 0x14000A670 (MiInsertInSystemSpace.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14000FE50 (MiInsertAndUnlockStandbyPages.c)
 *     MiInsertProtectedStandbyPage @ 0x140010160 (MiInsertProtectedStandbyPage.c)
 *     MiEmptyDecayClusterTimers @ 0x140014790 (MiEmptyDecayClusterTimers.c)
 *     IoGetAttachedDeviceReference @ 0x14001B010 (IoGetAttachedDeviceReference.c)
 *     KiAbEntryRemoveFromTree @ 0x140033590 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400348F0 (KiAbEntryGetLockedHeadEntry.c)
 *     MiDeleteBatch @ 0x14003D3A0 (MiDeleteBatch.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14003ECA0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     ExpAllocateBigPool @ 0x140041130 (ExpAllocateBigPool.c)
 *     IopCheckDeviceAndDriver @ 0x140043BB0 (IopCheckDeviceAndDriver.c)
 *     MiReplaceTransitionPage @ 0x1400714A0 (MiReplaceTransitionPage.c)
 *     AlpcpSignal @ 0x14007A0C0 (AlpcpSignal.c)
 *     IopDecrementDeviceObjectRef @ 0x14007E3E0 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14007E610 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementVpbRefCount @ 0x14007E6B0 (IopDecrementVpbRefCount.c)
 *     AlpcpSignalAndWait @ 0x14007E970 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140083BF0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     ExFreeLargePool @ 0x1400892D0 (ExFreeLargePool.c)
 *     IopGetMountFlag @ 0x14008E7A0 (IopGetMountFlag.c)
 *     MiProcessWorkingSets @ 0x1400A53A0 (MiProcessWorkingSets.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AF9C0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReturnNonPagedPoolVa @ 0x1400B4000 (MiReturnNonPagedPoolVa.c)
 *     MiReferenceIoPages @ 0x1400C16A0 (MiReferenceIoPages.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1400C5340 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400C54A0 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400C59E0 (ExpWorkerFactoryCheckCreate.c)
 *     NtSetInformationWorkerFactory @ 0x1400C5D50 (NtSetInformationWorkerFactory.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400C6E40 (ExpInsertPoolTrackerExpansion.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1400C7DC0 (ExpRemovePoolTrackerExpansion.c)
 *     IoAcquireCancelSpinLock @ 0x1400CAFE0 (IoAcquireCancelSpinLock.c)
 *     IopCheckVpbMounted @ 0x1400CFEA0 (IopCheckVpbMounted.c)
 *     IopDereferenceVpbAndFree @ 0x1400D7CB0 (IopDereferenceVpbAndFree.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140103E00 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KxWaitForLockOwnerShip(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v4; // ebx

  *(_QWORD *)(a1 + 8) |= 1uLL;
  v4 = 0;
  *a2 = a1;
  do
  {
    if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v4, a2, a3);
  }
  while ( (*(_QWORD *)(a1 + 8) & 1) != 0 );
  return v4;
}
