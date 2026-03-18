/*
 * XREFs of KxReleaseQueuedSpinLock @ 0x140069570
 * Callers:
 *     MiObtainSystemCacheView @ 0x140019B70 (MiObtainSystemCacheView.c)
 *     MiReleasePageFileInfo @ 0x14001A280 (MiReleasePageFileInfo.c)
 *     MiIncreaseAvailablePages @ 0x14001BB80 (MiIncreaseAvailablePages.c)
 *     MiRestoreTransitionPte @ 0x14001D1F0 (MiRestoreTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DF00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     CcWaitForUninitializeCacheMap @ 0x140022280 (CcWaitForUninitializeCacheMap.c)
 *     IopCheckDeviceAndDriver @ 0x14002DCA0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x14002DEE0 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x14002ECF0 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14002EDD0 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementVpbRefCount @ 0x14002EE70 (IopDecrementVpbRefCount.c)
 *     KiAbEntryRemoveFromTree @ 0x140031030 (KiAbEntryRemoveFromTree.c)
 *     MmCheckCachedPageStates @ 0x140033AB0 (MmCheckCachedPageStates.c)
 *     CcMapAndCopyInToCache @ 0x140034F60 (CcMapAndCopyInToCache.c)
 *     MiUpdateWsle @ 0x14003C790 (MiUpdateWsle.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     MmUnmapViewInSystemCache @ 0x1400492C0 (MmUnmapViewInSystemCache.c)
 *     KiAbProcessContextSwitch @ 0x14005C490 (KiAbProcessContextSwitch.c)
 *     MiRemoveAnyPage @ 0x140064740 (MiRemoveAnyPage.c)
 *     MiDeleteBatch @ 0x140064B10 (MiDeleteBatch.c)
 *     MiUnlinkPageFromList @ 0x140065A40 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140066D00 (MiUnlinkFreeOrZeroedPage.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400671B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400671C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1400695D0 (MiInsertPageInList.c)
 *     KiAbProcessThreadLocks @ 0x14006BBA8 (KiAbProcessThreadLocks.c)
 *     IoBoostThreadIoPriority @ 0x14006E244 (IoBoostThreadIoPriority.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14006FEF0 (MiInsertAndUnlockStandbyPages.c)
 *     MiInsertProtectedStandbyPage @ 0x1400701C0 (MiInsertProtectedStandbyPage.c)
 *     CcUninitializeCacheMap @ 0x1400705C0 (CcUninitializeCacheMap.c)
 *     CcLazyWriteScan @ 0x140070CA0 (CcLazyWriteScan.c)
 *     MmEnforceWorkingSetLimit @ 0x140076CF4 (MmEnforceWorkingSetLimit.c)
 *     MiTryUnlinkNodeLargePage @ 0x14008A2E0 (MiTryUnlinkNodeLargePage.c)
 *     MiUnlinkNodeLargePage @ 0x14008A830 (MiUnlinkNodeLargePage.c)
 *     MiLargePageFreeToZero @ 0x14008B560 (MiLargePageFreeToZero.c)
 *     IopDereferenceVpbAndFree @ 0x1400967B0 (IopDereferenceVpbAndFree.c)
 *     IoReleaseCancelSpinLock @ 0x14009A538 (IoReleaseCancelSpinLock.c)
 *     MiReferenceIoPages @ 0x14009C300 (MiReferenceIoPages.c)
 *     WmipNotificationIrpCancel @ 0x1400A262C (WmipNotificationIrpCancel.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400AD44C (MmAdjustWorkingSetSizeEx.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x1400AE764 (KeReleaseInStackQueuedSpinLockForDpc.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x1400AEAD8 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiEmptyDecayClusterTimers @ 0x1400BE310 (MiEmptyDecayClusterTimers.c)
 *     MiSignalLargePageRebuild @ 0x1400BE73C (MiSignalLargePageRebuild.c)
 *     IoGetAttachedDeviceReference @ 0x1400C48F0 (IoGetAttachedDeviceReference.c)
 *     MiVolunteerForTrimFirst @ 0x1400E5F90 (MiVolunteerForTrimFirst.c)
 *     CcInitializeCacheMapEx @ 0x1400E8440 (CcInitializeCacheMapEx.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400ECA30 (KiAbEntryGetLockedHeadEntry.c)
 *     IopGetMountFlag @ 0x1400EE9E0 (IopGetMountFlag.c)
 *     KeTerminateThread @ 0x1400F2454 (KeTerminateThread.c)
 *     KeStartThread @ 0x1400F2A6C (KeStartThread.c)
 *     MiUpdatePageAttributeStamp @ 0x1400FCF10 (MiUpdatePageAttributeStamp.c)
 *     MiReturnNonPagedPoolVa @ 0x140103670 (MiReturnNonPagedPoolVa.c)
 *     MiReplaceTransitionPage @ 0x1401074C4 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiAttachToOwningSession @ 0x14010C45C (MiAttachToOwningSession.c)
 *     MiMirrorNodeLargePages @ 0x14011246C (MiMirrorNodeLargePages.c)
 *     MiUnlockAllMemoryLists @ 0x1401127C8 (MiUnlockAllMemoryLists.c)
 *     MiPurgeLargeZeroNodePages @ 0x140120714 (MiPurgeLargeZeroNodePages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1401209F0 (MiRemoveLowestPriorityStandbyPage.c)
 *     CcNotifyExternalCaches @ 0x1401340A4 (CcNotifyExternalCaches.c)
 *     CcUnmapInactiveViews @ 0x14014199C (CcUnmapInactiveViews.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1401487C8 (MiDbgUnTranslatePhysicalAddress.c)
 *     CcSerializeWithLazyWriter @ 0x1401B1D04 (CcSerializeWithLazyWriter.c)
 *     MmEnableModifiedWriteOfSection @ 0x1401E5C5C (MmEnableModifiedWriteOfSection.c)
 *     MiEmptyTargetedWorkingSet @ 0x1401E9720 (MiEmptyTargetedWorkingSet.c)
 *     MiFreeModifiedReservations @ 0x1401EE838 (MiFreeModifiedReservations.c)
 *     MiGetEnclavePage @ 0x1401F040C (MiGetEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x1401F3054 (MiUnlinkPageFromBadList.c)
 *     MiNoPagesLastChance @ 0x1401F3384 (MiNoPagesLastChance.c)
 *     MiSwapNumaStandbyPage @ 0x1401F3ACC (MiSwapNumaStandbyPage.c)
 *     EXP_UNLOCK_RESOURCE @ 0x14022D918 (EXP_UNLOCK_RESOURCE.c)
 *     ExShareAddressSpaceWithDevice @ 0x14022EB68 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x1400F9530 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401D3B5C (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KxReleaseQueuedSpinLock(volatile signed __int64 **a1)
{
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    return KiReleaseQueuedSpinLockInstrumented(a1, retaddr);
  _m_prefetchw(a1);
  result = (__int64)*a1;
  if ( !*a1 )
  {
    result = _InterlockedCompareExchange64(a1[1], 0LL, (signed __int64)a1);
    if ( a1 == (volatile signed __int64 **)result )
      return result;
    result = KxWaitForLockChainValid(a1);
  }
  *a1 = 0LL;
  _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  return result;
}
