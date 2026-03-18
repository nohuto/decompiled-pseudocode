/*
 * XREFs of RtlpLogHeapFailure @ 0x140159514
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x140093070 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x1400930CC (RtlpInsertFreeBlock.c)
 *     RtlpCreateSplitBlock @ 0x1400932DC (RtlpCreateSplitBlock.c)
 *     RtlpFreeHeapInternal @ 0x1400934E8 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x1400936CC (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x140093C54 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAllocateHeap @ 0x14009409C (RtlpAllocateHeap.c)
 *     RtlpHeapListCompare @ 0x140094D20 (RtlpHeapListCompare.c)
 *     RtlpFindAndCommitPages @ 0x140094D74 (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x140094EF8 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x140094FF0 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x1400950BC (RtlpRemoveUCRBlock.c)
 *     RtlpInitializeHeapSegment @ 0x14012E79C (RtlpInitializeHeapSegment.c)
 *     RtlpSizeHeapInternal @ 0x140213AA0 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402185AC (RtlpAnalyzeHeapFailure.c)
 *     RtlpProbeUserBufferSafe @ 0x14021927C (RtlpProbeUserBufferSafe.c)
 *     RtlDestroyHeap @ 0x140533900 (RtlDestroyHeap.c)
 *     RtlZeroHeap @ 0x14068889C (RtlZeroHeap.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140084730 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x1402137E0 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1402188DC (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x140218B78 (RtlpLocateRelatedBlocks.c)
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
