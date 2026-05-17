/*
 * XREFs of RtlpLogHeapFailure @ 0x180093344
 * Callers:
 *     RtlpRemoveUCRBlock @ 0x18000423C (RtlpRemoveUCRBlock.c)
 *     RtlpGrowBlockInPlace @ 0x180006558 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x1800069E8 (RtlpCreateSplitBlock.c)
 *     RtlpHeapRemoveListEntry @ 0x180006F18 (RtlpHeapRemoveListEntry.c)
 *     RtlpHeapListCompare @ 0x180007060 (RtlpHeapListCompare.c)
 *     RtlpInitializeHeapSegment @ 0x180007164 (RtlpInitializeHeapSegment.c)
 *     RtlpCreateUCREntry @ 0x180007368 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x1800074C4 (RtlpInsertUCRBlock.c)
 *     RtlpDestroyHeapSegment @ 0x180007A98 (RtlpDestroyHeapSegment.c)
 *     RtlpLocalInfoAllocFromCache @ 0x180008CE4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpHpVsContextAllocate @ 0x180028D80 (RtlpHpVsContextAllocate.c)
 *     RtlpDeCommitFreeBlock @ 0x180029048 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180029B50 (RtlpInsertFreeBlock.c)
 *     RtlpHeapFindListLookupEntry @ 0x180029F40 (RtlpHeapFindListLookupEntry.c)
 *     RtlSizeHeap @ 0x18002A610 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlpLowFragHeapFree @ 0x18002ACB0 (RtlpLowFragHeapFree.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18002B170 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpSegFree @ 0x18002B710 (RtlpHpSegFree.c)
 *     RtlpFreeHeap @ 0x18002C140 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x18002DA50 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18002DC40 (RtlpReAllocateHeap.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002F190 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x180030C30 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1800334C0 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180034110 (RtlpFindAndCommitPages.c)
 *     RtlpGetHeapProtection @ 0x1800374CC (RtlpGetHeapProtection.c)
 *     RtlpHpFreeHeap @ 0x180038098 (RtlpHpFreeHeap.c)
 *     RtlpGetUserInfoHeapInternal @ 0x180057D00 (RtlpGetUserInfoHeapInternal.c)
 *     RtlpProbeUserBufferSafe @ 0x180057FF0 (RtlpProbeUserBufferSafe.c)
 *     RtlpSetUserValueHeapInternal @ 0x180058098 (RtlpSetUserValueHeapInternal.c)
 *     RtlpHpLargeFree @ 0x1800585DC (RtlpHpLargeFree.c)
 *     RtlpCoalesceHeap @ 0x180078F24 (RtlpCoalesceHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x18007902C (RtlpCoalesceFreeBlocks.c)
 *     RtlpSetUserFlagsHeapInternal @ 0x1800DA634 (RtlpSetUserFlagsHeapInternal.c)
 *     RtlZeroHeap @ 0x1800DCA00 (RtlZeroHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800DD1F4 (RtlpFreeHeapInternal.c)
 *     RtlpSizeHeapInternal @ 0x1800DD7F8 (RtlpSizeHeapInternal.c)
 *     RtlpValidateHeapSegment @ 0x1800EE1F8 (RtlpValidateHeapSegment.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800EEA14 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1800F3228 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180012600 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1800EEE50 (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x1800EF22C (RtlpLocateRelatedBlocks.c)
 */

__int64 __fastcall RtlpLogHeapFailure(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_180143190 != a2 )
  {
    dword_180143188 = a1;
    qword_180143190 = a2;
    qword_180143198 = a3;
    qword_1801431A0 = a4;
    qword_1801431A8 = a5;
    qword_1801431B0 = a6;
    memset(&BackTrace, 0, 0x100uLL);
    RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
    if ( dword_180143188 == 3 )
      RtlpLocateRelatedBlocks(a2, a3);
    return RtlpHeapHandleError(2LL);
  }
  return result;
}
