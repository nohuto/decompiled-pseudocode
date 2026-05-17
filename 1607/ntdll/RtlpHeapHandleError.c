/*
 * XREFs of RtlpHeapHandleError @ 0x1800F7D80
 * Callers:
 *     RtlpExtendHeap @ 0x180027790 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180028400 (RtlpFindAndCommitPages.c)
 *     RtlCreateHeap @ 0x18002BA20 (RtlCreateHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x18004A810 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18004AE00 (RtlpInsertFreeBlock.c)
 *     RtlpPopulateListIndex @ 0x18004CB3C (RtlpPopulateListIndex.c)
 *     RtlpCreateUCREntry @ 0x18004CED0 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x18004D130 (RtlpFindUCREntry.c)
 *     RtlDestroyHeap @ 0x180052060 (RtlDestroyHeap.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlpReportHeapFailure @ 0x1800F9D18 (RtlpReportHeapFailure.c)
 */

__int64 RtlpHeapHandleError()
{
  __int64 result; // rax

  if ( !byte_180152408 )
    return RtlpReportHeapFailure();
  return result;
}
