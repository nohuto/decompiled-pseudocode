/*
 * XREFs of RtlpHeapHandleError @ 0x140218708
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x140092870 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x1400928CC (RtlpInsertFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x140094574 (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x1400946F8 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x140094870 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x14012EC00 (RtlpPopulateListIndex.c)
 *     RtlpLogHeapFailure @ 0x140159A84 (RtlpLogHeapFailure.c)
 *     RtlDestroyHeap @ 0x140533E40 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x140540768 (RtlCreateHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  KeBugCheckEx(0x13Au, dword_1402F90D8, qword_1402F90E0, qword_1402F90E8, 0LL);
}
