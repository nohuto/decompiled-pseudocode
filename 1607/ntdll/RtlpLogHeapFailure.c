/*
 * XREFs of RtlpLogHeapFailure @ 0x1800A5E64
 * Callers:
 *     RtlpHpVsContextFree @ 0x18001CC40 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextAllocate @ 0x18001D100 (RtlpHpVsContextAllocate.c)
 *     RtlpReAllocateHeapInternal @ 0x180020DD0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x1800211D0 (RtlpReAllocateHeap.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x1800240C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x180025060 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180027790 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180028400 (RtlpFindAndCommitPages.c)
 *     RtlpHeapRemoveListEntry @ 0x1800289EC (RtlpHeapRemoveListEntry.c)
 *     RtlSetUserValueHeap @ 0x180029050 (RtlSetUserValueHeap.c)
 *     RtlpRemoveUCRBlock @ 0x180029364 (RtlpRemoveUCRBlock.c)
 *     RtlpGetHeapProtection @ 0x1800436E4 (RtlpGetHeapProtection.c)
 *     RtlSizeHeap @ 0x180046180 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F90 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpFreeHeap @ 0x180047A70 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180048100 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x180049370 (RtlpFreeHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x18004A810 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18004AE00 (RtlpInsertFreeBlock.c)
 *     RtlpHeapFindListLookupEntry @ 0x18004B1F0 (RtlpHeapFindListLookupEntry.c)
 *     RtlpCoalesceFreeBlocks @ 0x18004B4AC (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x18004BF00 (RtlpCreateSplitBlock.c)
 *     RtlpHeapListCompare @ 0x18004C414 (RtlpHeapListCompare.c)
 *     RtlpGrowBlockInPlace @ 0x18004C470 (RtlpGrowBlockInPlace.c)
 *     RtlpHpSegFree @ 0x18004C920 (RtlpHpSegFree.c)
 *     RtlpInitializeHeapSegment @ 0x18004CCCC (RtlpInitializeHeapSegment.c)
 *     RtlpCreateUCREntry @ 0x18004CED0 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x18004D02C (RtlpInsertUCRBlock.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004EAD8 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004EFB0 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpHpLargeFree @ 0x18004F630 (RtlpHpLargeFree.c)
 *     RtlpDestroyHeapSegment @ 0x180052264 (RtlpDestroyHeapSegment.c)
 *     RtlGetUserInfoHeap @ 0x18007AB50 (RtlGetUserInfoHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x18007AE0C (RtlpProbeUserBufferSafe.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180089210 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpCoalesceHeap @ 0x180090B44 (RtlpCoalesceHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800E9420 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800EBC50 (RtlZeroHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpValidateHeapSegment @ 0x1800FB6A0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1800325B0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC210 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1800F7D80 (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x1800F8C98 (RtlpLocateRelatedBlocks.c)
 */

__int64 __fastcall RtlpLogHeapFailure(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_18014F6C0 != a2 )
  {
    dword_18014F6B8 = a1;
    qword_18014F6C0 = a2;
    qword_18014F6C8 = a3;
    qword_18014F6D0 = a4;
    qword_18014F6D8 = a5;
    qword_18014F6E0 = a6;
    memset(&BackTrace, 0, 0x100uLL);
    RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
    if ( dword_18014F6B8 == 3 )
      RtlpLocateRelatedBlocks(a2, a3);
    return RtlpHeapHandleError(2LL);
  }
  return result;
}
