/*
 * XREFs of RtlpHeapHandleError @ 0x1800EEE50
 * Callers:
 *     RtlDestroyHeap @ 0x180004920 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x180005330 (RtlCreateHeap.c)
 *     RtlpPopulateListIndex @ 0x1800063C8 (RtlpPopulateListIndex.c)
 *     RtlpCreateUCREntry @ 0x180007368 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x1800075C8 (RtlpFindUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180029048 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180029B50 (RtlpInsertFreeBlock.c)
 *     RtlpExtendHeap @ 0x1800334C0 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180034110 (RtlpFindAndCommitPages.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlpReportHeapFailure @ 0x1800F02E4 (RtlpReportHeapFailure.c)
 */

__int64 RtlpHeapHandleError()
{
  __int64 result; // rax

  if ( !byte_180146208 )
    return RtlpReportHeapFailure();
  return result;
}
