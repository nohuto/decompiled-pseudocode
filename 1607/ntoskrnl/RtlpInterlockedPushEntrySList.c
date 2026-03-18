/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x140166E40
 * Callers:
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x140004380 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     PfFbBufferListInsertInFree @ 0x140006744 (PfFbBufferListInsertInFree.c)
 *     ExFreeToNPagedLookasideList @ 0x14000F4A4 (ExFreeToNPagedLookasideList.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x1400114D0 (MiInsertNonPagedPoolOnSlist.c)
 *     CcWaitForUninitializeCacheMap @ 0x140022280 (CcWaitForUninitializeCacheMap.c)
 *     MiEmptyPageAccessLog @ 0x140027640 (MiEmptyPageAccessLog.c)
 *     CcMapAndCopyInToCache @ 0x140034F60 (CcMapAndCopyInToCache.c)
 *     MiFreePagedPoolPages @ 0x14004BBA0 (MiFreePagedPoolPages.c)
 *     IopCompleteRequest @ 0x140054840 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x140055DE0 (IopFreeIrp.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400671C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCoalesceFreePages @ 0x140067870 (MiCoalesceFreePages.c)
 *     CcCompleteAsyncReadWorker @ 0x14006D794 (CcCompleteAsyncReadWorker.c)
 *     CcPostWorkQueueAsyncRead @ 0x14006DD38 (CcPostWorkQueueAsyncRead.c)
 *     CcUninitializeCacheMap @ 0x1400705C0 (CcUninitializeCacheMap.c)
 *     CcWriteBehind @ 0x14007161C (CcWriteBehind.c)
 *     CcWorkerThread @ 0x140071980 (CcWorkerThread.c)
 *     IoFreeMdl @ 0x140072230 (IoFreeMdl.c)
 *     EtwpEventWriteFull @ 0x140073CE0 (EtwpEventWriteFull.c)
 *     MiQueuePageAccessLog @ 0x140086FA4 (MiQueuePageAccessLog.c)
 *     MiDecayPfnFullyInitialized @ 0x140096A10 (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x140096B30 (MiDeleteParentDecayNode.c)
 *     MiDeleteKernelStack @ 0x1400A1598 (MiDeleteKernelStack.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x1400AEAD8 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PfpReturnAccessBuffer @ 0x1400B0994 (PfpReturnAccessBuffer.c)
 *     MiDecrementCloneBlockReference @ 0x1400B8CA0 (MiDecrementCloneBlockReference.c)
 *     MiFreeInPageSupportBlock @ 0x1400C63A0 (MiFreeInPageSupportBlock.c)
 *     PfFbLogEntryReserve @ 0x1400D3E04 (PfFbLogEntryReserve.c)
 *     PfFileInfoNotify @ 0x1400EEAD0 (PfFileInfoNotify.c)
 *     PfFbLogEntryComplete @ 0x1400EFFD4 (PfFbLogEntryComplete.c)
 *     PfTFullEventListAdd @ 0x1400F0468 (PfTFullEventListAdd.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400F12A0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MmDeleteKernelStack @ 0x1400F1B80 (MmDeleteKernelStack.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400F8F30 (ExpWorkerFactoryCheckCreate.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14011AA74 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     MiStoreFreeWriteSupport @ 0x14011AE9C (MiStoreFreeWriteSupport.c)
 *     MiClearPageFileHash @ 0x140123940 (MiClearPageFileHash.c)
 *     KeFreeInterrupt @ 0x140123E44 (KeFreeInterrupt.c)
 *     KeAllocateInterrupt @ 0x14012CF1C (KeAllocateInterrupt.c)
 *     VfPoolDelayFreeIfPossible @ 0x14012EF14 (VfPoolDelayFreeIfPossible.c)
 *     CcAsyncReadWorker @ 0x14013D91C (CcAsyncReadWorker.c)
 *     PfFbBufferListAllocate @ 0x1401465F4 (PfFbBufferListAllocate.c)
 *     CcSerializeWithLazyWriter @ 0x1401B1D04 (CcSerializeWithLazyWriter.c)
 *     CmpFreeCallbackContext @ 0x1401B31CC (CmpFreeCallbackContext.c)
 *     CmpLockTableRemove @ 0x1401B5334 (CmpLockTableRemove.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBD4C (HvlpReleaseHypercallPage.c)
 *     MiRemovePteTracker @ 0x1401FC9F0 (MiRemovePteTracker.c)
 *     RtlStdReleaseStackTrace @ 0x1402117AC (RtlStdReleaseStackTrace.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140224F60 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpQueueStackWalkApc @ 0x140229234 (EtwpQueueStackWalkApc.c)
 *     EtwpStackWalkApc @ 0x140229524 (EtwpStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x140229620 (EtwpTraceStackWalk.c)
 *     EtwpDereferenceStackEntry @ 0x14022AFC4 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceStackKey @ 0x14022B1D8 (EtwpTraceStackKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PopInvokeSystemStateHandler @ 0x1403CC110 (PopInvokeSystemStateHandler.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x1403CC8A4 (PopInvokeStateHandlerTargetProcessor.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1403ECB48 (IoCreateStreamFileObjectEx2.c)
 *     CmpCleanupPathInfo @ 0x140404920 (CmpCleanupPathInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x140405DC0 (ObpFreeObjectNameBuffer.c)
 *     FsRtlpCleanupEcps @ 0x140415010 (FsRtlpCleanupEcps.c)
 *     ObOpenObjectByNameEx @ 0x140419070 (ObOpenObjectByNameEx.c)
 *     ObpFreeObject @ 0x14041B800 (ObpFreeObject.c)
 *     ObCreateObjectEx @ 0x14041D970 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14041EF00 (ObInsertObjectEx.c)
 *     IopAllocRealFileObject @ 0x140442AB0 (IopAllocRealFileObject.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140447F40 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpProcessSynchronousRequest @ 0x140448B60 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404494D0 (AlpcpReceiveMessage.c)
 *     CmpCallCallBacks @ 0x140452A00 (CmpCallCallBacks.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     IopCreateFile @ 0x14045B980 (IopCreateFile.c)
 *     ObReferenceObjectByNameEx @ 0x140499E04 (ObReferenceObjectByNameEx.c)
 *     ObDeleteCapturedInsertInfo @ 0x14049C5FC (ObDeleteCapturedInsertInfo.c)
 *     WdipSemFastFree @ 0x1404E4414 (WdipSemFastFree.c)
 *     RtlpGetRegistryHandle @ 0x1404FADEC (RtlpGetRegistryHandle.c)
 *     EtwpWriteUserEvent @ 0x140510920 (EtwpWriteUserEvent.c)
 *     IopFreeMiniCompletionPacket @ 0x14051BA70 (IopFreeMiniCompletionPacket.c)
 *     EtwpInitializeStackTracing @ 0x140552D48 (EtwpInitializeStackTracing.c)
 *     ObpFreeWorkItemBlock @ 0x1406679A8 (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x140667D9C (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x1406681BC (ObpRefillWorkItemFreeList.c)
 *     EtwpReferenceStackLookasideList @ 0x1406A82E8 (EtwpReferenceStackLookasideList.c)
 *     EtwpEnableStackCaching @ 0x1406A99E4 (EtwpEnableStackCaching.c)
 *     VeAllocatePoolWithTagPriority @ 0x140701D78 (VeAllocatePoolWithTagPriority.c)
 *     ViFreeTrackedPool @ 0x140702440 (ViFreeTrackedPool.c)
 *     ViGrowPoolAllocation @ 0x140702610 (ViGrowPoolAllocation.c)
 *     MiInitializeDecayPfns @ 0x14078E618 (MiInitializeDecayPfns.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  union _SLIST_HEADER v5; // rax
  _SLIST_ENTRY *Region; // r8
  union _SLIST_HEADER v7; // rt0
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
