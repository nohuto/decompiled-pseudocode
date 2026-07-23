/*
 * XREFs of RtlpLogHeapFailure @ 0x140159A84
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x140092870 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x1400928CC (RtlpInsertFreeBlock.c)
 *     RtlpCreateSplitBlock @ 0x140092ADC (RtlpCreateSplitBlock.c)
 *     RtlpFreeHeapInternal @ 0x140092CE8 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x140092ECC (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x140093454 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAllocateHeap @ 0x14009389C (RtlpAllocateHeap.c)
 *     RtlpHeapListCompare @ 0x140094520 (RtlpHeapListCompare.c)
 *     RtlpFindAndCommitPages @ 0x140094574 (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x1400946F8 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x1400947F0 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x1400948BC (RtlpRemoveUCRBlock.c)
 *     RtlpInitializeHeapSegment @ 0x14012ED0C (RtlpInitializeHeapSegment.c)
 *     RtlpSizeHeapInternal @ 0x1402138CC (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402183D8 (RtlpAnalyzeHeapFailure.c)
 *     RtlpProbeUserBufferSafe @ 0x1402190A8 (RtlpProbeUserBufferSafe.c)
 *     RtlDestroyHeap @ 0x140533E40 (RtlDestroyHeap.c)
 *     RtlZeroHeap @ 0x140688980 (RtlZeroHeap.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140082890 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x14021360C (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x140218708 (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x1402189A4 (RtlpLocateRelatedBlocks.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5)
{
  if ( qword_1402F90E0 != a2 )
  {
    dword_1402F90D8 = a1;
    qword_1402F90E0 = a2;
    qword_1402F90E8 = a3;
    qword_1402F90F0 = a4;
    qword_1402F90F8 = a5;
    qword_1402F9100 = 0LL;
    memset(&BackTrace, 0, 0x100uLL);
    RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
    if ( dword_1402F90D8 == 3 )
      RtlpLocateRelatedBlocks(a2, a3);
    RtlpHeapHandleError();
  }
}
