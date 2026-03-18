/*
 * XREFs of DbgPrint @ 0x1400E696C
 * Callers:
 *     CcInitializeCacheMap @ 0x1400AF300 (CcInitializeCacheMap.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1400B0CB0 (CcInsertIntoCleanSharedCacheMapList.c)
 *     RtlpDeCommitFreeBlock @ 0x1400D2FA0 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x1400D2FFC (RtlpInsertFreeBlock.c)
 *     RtlpCreateSplitBlock @ 0x1400D320C (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x1400D3A30 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAllocateHeap @ 0x1400D3E80 (RtlpAllocateHeap.c)
 *     RtlpFindAndCommitPages @ 0x1400D4B74 (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x1400D4CF8 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x1400D4E70 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x140124E1C (RtlpPopulateListIndex.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1401FBC38 (RtlpTraceDatabaseInternalAdd.c)
 *     PopWriteHeaderPages @ 0x14039FEF0 (PopWriteHeaderPages.c)
 *     PoBroadcastSystemState @ 0x1403A49B4 (PoBroadcastSystemState.c)
 *     PopWriteImageHeader @ 0x1403B2510 (PopWriteImageHeader.c)
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 *     SeSetSessionIdToken @ 0x1403C51A4 (SeSetSessionIdToken.c)
 *     CmNotifyRunDown @ 0x1403F1B90 (CmNotifyRunDown.c)
 *     IopUnloadDriver @ 0x140493DE4 (IopUnloadDriver.c)
 *     CmpPostApc @ 0x14049A7D4 (CmpPostApc.c)
 *     RtlpQueryRegistryValues @ 0x1404C87C0 (RtlpQueryRegistryValues.c)
 *     IopQueryLegacyBusInformation @ 0x1404E720C (IopQueryLegacyBusInformation.c)
 *     RtlDestroyHeap @ 0x1404F4944 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x1405093C8 (RtlCreateHeap.c)
 *     ExpSetCurrentUserUILanguage @ 0x14050D4F4 (ExpSetCurrentUserUILanguage.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x140538D48 (RtlpMuiRegLoadRegistryInfo.c)
 *     CmpPostApcRunDown @ 0x1405E74DC (CmpPostApcRunDown.c)
 *     ObpShutdownCloseHandleProcedure @ 0x14062D940 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x14064993C (RtlLCIDToCultureName.c)
 *     ViIsBTSSupported @ 0x1406C2EDC (ViIsBTSSupported.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1400E69D8 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&File, 0x65u, 3u, va, 1);
}
