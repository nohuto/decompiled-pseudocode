/*
 * XREFs of RtlpLogHeapFailure @ 0x1800A4B04
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x18001A548 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpFreeHeap @ 0x18001ABF8 (RtlpHpFreeHeap.c)
 *     RtlpHpSegFree @ 0x18001B3B4 (RtlpHpSegFree.c)
 *     RtlpGetHeapProtection @ 0x18001B7E4 (RtlpGetHeapProtection.c)
 *     RtlSizeHeap @ 0x18001BA80 (RtlSizeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x18001DDEC (RtlpCoalesceFreeBlocks.c)
 *     RtlpFindAndCommitPages @ 0x18001E8B0 (RtlpFindAndCommitPages.c)
 *     RtlpDeCommitFreeBlock @ 0x18001F148 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180020000 (RtlpInsertFreeBlock.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlpLowFragHeapFree @ 0x180020B00 (RtlpLowFragHeapFree.c)
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x180022430 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180023D40 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x180023F60 (RtlpReAllocateHeap.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180025DE0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 *     RtlpHpVsContextAllocate @ 0x18002B090 (RtlpHpVsContextAllocate.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004F7C8 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpHpVsContextFree @ 0x180050AE0 (RtlpHpVsContextFree.c)
 *     RtlpGrowBlockInPlace @ 0x180056578 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180056BFC (RtlpCreateSplitBlock.c)
 *     RtlpHeapFindListLookupEntry @ 0x1800574EC (RtlpHeapFindListLookupEntry.c)
 *     RtlpHeapListCompare @ 0x180057700 (RtlpHeapListCompare.c)
 *     RtlpHeapRemoveListEntry @ 0x180057774 (RtlpHeapRemoveListEntry.c)
 *     RtlpInitializeHeapSegment @ 0x180057998 (RtlpInitializeHeapSegment.c)
 *     RtlpCreateUCREntry @ 0x180057B9C (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x180057CF8 (RtlpInsertUCRBlock.c)
 *     RtlpDestroyHeapSegment @ 0x1800592C8 (RtlpDestroyHeapSegment.c)
 *     RtlpRemoveUCRBlock @ 0x180059BEC (RtlpRemoveUCRBlock.c)
 *     RtlpHpLargeFree @ 0x18005A4D4 (RtlpHpLargeFree.c)
 *     RtlGetUserInfoHeap @ 0x1800744C0 (RtlGetUserInfoHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x180074788 (RtlpProbeUserBufferSafe.c)
 *     RtlSetUserValueHeap @ 0x180074870 (RtlSetUserValueHeap.c)
 *     RtlpCoalesceHeap @ 0x18008E114 (RtlpCoalesceHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800E02C0 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800E2BC0 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800F01C8 (RtlpValidateHeapSegment.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F09E4 (RtlpAnalyzeHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180032D60 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x1800E3178 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1800F0DA8 (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x1800F1184 (RtlpLocateRelatedBlocks.c)
 */

__int64 __fastcall RtlpLogHeapFailure(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( qword_1801422C0 != a2 )
  {
    dword_1801422B8 = a1;
    qword_1801422C0 = a2;
    qword_1801422C8 = a3;
    qword_1801422D0 = a4;
    qword_1801422D8 = a5;
    qword_1801422E0 = a6;
    memset(&BackTrace, 0, 0x100uLL);
    RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
    if ( dword_1801422B8 == 3 )
      RtlpLocateRelatedBlocks(a2, a3);
    return RtlpHeapHandleError(2LL);
  }
  return result;
}
