/*
 * XREFs of RtlpGetHeapProtection @ 0x1800436D4
 * Callers:
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180027780 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1800283F0 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x180028B24 (RtlpCommitBlock.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180028EF0 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpCreateLowFragHeap @ 0x180029C24 (RtlpCreateLowFragHeap.c)
 *     RtlProtectHeap @ 0x18002D790 (RtlProtectHeap.c)
 *     RtlpHpSegPageRangeCommit @ 0x180043478 (RtlpHpSegPageRangeCommit.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F80 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 *     RtlpInitializeHeapSegment @ 0x18004CCBC (RtlpInitializeHeapSegment.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004EAC8 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlockToHeap @ 0x18004F40C (RtlpFreeUserBlockToHeap.c)
 *     RtlpHpLargeAlloc @ 0x18004F76C (RtlpHpLargeAlloc.c)
 *     RtlpHpSegLfhExtendContext @ 0x180077410 (RtlpHpSegLfhExtendContext.c)
 *     RtlpHpSegSegmentAllocate @ 0x18007FB80 (RtlpHpSegSegmentAllocate.c)
 *     RtlpGetContainingRange @ 0x180089CFC (RtlpGetContainingRange.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180095010 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall RtlpGetHeapProtection(_DWORD *BaseAddress, int a2)
{
  unsigned int v4; // ebx
  _DWORD *MemoryInformation; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+54h] [rbp-14h]

  if ( BaseAddress[4] == -571548178 )
  {
    if ( (BaseAddress[5] & 0x40000000) == 0 )
      return 4;
  }
  else if ( (BaseAddress[28] & 0x40000) == 0 )
  {
    return 4;
  }
  v4 = 64;
  if ( a2
    && (ZwQueryVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          BaseAddress,
          MemoryBasicInformation,
          &MemoryInformation,
          0x30uLL,
          0LL) < 0
     || (v7 & 0x60) == 0
     || MemoryInformation != BaseAddress) )
  {
    RtlpLogHeapFailure(0, (_DWORD)BaseAddress, a2, v7, 0LL, 0LL);
    return 4;
  }
  return v4;
}
