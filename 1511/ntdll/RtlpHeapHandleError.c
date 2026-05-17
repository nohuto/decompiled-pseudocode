/*
 * XREFs of RtlpHeapHandleError @ 0x1800F0DA8
 * Callers:
 *     RtlpFindUCREntry @ 0x18001DD5C (RtlpFindUCREntry.c)
 *     RtlpFindAndCommitPages @ 0x18001E8B0 (RtlpFindAndCommitPages.c)
 *     RtlpDeCommitFreeBlock @ 0x18001F148 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180020000 (RtlpInsertFreeBlock.c)
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 *     RtlpPopulateListIndex @ 0x1800563E8 (RtlpPopulateListIndex.c)
 *     RtlpCreateUCREntry @ 0x180057B9C (RtlpCreateUCREntry.c)
 *     RtlDestroyHeap @ 0x1800590E0 (RtlDestroyHeap.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlpReportHeapFailure @ 0x1800F223C (RtlpReportHeapFailure.c)
 */

__int64 RtlpHeapHandleError()
{
  __int64 result; // rax

  if ( !byte_180145248 )
    return RtlpReportHeapFailure();
  return result;
}
