/*
 * XREFs of RtlpGetHeapProtection @ 0x1800436E4
 * Callers:
 *     RtlpAllocateHeap @ 0x180025060 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180027790 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180028400 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x180028B34 (RtlpCommitBlock.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180028F00 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpCreateLowFragHeap @ 0x180029C34 (RtlpCreateLowFragHeap.c)
 *     RtlProtectHeap @ 0x18002D7A0 (RtlProtectHeap.c)
 *     RtlpHpSegPageRangeCommit @ 0x180043488 (RtlpHpSegPageRangeCommit.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F90 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x180048100 (RtlpFreeHeapInternal.c)
 *     RtlpInitializeHeapSegment @ 0x18004CCCC (RtlpInitializeHeapSegment.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004EAD8 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlockToHeap @ 0x18004F41C (RtlpFreeUserBlockToHeap.c)
 *     RtlpHpLargeAlloc @ 0x18004F77C (RtlpHpLargeAlloc.c)
 *     RtlpHpSegLfhExtendContext @ 0x180077420 (RtlpHpSegLfhExtendContext.c)
 *     RtlpHpSegSegmentAllocate @ 0x18007FB90 (RtlpHpSegSegmentAllocate.c)
 *     RtlpGetContainingRange @ 0x180089D0C (RtlpGetContainingRange.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180095020 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall RtlpGetHeapProtection(_DWORD *a1, int a2)
{
  unsigned int v4; // ebx
  _DWORD *v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+54h] [rbp-14h]

  if ( a1[4] == -571548178 )
  {
    if ( (a1[5] & 0x40000000) == 0 )
      return 4;
  }
  else if ( (a1[28] & 0x40000) == 0 )
  {
    return 4;
  }
  v4 = 64;
  if ( a2 && ((int)ZwQueryVirtualMemory(-1LL, a1, 0LL, &v6) < 0 || (v7 & 0x60) == 0 || v6 != a1) )
  {
    RtlpLogHeapFailure(0, (_DWORD)a1, a2, v7, 0LL, 0LL);
    return 4;
  }
  return v4;
}
