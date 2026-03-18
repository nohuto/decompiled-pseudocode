/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001BCF0
 * Callers:
 *     MiObtainSystemCacheView @ 0x140019B70 (MiObtainSystemCacheView.c)
 *     MiReleasePageFileInfo @ 0x14001A280 (MiReleasePageFileInfo.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14001B760 (MiInsertLargePageInNodeListHelper.c)
 *     MiIncreaseAvailablePages @ 0x14001BB80 (MiIncreaseAvailablePages.c)
 *     MiRestoreTransitionPte @ 0x14001D1F0 (MiRestoreTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DF00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     KiAbEntryRemoveFromTree @ 0x140031030 (KiAbEntryRemoveFromTree.c)
 *     MiUpdateWsle @ 0x14003C790 (MiUpdateWsle.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     MmUnmapViewInSystemCache @ 0x1400492C0 (MmUnmapViewInSystemCache.c)
 *     MiRemoveAnyPage @ 0x140064740 (MiRemoveAnyPage.c)
 *     MiUnlinkPageFromList @ 0x140065A40 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400671C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1400695D0 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x1400701C0 (MiInsertProtectedStandbyPage.c)
 *     MmEnforceWorkingSetLimit @ 0x140076CF4 (MmEnforceWorkingSetLimit.c)
 *     MiTryUnlinkNodeLargePage @ 0x14008A2E0 (MiTryUnlinkNodeLargePage.c)
 *     MiReferenceIoPages @ 0x14009C300 (MiReferenceIoPages.c)
 *     WmipNotificationIrpCancel @ 0x1400A262C (WmipNotificationIrpCancel.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400AD44C (MmAdjustWorkingSetSizeEx.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x1400AE784 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x1400AEAD8 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiSignalLargePageRebuild @ 0x1400BE73C (MiSignalLargePageRebuild.c)
 *     MiVolunteerForTrimFirst @ 0x1400E5F90 (MiVolunteerForTrimFirst.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400ECA30 (KiAbEntryGetLockedHeadEntry.c)
 *     KeTerminateThread @ 0x1400F2454 (KeTerminateThread.c)
 *     KeStartThread @ 0x1400F2A6C (KeStartThread.c)
 *     MiUpdatePageAttributeStamp @ 0x1400FCF10 (MiUpdatePageAttributeStamp.c)
 *     MiReplaceTransitionPage @ 0x1401074C4 (MiReplaceTransitionPage.c)
 *     MiLockAllMemoryLists @ 0x140112200 (MiLockAllMemoryLists.c)
 *     MiMirrorNodeLargePages @ 0x14011246C (MiMirrorNodeLargePages.c)
 *     MiPurgeLargeZeroNodePages @ 0x140120714 (MiPurgeLargeZeroNodePages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1401209F0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1401470C4 (MiDbgTranslatePhysicalAddress.c)
 *     MmEnableModifiedWriteOfSection @ 0x1401E5C5C (MmEnableModifiedWriteOfSection.c)
 *     MiEmptyTargetedWorkingSet @ 0x1401E9720 (MiEmptyTargetedWorkingSet.c)
 *     MiFreeModifiedReservations @ 0x1401EE838 (MiFreeModifiedReservations.c)
 *     MiGetEnclavePage @ 0x1401F040C (MiGetEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x1401F3054 (MiUnlinkPageFromBadList.c)
 *     MiNoPagesLastChance @ 0x1401F3384 (MiNoPagesLastChance.c)
 *     MiSwapNumaStandbyPage @ 0x1401F3ACC (MiSwapNumaStandbyPage.c)
 *     MiCoalesceFreeLargePages @ 0x1401FCC90 (MiCoalesceFreeLargePages.c)
 *     MiRebuildLargePages @ 0x1401FDB30 (MiRebuildLargePages.c)
 *     ExShareAddressSpaceWithDevice @ 0x14022EB68 (ExShareAddressSpaceWithDevice.c)
 *     PnprMirrorMarkedPages @ 0x1403DC208 (PnprMirrorMarkedPages.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14001BDA0 (KxWaitForLockOwnerShip.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  LockHandle->LockQueue.Lock = SpinLock;
  LockHandle->LockQueue.Next = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(LockHandle, SpinLock);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)SpinLock, (__int64)LockHandle) )
  {
    KxWaitForLockOwnerShip(LockHandle);
  }
}
