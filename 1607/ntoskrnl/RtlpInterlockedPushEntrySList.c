/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1401673B0
 * Callers:
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1400044F4 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     PfFbBufferListInsertInFree @ 0x1400068B4 (PfFbBufferListInsertInFree.c)
 *     ExFreeToNPagedLookasideList @ 0x14000F024 (ExFreeToNPagedLookasideList.c)
 *     MiInsertNonPagedPoolOnSlist @ 0x140011050 (MiInsertNonPagedPoolOnSlist.c)
 *     CcWaitForUninitializeCacheMap @ 0x140021E00 (CcWaitForUninitializeCacheMap.c)
 *     MiEmptyPageAccessLog @ 0x1400271C0 (MiEmptyPageAccessLog.c)
 *     CcMapAndCopyInToCache @ 0x140034AE0 (CcMapAndCopyInToCache.c)
 *     MiFreePagedPoolPages @ 0x14004B720 (MiFreePagedPoolPages.c)
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x140055960 (IopFreeIrp.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCoalesceFreePages @ 0x1400673F0 (MiCoalesceFreePages.c)
 *     CcCompleteAsyncReadWorker @ 0x14006D314 (CcCompleteAsyncReadWorker.c)
 *     CcPostWorkQueueAsyncRead @ 0x14006D8B8 (CcPostWorkQueueAsyncRead.c)
 *     CcUninitializeCacheMap @ 0x140070140 (CcUninitializeCacheMap.c)
 *     CcWriteBehind @ 0x14007119C (CcWriteBehind.c)
 *     CcWorkerThread @ 0x140071500 (CcWorkerThread.c)
 *     IoFreeMdl @ 0x140071DB0 (IoFreeMdl.c)
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     MiQueuePageAccessLog @ 0x140088894 (MiQueuePageAccessLog.c)
 *     MiDecayPfnFullyInitialized @ 0x140096210 (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x140096330 (MiDeleteParentDecayNode.c)
 *     MiDeleteKernelStack @ 0x14009FEC0 (MiDeleteKernelStack.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x1400AD040 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PfpReturnAccessBuffer @ 0x1400AEA04 (PfpReturnAccessBuffer.c)
 *     MiDecrementCloneBlockReference @ 0x1400B6B30 (MiDecrementCloneBlockReference.c)
 *     MiFreeInPageSupportBlock @ 0x1400C4240 (MiFreeInPageSupportBlock.c)
 *     PfFbLogEntryReserve @ 0x1400D1CA4 (PfFbLogEntryReserve.c)
 *     PfFileInfoNotify @ 0x1400EC950 (PfFileInfoNotify.c)
 *     PfFbLogEntryComplete @ 0x1400EDE54 (PfFbLogEntryComplete.c)
 *     PfTFullEventListAdd @ 0x1400EE2E8 (PfTFullEventListAdd.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400EF0F0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     MmDeleteKernelStack @ 0x1400EF9D0 (MmDeleteKernelStack.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400F6D70 (ExpWorkerFactoryCheckCreate.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14011AFE4 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     MiStoreFreeWriteSupport @ 0x14011B40C (MiStoreFreeWriteSupport.c)
 *     MiClearPageFileHash @ 0x140123EB0 (MiClearPageFileHash.c)
 *     KeFreeInterrupt @ 0x1401243B4 (KeFreeInterrupt.c)
 *     KeAllocateInterrupt @ 0x14012D48C (KeAllocateInterrupt.c)
 *     VfPoolDelayFreeIfPossible @ 0x14012F484 (VfPoolDelayFreeIfPossible.c)
 *     CcAsyncReadWorker @ 0x14013DE8C (CcAsyncReadWorker.c)
 *     PfFbBufferListAllocate @ 0x140146B64 (PfFbBufferListAllocate.c)
 *     CcSerializeWithLazyWriter @ 0x1401B1BE8 (CcSerializeWithLazyWriter.c)
 *     CmpFreeCallbackContext @ 0x1401B30B0 (CmpFreeCallbackContext.c)
 *     CmpLockTableRemove @ 0x1401B5218 (CmpLockTableRemove.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 *     MiRemovePteTracker @ 0x1401FC81C (MiRemovePteTracker.c)
 *     RtlStdReleaseStackTrace @ 0x1402115D8 (RtlStdReleaseStackTrace.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140224D8C (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpQueueStackWalkApc @ 0x140229060 (EtwpQueueStackWalkApc.c)
 *     EtwpStackWalkApc @ 0x140229350 (EtwpStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x14022944C (EtwpTraceStackWalk.c)
 *     EtwpDereferenceStackEntry @ 0x14022ADF0 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceStackKey @ 0x14022B004 (EtwpTraceStackKey.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PopInvokeSystemStateHandler @ 0x1403CC110 (PopInvokeSystemStateHandler.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x1403CC8A4 (PopInvokeStateHandlerTargetProcessor.c)
 *     ObReferenceObjectByNameEx @ 0x1403E4434 (ObReferenceObjectByNameEx.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1403EE178 (IoCreateStreamFileObjectEx2.c)
 *     CmpCleanupPathInfo @ 0x1404037E0 (CmpCleanupPathInfo.c)
 *     ObpFreeObjectNameBuffer @ 0x140404C80 (ObpFreeObjectNameBuffer.c)
 *     FsRtlpCleanupEcps @ 0x140413ED0 (FsRtlpCleanupEcps.c)
 *     ObOpenObjectByNameEx @ 0x140417F30 (ObOpenObjectByNameEx.c)
 *     ObpFreeObject @ 0x14041A6C0 (ObpFreeObject.c)
 *     ObCreateObjectEx @ 0x14041C830 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14041DDC0 (ObInsertObjectEx.c)
 *     IopAllocRealFileObject @ 0x140441980 (IopAllocRealFileObject.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140446E10 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpProcessSynchronousRequest @ 0x140447A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404483A0 (AlpcpReceiveMessage.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     IopCreateFile @ 0x14045A850 (IopCreateFile.c)
 *     ObDeleteCapturedInsertInfo @ 0x1404A4794 (ObDeleteCapturedInsertInfo.c)
 *     WdipSemFastFree @ 0x1404C70CC (WdipSemFastFree.c)
 *     RtlpGetRegistryHandle @ 0x1404DDD78 (RtlpGetRegistryHandle.c)
 *     EtwpWriteUserEvent @ 0x1404F38B0 (EtwpWriteUserEvent.c)
 *     IopFreeMiniCompletionPacket @ 0x1404FEE60 (IopFreeMiniCompletionPacket.c)
 *     EtwpInitializeStackTracing @ 0x140553288 (EtwpInitializeStackTracing.c)
 *     ObpFreeWorkItemBlock @ 0x140667A8C (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x140667E80 (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x1406682A0 (ObpRefillWorkItemFreeList.c)
 *     EtwpReferenceStackLookasideList @ 0x1406A8420 (EtwpReferenceStackLookasideList.c)
 *     EtwpEnableStackCaching @ 0x1406A9B1C (EtwpEnableStackCaching.c)
 *     VeAllocatePoolWithTagPriority @ 0x140701DA8 (VeAllocatePoolWithTagPriority.c)
 *     ViFreeTrackedPool @ 0x140702470 (ViFreeTrackedPool.c)
 *     ViGrowPoolAllocation @ 0x140702640 (ViGrowPoolAllocation.c)
 *     MiInitializeDecayPfns @ 0x14078E618 (MiInitializeDecayPfns.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
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
