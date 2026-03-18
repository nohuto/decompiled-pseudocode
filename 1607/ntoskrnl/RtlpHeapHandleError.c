/*
 * XREFs of RtlpHeapHandleError @ 0x1402188DC
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x140093070 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x1400930CC (RtlpInsertFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x140094D74 (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x140094EF8 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x140095070 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x14012E690 (RtlpPopulateListIndex.c)
 *     RtlpLogHeapFailure @ 0x140159514 (RtlpLogHeapFailure.c)
 *     RtlDestroyHeap @ 0x140533900 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x140540228 (RtlCreateHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  KeBugCheckEx(0x13Au, dword_1402F90D8, qword_1402F90E0, qword_1402F90E8, 0LL);
}
