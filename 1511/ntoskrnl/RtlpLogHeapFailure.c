/*
 * XREFs of RtlpLogHeapFailure @ 0x14014FF40
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x1400D2FA0 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x1400D2FFC (RtlpInsertFreeBlock.c)
 *     RtlpCreateSplitBlock @ 0x1400D320C (RtlpCreateSplitBlock.c)
 *     RtlpFreeHeapInternal @ 0x1400D3418 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x1400D34B0 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1400D3A30 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAllocateHeap @ 0x1400D3E80 (RtlpAllocateHeap.c)
 *     RtlpHeapListCompare @ 0x1400D4B20 (RtlpHeapListCompare.c)
 *     RtlpFindAndCommitPages @ 0x1400D4B74 (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x1400D4CF8 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x1400D4DF0 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x1400D4EBC (RtlpRemoveUCRBlock.c)
 *     RtlpInitializeHeapSegment @ 0x140124F28 (RtlpInitializeHeapSegment.c)
 *     RtlpSizeHeapInternal @ 0x1401F9774 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x1401FF1DC (RtlpAnalyzeHeapFailure.c)
 *     RtlpProbeUserBufferSafe @ 0x1401FFEC0 (RtlpProbeUserBufferSafe.c)
 *     RtlDestroyHeap @ 0x1404F4944 (RtlDestroyHeap.c)
 *     RtlZeroHeap @ 0x1406492D8 (RtlZeroHeap.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400243AC (RtlCaptureStackBackTrace.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x1401F94B4 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1401FF50C (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x1401FF7BC (RtlpLocateRelatedBlocks.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5)
{
  if ( qword_1402D36D0 != a2 )
  {
    dword_1402D36C8 = a1;
    qword_1402D36D0 = a2;
    qword_1402D36D8 = a3;
    qword_1402D36E0 = a4;
    qword_1402D36E8 = a5;
    qword_1402D36F0 = 0LL;
    memset(&BackTrace, 0, 0x100uLL);
    RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
    if ( dword_1402D36C8 == 3 )
      RtlpLocateRelatedBlocks(a2, a3);
    RtlpHeapHandleError();
  }
}
