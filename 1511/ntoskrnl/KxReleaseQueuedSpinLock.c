/*
 * XREFs of KxReleaseQueuedSpinLock @ 0x140040BF0
 * Callers:
 *     MiInsertAndUnlockStandbyPages @ 0x14000FE50 (MiInsertAndUnlockStandbyPages.c)
 *     MiInsertProtectedStandbyPage @ 0x140010160 (MiInsertProtectedStandbyPage.c)
 *     MiRemoveAnyPage @ 0x1400124B0 (MiRemoveAnyPage.c)
 *     MiEmptyDecayClusterTimers @ 0x140014790 (MiEmptyDecayClusterTimers.c)
 *     MiUnlinkNodeLargePage @ 0x140019534 (MiUnlinkNodeLargePage.c)
 *     MiTryUnlinkNodeLargePage @ 0x140019BFC (MiTryUnlinkNodeLargePage.c)
 *     IoGetAttachedDeviceReference @ 0x14001B010 (IoGetAttachedDeviceReference.c)
 *     MmEnforceWorkingSetLimit @ 0x140021C18 (MmEnforceWorkingSetLimit.c)
 *     KeStartThread @ 0x140028824 (KeStartThread.c)
 *     KeTerminateThread @ 0x14002B7EC (KeTerminateThread.c)
 *     KiAbProcessThreadLocks @ 0x14003203C (KiAbProcessThreadLocks.c)
 *     KiAbEntryRemoveFromTree @ 0x140033590 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400348F0 (KiAbEntryGetLockedHeadEntry.c)
 *     CcWaitForUninitializeCacheMap @ 0x14003897C (CcWaitForUninitializeCacheMap.c)
 *     MiDeleteBatch @ 0x14003D3A0 (MiDeleteBatch.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ExpUnlockResource @ 0x14003DC00 (ExpUnlockResource.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14003ECA0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003F780 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     IopCheckDeviceAndDriver @ 0x140043BB0 (IopCheckDeviceAndDriver.c)
 *     MiUpdateWsle @ 0x140056490 (MiUpdateWsle.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     CcMapAndCopyInToCache @ 0x140068870 (CcMapAndCopyInToCache.c)
 *     MiVolunteerForTrimFirst @ 0x14006DCF0 (MiVolunteerForTrimFirst.c)
 *     MiReplaceTransitionPage @ 0x1400714A0 (MiReplaceTransitionPage.c)
 *     IopDecrementDeviceObjectRef @ 0x14007E3E0 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14007E610 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementVpbRefCount @ 0x14007E6B0 (IopDecrementVpbRefCount.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     IopGetMountFlag @ 0x14008E7A0 (IopGetMountFlag.c)
 *     MmAdjustWorkingSetSizeEx @ 0x140096B2C (MmAdjustWorkingSetSizeEx.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400A0890 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 *     ExAcquireSharedStarveExclusive @ 0x1400A4BB0 (ExAcquireSharedStarveExclusive.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MmUnmapViewInSystemCache @ 0x1400ADB30 (MmUnmapViewInSystemCache.c)
 *     CcGetVacbMiss @ 0x1400AEA80 (CcGetVacbMiss.c)
 *     CcUninitializeCacheMap @ 0x1400AEF70 (CcUninitializeCacheMap.c)
 *     CcInitializeCacheMap @ 0x1400AF300 (CcInitializeCacheMap.c)
 *     IopIncrementVpbRefCount @ 0x1400AFB14 (IopIncrementVpbRefCount.c)
 *     CcSetParallelFlushFile @ 0x1400AFCC4 (CcSetParallelFlushFile.c)
 *     CcFlushCachePriv @ 0x1400AFD30 (CcFlushCachePriv.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     MiObtainSystemCacheView @ 0x1400B1590 (MiObtainSystemCacheView.c)
 *     CcUnmapVacbArray @ 0x1400B1DF0 (CcUnmapVacbArray.c)
 *     MiReturnNonPagedPoolVa @ 0x1400B4000 (MiReturnNonPagedPoolVa.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiRestoreTransitionPte @ 0x1400B4ED0 (MiRestoreTransitionPte.c)
 *     MiInsertLargePageInNodeList @ 0x1400C02B4 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x1400C0448 (MiIncreaseAvailablePages.c)
 *     WmipNotificationIrpCancel @ 0x1400C8F08 (WmipNotificationIrpCancel.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1400CF384 (ExAcquireSharedWaitForExclusive.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400CF4E8 (ExConvertExclusiveToSharedLite.c)
 *     ExSetResourceOwnerPointerEx @ 0x1400CF5B8 (ExSetResourceOwnerPointerEx.c)
 *     IopCheckVpbMounted @ 0x1400CFEA0 (IopCheckVpbMounted.c)
 *     MiAttachToOwningSession @ 0x1400D55A4 (MiAttachToOwningSession.c)
 *     IopDereferenceVpbAndFree @ 0x1400D7CB0 (IopDereferenceVpbAndFree.c)
 *     IoReleaseCancelSpinLock @ 0x1400DEBC0 (IoReleaseCancelSpinLock.c)
 *     MiUpdatePageAttributeStamp @ 0x1400EC64C (MiUpdatePageAttributeStamp.c)
 *     IoBoostThreadIoPriority @ 0x1401028BC (IoBoostThreadIoPriority.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140112420 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiUnlockAllMemoryLists @ 0x1401181CC (MiUnlockAllMemoryLists.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14011AE50 (MiAllocatePfnRepurposeLogDispatch.c)
 *     KeReleaseInStackQueuedSpinLockForDpc @ 0x14011B460 (KeReleaseInStackQueuedSpinLockForDpc.c)
 *     CcNotifyExternalCaches @ 0x14012D654 (CcNotifyExternalCaches.c)
 *     CcUnmapInactiveViews @ 0x140138B9C (CcUnmapInactiveViews.c)
 *     CcIncrementWriteBehindPriority @ 0x1401A8AD8 (CcIncrementWriteBehindPriority.c)
 *     MmEnableModifiedWriteOfSection @ 0x1401D5008 (MmEnableModifiedWriteOfSection.c)
 *     MiTrimAllSystemPagableMemory @ 0x1401D83E0 (MiTrimAllSystemPagableMemory.c)
 *     MiFreeModifiedReservations @ 0x1401DCB64 (MiFreeModifiedReservations.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x1401DE068 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiGetEnclavePage @ 0x1401DFB88 (MiGetEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x1401E0238 (MiUnlinkPageFromBadList.c)
 *     MiScrubNodeLargePageList @ 0x1401E197C (MiScrubNodeLargePageList.c)
 *     MiNoPagesLastChance @ 0x1401E3DB0 (MiNoPagesLastChance.c)
 *     MiSwapNumaStandbyPage @ 0x1401E4470 (MiSwapNumaStandbyPage.c)
 *     ExTryConvertSharedToExclusiveLite @ 0x140213DB0 (ExTryConvertSharedToExclusiveLite.c)
 *     ExTryToAcquireResourceExclusiveLite @ 0x140213E54 (ExTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x1400C6540 (KxWaitForLockChainValid.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401C49A4 (KiReleaseQueuedSpinLockInstrumented.c)
 */

volatile signed __int64 *__fastcall KxReleaseQueuedSpinLock(volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    return (volatile signed __int64 *)KiReleaseQueuedSpinLockInstrumented(a1, retaddr);
  _m_prefetchw(a1);
  result = *a1;
  if ( !*a1 )
  {
    result = (volatile signed __int64 *)_InterlockedCompareExchange64(a1[1], 0LL, (signed __int64)a1);
    if ( a1 == (volatile signed __int64 **)result )
      return result;
    result = (volatile signed __int64 *)KxWaitForLockChainValid(a1);
  }
  *a1 = 0LL;
  _InterlockedXor64(result + 1, 1uLL);
  return result;
}
