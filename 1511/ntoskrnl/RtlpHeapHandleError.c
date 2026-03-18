/*
 * XREFs of RtlpHeapHandleError @ 0x1401FF50C
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x1400D2FA0 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x1400D2FFC (RtlpInsertFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1400D4B74 (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x1400D4CF8 (RtlpCreateUCREntry.c)
 *     RtlpFindUCREntry @ 0x1400D4E70 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x140124E1C (RtlpPopulateListIndex.c)
 *     RtlpLogHeapFailure @ 0x14014FF40 (RtlpLogHeapFailure.c)
 *     RtlDestroyHeap @ 0x1404F4944 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x1405093C8 (RtlCreateHeap.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __noreturn RtlpHeapHandleError()
{
  KeBugCheckEx(0x13Au, dword_1402D36C8, qword_1402D36D0, qword_1402D36D8, 0LL);
}
