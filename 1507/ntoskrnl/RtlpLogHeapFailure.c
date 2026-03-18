/*
 * XREFs of RtlpLogHeapFailure @ 0x14017E6E8
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x140109420 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x14010947C (RtlpInsertFreeBlock.c)
 *     RtlpCreateSplitBlock @ 0x14010968C (RtlpCreateSplitBlock.c)
 *     RtlpFreeHeapInternal @ 0x14010987C (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x140109914 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x140109E94 (RtlpCoalesceFreeBlocks.c)
 *     RtlpAllocateHeap @ 0x14010A2D0 (RtlpAllocateHeap.c)
 *     RtlpHeapListCompare @ 0x14010AF70 (RtlpHeapListCompare.c)
 *     RtlpFindAndCommitPages @ 0x14010AFC4 (RtlpFindAndCommitPages.c)
 *     RtlpCreateUCREntry @ 0x14010B148 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x14010B240 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x14010B30C (RtlpRemoveUCRBlock.c)
 *     RtlpInitializeHeapSegment @ 0x14015858C (RtlpInitializeHeapSegment.c)
 *     RtlpSizeHeapInternal @ 0x1402487C8 (RtlpSizeHeapInternal.c)
 *     RtlpAnalyzeHeapFailure @ 0x14024E06C (RtlpAnalyzeHeapFailure.c)
 *     RtlpProbeUserBufferSafe @ 0x14024ED50 (RtlpProbeUserBufferSafe.c)
 *     RtlDestroyHeap @ 0x1405839D0 (RtlDestroyHeap.c)
 *     RtlZeroHeap @ 0x1406CC35C (RtlZeroHeap.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x140248508 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x14024E39C (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x14024E64C (RtlpLocateRelatedBlocks.c)
 */

void __fastcall RtlpLogHeapFailure(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4, __int64 a5)
{
  if ( qword_1403227F0 != a2 )
  {
    dword_1403227E8 = a1;
    qword_1403227F0 = a2;
    qword_1403227F8 = a3;
    qword_140322800 = a4;
    qword_140322808 = a5;
    qword_140322810 = 0LL;
    memset(&BackTrace, 0, 0x100uLL);
    RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
    if ( dword_1403227E8 == 3 )
      RtlpLocateRelatedBlocks(a2, a3);
    RtlpHeapHandleError();
  }
}
