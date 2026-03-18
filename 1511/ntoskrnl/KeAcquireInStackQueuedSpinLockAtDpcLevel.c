/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0
 * Callers:
 *     MiInsertProtectedStandbyPage @ 0x140010160 (MiInsertProtectedStandbyPage.c)
 *     MiUnlinkNodeLargePage @ 0x140019534 (MiUnlinkNodeLargePage.c)
 *     MiTryUnlinkNodeLargePage @ 0x140019BFC (MiTryUnlinkNodeLargePage.c)
 *     MmEnforceWorkingSetLimit @ 0x140021C18 (MmEnforceWorkingSetLimit.c)
 *     KeStartThread @ 0x140028824 (KeStartThread.c)
 *     KeTerminateThread @ 0x14002B7EC (KeTerminateThread.c)
 *     KiAbEntryRemoveFromTree @ 0x140033590 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400348F0 (KiAbEntryGetLockedHeadEntry.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdateWsle @ 0x140056490 (MiUpdateWsle.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MiVolunteerForTrimFirst @ 0x14006DCF0 (MiVolunteerForTrimFirst.c)
 *     MiReplaceTransitionPage @ 0x1400714A0 (MiReplaceTransitionPage.c)
 *     MmAdjustWorkingSetSizeEx @ 0x140096B2C (MmAdjustWorkingSetSizeEx.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400A0890 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 *     MmUnmapViewInSystemCache @ 0x1400ADB30 (MmUnmapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400B1590 (MiObtainSystemCacheView.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiRestoreTransitionPte @ 0x1400B4ED0 (MiRestoreTransitionPte.c)
 *     MiInsertLargePageInNodeList @ 0x1400C02B4 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x1400C0448 (MiIncreaseAvailablePages.c)
 *     WmipNotificationIrpCancel @ 0x1400C8F08 (WmipNotificationIrpCancel.c)
 *     MiUpdatePageAttributeStamp @ 0x1400EC64C (MiUpdatePageAttributeStamp.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140112420 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiLockAllMemoryLists @ 0x140117C78 (MiLockAllMemoryLists.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14011AE50 (MiAllocatePfnRepurposeLogDispatch.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x14011B480 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     MmEnableModifiedWriteOfSection @ 0x1401D5008 (MmEnableModifiedWriteOfSection.c)
 *     MiTrimAllSystemPagableMemory @ 0x1401D83E0 (MiTrimAllSystemPagableMemory.c)
 *     MiFreeModifiedReservations @ 0x1401DCB64 (MiFreeModifiedReservations.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1401DDD84 (MiDbgTranslatePhysicalAddress.c)
 *     MiGetEnclavePage @ 0x1401DFB88 (MiGetEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x1401E0238 (MiUnlinkPageFromBadList.c)
 *     MiScrubNodeLargePageList @ 0x1401E197C (MiScrubNodeLargePageList.c)
 *     MiNoPagesLastChance @ 0x1401E3DB0 (MiNoPagesLastChance.c)
 *     MiSwapNumaStandbyPage @ 0x1401E4470 (MiSwapNumaStandbyPage.c)
 *     PnprMirrorMarkedPages @ 0x1403B00EC (PnprMirrorMarkedPages.c)
 *     ExShareAddressSpaceWithDevice @ 0x140673C50 (ExShareAddressSpaceWithDevice.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1406C5AF8 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  LockHandle->LockQueue.Lock = SpinLock;
  LockHandle->LockQueue.Next = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(LockHandle);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)SpinLock, (__int64)LockHandle) )
  {
    KxWaitForLockOwnerShip(LockHandle);
  }
}
