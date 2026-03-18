/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0
 * Callers:
 *     MmEnforceWorkingSetLimit @ 0x14000961C (MmEnforceWorkingSetLimit.c)
 *     KeTerminateThread @ 0x14000F218 (KeTerminateThread.c)
 *     KeStartThread @ 0x14000F67C (KeStartThread.c)
 *     MiObtainSystemCacheView @ 0x14003DD60 (MiObtainSystemCacheView.c)
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 *     MiInsertProtectedStandbyPage @ 0x140055700 (MiInsertProtectedStandbyPage.c)
 *     MiReplaceTransitionPage @ 0x140059C70 (MiReplaceTransitionPage.c)
 *     WmipNotificationIrpCancel @ 0x140074B70 (WmipNotificationIrpCancel.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 *     MiVolunteerForTrimFirst @ 0x1400AD700 (MiVolunteerForTrimFirst.c)
 *     MiUpdateWsle @ 0x1400BE660 (MiUpdateWsle.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiUpdatePageAttributeStamp @ 0x1400E0280 (MiUpdatePageAttributeStamp.c)
 *     MiRestoreTransitionPte @ 0x1400E5CA0 (MiRestoreTransitionPte.c)
 *     KiAbEntryRemoveFromTree @ 0x1400F5E10 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400F6A90 (KiAbEntryGetLockedHeadEntry.c)
 *     MiInsertLargePageInNodeList @ 0x1400FFD48 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x1400FFF20 (MiIncreaseAvailablePages.c)
 *     MiUnlinkNodeLargePage @ 0x1401023B8 (MiUnlinkNodeLargePage.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012B124 (MmAdjustWorkingSetSizeEx.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14012C120 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140145090 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiLockAllMemoryLists @ 0x14014CA34 (MiLockAllMemoryLists.c)
 *     KeRemoveDeviceQueue @ 0x14014F5A4 (KeRemoveDeviceQueue.c)
 *     KeInsertDeviceQueue @ 0x14014F7D0 (KeInsertDeviceQueue.c)
 *     MiTryUnlinkNodeLargePage @ 0x140159228 (MiTryUnlinkNodeLargePage.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140200D68 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     KeInsertByKeyDeviceQueue @ 0x1402045C4 (KeInsertByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueue @ 0x1402046FC (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x14020485C (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     MmEnableModifiedWriteOfSection @ 0x140216DA8 (MmEnableModifiedWriteOfSection.c)
 *     MiForcedTrim @ 0x14021A838 (MiForcedTrim.c)
 *     MiTrimAllSystemPagableMemory @ 0x14021B230 (MiTrimAllSystemPagableMemory.c)
 *     MiFreeModifiedReservations @ 0x1402218E8 (MiFreeModifiedReservations.c)
 *     MiDbgTranslatePhysicalAddress @ 0x14022311C (MiDbgTranslatePhysicalAddress.c)
 *     MiUnlinkPageFromBadList @ 0x14022649C (MiUnlinkPageFromBadList.c)
 *     MiScrubNodeLargePageList @ 0x14022D300 (MiScrubNodeLargePageList.c)
 *     MiNoPagesLastChance @ 0x14022DB04 (MiNoPagesLastChance.c)
 *     MiSwapNumaStandbyPage @ 0x14022E2D8 (MiSwapNumaStandbyPage.c)
 *     PnprMirrorMarkedPages @ 0x1404006D8 (PnprMirrorMarkedPages.c)
 *     ExShareAddressSpaceWithDevice @ 0x1406F826C (ExShareAddressSpaceWithDevice.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1407477EC (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot @ 0x1407478DC (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 v3; // rdx

  LockHandle->LockQueue.Lock = SpinLock;
  LockHandle->LockQueue.Next = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(LockHandle, SpinLock);
  }
  else
  {
    v3 = _InterlockedExchange64((volatile __int64 *)SpinLock, (__int64)LockHandle);
    if ( v3 )
      KxWaitForLockOwnerShip(LockHandle, v3, LockHandle);
  }
}
