/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x14015B9A0
 * Callers:
 *     VfPoolDelayFreeIfPossible @ 0x140002138 (VfPoolDelayFreeIfPossible.c)
 *     MiDecrementCloneBlockReference @ 0x140011D94 (MiDecrementCloneBlockReference.c)
 *     PfFbLogEntryReserve @ 0x14001BC98 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14001BD60 (PfFbLogEntryComplete.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14002C660 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MmDeleteKernelStack @ 0x14002CF40 (MmDeleteKernelStack.c)
 *     CcWaitForUninitializeCacheMap @ 0x14003897C (CcWaitForUninitializeCacheMap.c)
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     MiFreePagedPoolPages @ 0x14003B820 (MiFreePagedPoolPages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     CcMapAndCopyInToCache @ 0x140068870 (CcMapAndCopyInToCache.c)
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     PfFileInfoNotify @ 0x14006E310 (PfFileInfoNotify.c)
 *     ExFreeToNPagedLookasideList @ 0x140079F84 (ExFreeToNPagedLookasideList.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x140087090 (IopFreeIrp.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x140089B90 (MiInsertNonPagedPoolOnSlist.c)
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     CcUninitializeCacheMap @ 0x1400AEF70 (CcUninitializeCacheMap.c)
 *     MiDecayPfnFullyInitialized @ 0x1400B253C (MiDecayPfnFullyInitialized.c)
 *     CcWorkerThread @ 0x1400B2610 (CcWorkerThread.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400C59E0 (ExpWorkerFactoryCheckCreate.c)
 *     MiDeleteParentDecayNode @ 0x1400DFE0C (MiDeleteParentDecayNode.c)
 *     MiDeleteKernelStack @ 0x1400E1C30 (MiDeleteKernelStack.c)
 *     CmpFreeExtraHashInfo @ 0x1400E2CF4 (CmpFreeExtraHashInfo.c)
 *     CcCompleteAsyncReadWorker @ 0x1400EC3CC (CcCompleteAsyncReadWorker.c)
 *     MiQueuePageAccessLog @ 0x1400F152C (MiQueuePageAccessLog.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1400F6FBC (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     PfFbBufferListInsertInFree @ 0x1400FAAE8 (PfFbBufferListInsertInFree.c)
 *     PfTFullEventListAdd @ 0x1400FAC40 (PfTFullEventListAdd.c)
 *     PfpReturnAccessBuffer @ 0x1400FAC6C (PfpReturnAccessBuffer.c)
 *     CcAsyncReadWorker @ 0x1400FB99C (CcAsyncReadWorker.c)
 *     MiFreeInPageSupportBlock @ 0x1400FDE30 (MiFreeInPageSupportBlock.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400FF968 (CcPostWorkQueueAsyncRead.c)
 *     CcWriteBehind @ 0x140101160 (CcWriteBehind.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14010D188 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     MiStoreFreeWriteSupport @ 0x14010D5B4 (MiStoreFreeWriteSupport.c)
 *     MiClearPageFileHash @ 0x14011454C (MiClearPageFileHash.c)
 *     KeFreeInterrupt @ 0x140115A8C (KeFreeInterrupt.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14011AE50 (MiAllocatePfnRepurposeLogDispatch.c)
 *     KeAllocateInterrupt @ 0x1401226DC (KeAllocateInterrupt.c)
 *     PfFbBufferListAllocate @ 0x140142DCC (PfFbBufferListAllocate.c)
 *     CmpFreeCallbackContext @ 0x1401A9E0C (CmpFreeCallbackContext.c)
 *     CmpLockTableRemove @ 0x1401AA120 (CmpLockTableRemove.c)
 *     HvlpReleaseHypercallPage @ 0x1401AF5BC (HvlpReleaseHypercallPage.c)
 *     MiRemovePteTracker @ 0x1401E0BF8 (MiRemovePteTracker.c)
 *     RtlStdReleaseStackTrace @ 0x1401F7048 (RtlStdReleaseStackTrace.c)
 *     VerifierExpInterlockedPushEntrySList @ 0x14020B910 (VerifierExpInterlockedPushEntrySList.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14020D474 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpQueueStackWalkApc @ 0x140210C68 (EtwpQueueStackWalkApc.c)
 *     EtwpStackWalkApc @ 0x140210F44 (EtwpStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x140211040 (EtwpTraceStackWalk.c)
 *     EtwpDereferenceStackEntry @ 0x1402114F0 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceStackKey @ 0x1402116F8 (EtwpTraceStackKey.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PopInvokeSystemStateHandler @ 0x1403A0370 (PopInvokeSystemStateHandler.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x1403A0ABC (PopInvokeStateHandlerTargetProcessor.c)
 *     ObDeleteCapturedInsertInfo @ 0x1403DC1C0 (ObDeleteCapturedInsertInfo.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     ObCreateObjectEx @ 0x140412D10 (ObCreateObjectEx.c)
 *     IopAllocRealFileObject @ 0x140414F70 (IopAllocRealFileObject.c)
 *     EtwpWriteUserEvent @ 0x14041BFD0 (EtwpWriteUserEvent.c)
 *     FsRtlpCleanupEcps @ 0x140423220 (FsRtlpCleanupEcps.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404280D0 (AlpcpReceiveMessage.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 *     IopFreeMiniCompletionPacket @ 0x14042F3B0 (IopFreeMiniCompletionPacket.c)
 *     ObpFreeObject @ 0x14042F610 (ObpFreeObject.c)
 *     IopCreateFile @ 0x140439640 (IopCreateFile.c)
 *     ObpFreeObjectNameBuffer @ 0x14046FB4C (ObpFreeObjectNameBuffer.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140491900 (IoCreateStreamFileObjectEx2.c)
 *     ObReferenceObjectByNameEx @ 0x14049AE04 (ObReferenceObjectByNameEx.c)
 *     RtlpGetRegistryHandle @ 0x1404C9018 (RtlpGetRegistryHandle.c)
 *     WdipSemFastFree @ 0x140504B28 (WdipSemFastFree.c)
 *     EtwpInitializeStackTracing @ 0x140525610 (EtwpInitializeStackTracing.c)
 *     ObpFreeWorkItemBlock @ 0x14062F8BC (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x14062FCB0 (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x1406300C0 (ObpRefillWorkItemFreeList.c)
 *     EtwpReferenceStackLookasideList @ 0x14066676C (EtwpReferenceStackLookasideList.c)
 *     EtwpEnableStackCaching @ 0x140667B28 (EtwpEnableStackCaching.c)
 *     VeAllocatePoolWithTagPriority @ 0x1406B5F18 (VeAllocatePoolWithTagPriority.c)
 *     ViFreeTrackedPool @ 0x1406B65E0 (ViFreeTrackedPool.c)
 *     ViGrowPoolAllocation @ 0x1406B67B0 (ViGrowPoolAllocation.c)
 *     CmInitSystem1 @ 0x1407450EC (CmInitSystem1.c)
 *     MiInitializeDecayPfns @ 0x140767E90 (MiInitializeDecayPfns.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  _SLIST_HEADER v5; // rax
  _SLIST_ENTRY *Region; // r8
  _SLIST_HEADER v7; // rt0
  unsigned __int8 v8; // tt

  _m_prefetchw(ListHead);
  v5 = *ListHead;
  do
  {
    Region = (_SLIST_ENTRY *)v5.Region;
    LOBYTE(Region) = *((_BYTE *)&v5.HeaderX64 + 8) & 0xF0;
    ListEntry->Next = Region;
    v7 = v5;
    v8 = _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)ListEntry,
           v5.Alignment + 65537,
           (signed __int64 *)&v7);
    v5 = v7;
  }
  while ( !v8 );
  return Region;
}
