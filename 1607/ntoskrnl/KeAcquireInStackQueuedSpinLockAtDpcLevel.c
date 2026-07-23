/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870
 * Callers:
 *     MiObtainSystemCacheView @ 0x1400196F0 (MiObtainSystemCacheView.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14001B2E0 (MiInsertLargePageInNodeListHelper.c)
 *     MiIncreaseAvailablePages @ 0x14001B700 (MiIncreaseAvailablePages.c)
 *     MiRestoreTransitionPte @ 0x14001CD70 (MiRestoreTransitionPte.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14001DA80 (MiZeroCfgSystemWideBitmapWorker.c)
 *     KiAbEntryRemoveFromTree @ 0x140030BB0 (KiAbEntryRemoveFromTree.c)
 *     MiUpdateWsle @ 0x14003C310 (MiUpdateWsle.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MmUnmapViewInSystemCache @ 0x140048E40 (MmUnmapViewInSystemCache.c)
 *     MiRemoveAnyPage @ 0x1400642C0 (MiRemoveAnyPage.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x14006FD40 (MiInsertProtectedStandbyPage.c)
 *     MmEnforceWorkingSetLimit @ 0x140076D74 (MmEnforceWorkingSetLimit.c)
 *     MiTryUnlinkNodeLargePage @ 0x1400899E0 (MiTryUnlinkNodeLargePage.c)
 *     MiReferenceIoPages @ 0x14009BB00 (MiReferenceIoPages.c)
 *     WmipNotificationIrpCancel @ 0x1400A0F54 (WmipNotificationIrpCancel.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1400AB9B4 (MmAdjustWorkingSetSizeEx.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x1400ACCEC (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x1400AD040 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiSignalLargePageRebuild @ 0x1400BC5CC (MiSignalLargePageRebuild.c)
 *     MiVolunteerForTrimFirst @ 0x1400E3E30 (MiVolunteerForTrimFirst.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400EA8A0 (KiAbEntryGetLockedHeadEntry.c)
 *     KeTerminateThread @ 0x1400F02A4 (KeTerminateThread.c)
 *     KeStartThread @ 0x1400F08BC (KeStartThread.c)
 *     MiUpdatePageAttributeStamp @ 0x1400FAC90 (MiUpdatePageAttributeStamp.c)
 *     MiReplaceTransitionPage @ 0x140105244 (MiReplaceTransitionPage.c)
 *     MiLockAllMemoryLists @ 0x140112770 (MiLockAllMemoryLists.c)
 *     MiMirrorNodeLargePages @ 0x1401129DC (MiMirrorNodeLargePages.c)
 *     MiPurgeLargeZeroNodePages @ 0x140120C84 (MiPurgeLargeZeroNodePages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140120F60 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140147634 (MiDbgTranslatePhysicalAddress.c)
 *     MmEnableModifiedWriteOfSection @ 0x1401E5A88 (MmEnableModifiedWriteOfSection.c)
 *     MiEmptyTargetedWorkingSet @ 0x1401E954C (MiEmptyTargetedWorkingSet.c)
 *     MiFreeModifiedReservations @ 0x1401EE664 (MiFreeModifiedReservations.c)
 *     MiGetEnclavePage @ 0x1401F0238 (MiGetEnclavePage.c)
 *     MiUnlinkPageFromBadList @ 0x1401F2E80 (MiUnlinkPageFromBadList.c)
 *     MiNoPagesLastChance @ 0x1401F31B0 (MiNoPagesLastChance.c)
 *     MiSwapNumaStandbyPage @ 0x1401F38F8 (MiSwapNumaStandbyPage.c)
 *     MiCoalesceFreeLargePages @ 0x1401FCABC (MiCoalesceFreeLargePages.c)
 *     MiRebuildLargePages @ 0x1401FD95C (MiRebuildLargePages.c)
 *     ExShareAddressSpaceWithDevice @ 0x14022E994 (ExShareAddressSpaceWithDevice.c)
 *     PnprMirrorMarkedPages @ 0x1403DC208 (PnprMirrorMarkedPages.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
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
