/*
 * XREFs of DbgPrint @ 0x140084CC8
 * Callers:
 *     SepCreateTokenEx @ 0x14007FC48 (SepCreateTokenEx.c)
 *     RtlpDeCommitFreeBlock @ 0x140092870 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x1400928CC (RtlpInsertFreeBlock.c)
 *     RtlpCreateSplitBlock @ 0x140092ADC (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x140093454 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAllocateHeap @ 0x14009389C (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x140094574 (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x1400946F8 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x140094870 (RtlpFindUCREntry.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400C9B88 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcInitializeCacheMapEx @ 0x1400E62E0 (CcInitializeCacheMapEx.c)
 *     RtlpPopulateListIndex @ 0x14012EC00 (RtlpPopulateListIndex.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x140215D0C (RtlpTraceDatabaseInternalAdd.c)
 *     PopWriteHeaderPages @ 0x1403CBC90 (PopWriteHeaderPages.c)
 *     PoBroadcastSystemState @ 0x1403CEBF8 (PoBroadcastSystemState.c)
 *     PopWriteImageHeader @ 0x1403DF1F4 (PopWriteImageHeader.c)
 *     CmpPostApc @ 0x1403E354C (CmpPostApc.c)
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 *     IopQueryLegacyBusInformation @ 0x1404CFF90 (IopQueryLegacyBusInformation.c)
 *     RtlpQueryRegistryValues @ 0x1404DAFA4 (RtlpQueryRegistryValues.c)
 *     CmNotifyRunDown @ 0x1404F86A8 (CmNotifyRunDown.c)
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 *     RtlDestroyHeap @ 0x140533E40 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x140540768 (RtlCreateHeap.c)
 *     IopUnloadDriver @ 0x140545368 (IopUnloadDriver.c)
 *     ExpSetCurrentUserUILanguage @ 0x1405493B0 (ExpSetCurrentUserUILanguage.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x14056080C (RtlpMuiRegLoadRegistryInfo.c)
 *     CmpPostApcRunDown @ 0x140606B60 (CmpPostApcRunDown.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140665B30 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x140688FE8 (RtlLCIDToCultureName.c)
 *     ViIsBTSSupported @ 0x14070EF9C (ViIsBTSSupported.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140084D34 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&File, 0x65u, 3u, va, 1);
}
