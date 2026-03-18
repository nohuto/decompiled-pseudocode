/*
 * XREFs of DbgPrint @ 0x140081B44
 * Callers:
 *     SepCreateTokenEx @ 0x14007FBC8 (SepCreateTokenEx.c)
 *     RtlpDeCommitFreeBlock @ 0x140093070 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x1400930CC (RtlpInsertFreeBlock.c)
 *     RtlpCreateSplitBlock @ 0x1400932DC (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x140093C54 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAllocateHeap @ 0x14009409C (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x140094D74 (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x140094EF8 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x140095070 (RtlpFindUCREntry.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400CBCE8 (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcInitializeCacheMapEx @ 0x1400E8440 (CcInitializeCacheMapEx.c)
 *     RtlpPopulateListIndex @ 0x14012E690 (RtlpPopulateListIndex.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x140215EE0 (RtlpTraceDatabaseInternalAdd.c)
 *     PopWriteHeaderPages @ 0x1403CBC90 (PopWriteHeaderPages.c)
 *     PoBroadcastSystemState @ 0x1403CEBF8 (PoBroadcastSystemState.c)
 *     PopWriteImageHeader @ 0x1403DF1F4 (PopWriteImageHeader.c)
 *     SepDuplicateToken @ 0x140412BD0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x14047AFF4 (SepFilterToken.c)
 *     CmpPostApc @ 0x14049A620 (CmpPostApc.c)
 *     IopLoadDriver @ 0x14049E388 (IopLoadDriver.c)
 *     IopQueryLegacyBusInformation @ 0x1404EDEC4 (IopQueryLegacyBusInformation.c)
 *     RtlpQueryRegistryValues @ 0x1404F8018 (RtlpQueryRegistryValues.c)
 *     CmNotifyRunDown @ 0x1405152B8 (CmNotifyRunDown.c)
 *     RtlDestroyHeap @ 0x140533900 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x140540228 (RtlCreateHeap.c)
 *     IopUnloadDriver @ 0x140544E28 (IopUnloadDriver.c)
 *     ExpSetCurrentUserUILanguage @ 0x140548E70 (ExpSetCurrentUserUILanguage.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1405602CC (RtlpMuiRegLoadRegistryInfo.c)
 *     CmpPostApcRunDown @ 0x140606AAC (CmpPostApcRunDown.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140665A4C (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x140688F04 (RtlLCIDToCultureName.c)
 *     ViIsBTSSupported @ 0x14070EF6C (ViIsBTSSupported.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x140081BB0 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&File, 0x65u, 3u, va, 1);
}
