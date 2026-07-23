/*
 * XREFs of RtlpLogHeapFailure @ 0x1800A5E64
 * Callers:
 *     RtlpHpVsContextFree @ 0x18001CC30 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextAllocate @ 0x18001D0F0 (RtlpHpVsContextAllocate.c)
 *     RtlpReAllocateHeapInternal @ 0x180020DC0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x1800211C0 (RtlpReAllocateHeap.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x1800240B0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180027780 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1800283F0 (RtlpFindAndCommitPages.c)
 *     RtlpHeapRemoveListEntry @ 0x1800289DC (RtlpHeapRemoveListEntry.c)
 *     RtlSetUserValueHeap @ 0x180029040 (RtlSetUserValueHeap.c)
 *     RtlpRemoveUCRBlock @ 0x180029354 (RtlpRemoveUCRBlock.c)
 *     RtlpGetHeapProtection @ 0x1800436D4 (RtlpGetHeapProtection.c)
 *     RtlSizeHeap @ 0x180046170 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F80 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpFreeHeap @ 0x180047A60 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x180049360 (RtlpFreeHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x18004A800 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18004ADF0 (RtlpInsertFreeBlock.c)
 *     RtlpHeapFindListLookupEntry @ 0x18004B1E0 (RtlpHeapFindListLookupEntry.c)
 *     RtlpCoalesceFreeBlocks @ 0x18004B49C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x18004BEF0 (RtlpCreateSplitBlock.c)
 *     RtlpHeapListCompare @ 0x18004C404 (RtlpHeapListCompare.c)
 *     RtlpGrowBlockInPlace @ 0x18004C460 (RtlpGrowBlockInPlace.c)
 *     RtlpHpSegFree @ 0x18004C910 (RtlpHpSegFree.c)
 *     RtlpInitializeHeapSegment @ 0x18004CCBC (RtlpInitializeHeapSegment.c)
 *     RtlpCreateUCREntry @ 0x18004CEC0 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x18004D01C (RtlpInsertUCRBlock.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004EAC8 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004EFA0 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpHpLargeFree @ 0x18004F620 (RtlpHpLargeFree.c)
 *     RtlpDestroyHeapSegment @ 0x180052254 (RtlpDestroyHeapSegment.c)
 *     RtlGetUserInfoHeap @ 0x18007AB40 (RtlGetUserInfoHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x18007ADFC (RtlpProbeUserBufferSafe.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180089200 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpCoalesceHeap @ 0x180090B34 (RtlpCoalesceHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800E94E0 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800EBD10 (RtlZeroHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpValidateHeapSegment @ 0x1800FB6A0 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1800325A0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x1800EC2D0 (RtlpHeapExceptionFilter.c)
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
