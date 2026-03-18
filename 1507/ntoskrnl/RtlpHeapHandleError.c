/*
 * XREFs of RtlpHeapHandleError @ 0x14024E39C
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x140109420 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x14010947C (RtlpInsertFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14010AFC4 (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x14010B148 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x14010B2C0 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x140158480 (RtlpPopulateListIndex.c)
 *     RtlpLogHeapFailure @ 0x14017E6E8 (RtlpLogHeapFailure.c)
 *     RtlCreateHeap @ 0x14057F114 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1405839D0 (RtlDestroyHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  KeBugCheckEx(0x13Au, dword_1403227E8, qword_1403227F0, qword_1403227F8, 0LL);
}
