/*
 * XREFs of RtlpGetHeapProtection @ 0x1800374CC
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x1800039A8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpCreateLowFragHeap @ 0x180004D48 (RtlpCreateLowFragHeap.c)
 *     RtlProtectHeap @ 0x180005E30 (RtlProtectHeap.c)
 *     RtlpInitializeHeapSegment @ 0x180007164 (RtlpInitializeHeapSegment.c)
 *     RtlpFreeUserBlockToHeap @ 0x180009080 (RtlpFreeUserBlockToHeap.c)
 *     RtlpLowFragHeapFree @ 0x18002ACB0 (RtlpLowFragHeapFree.c)
 *     RtlpAllocateHeap @ 0x180030C30 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1800334C0 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180034110 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x180036FB4 (RtlpCommitBlock.c)
 *     RtlpHpSegLfhVsCommit @ 0x180037280 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpLargeAlloc @ 0x1800586E4 (RtlpHpLargeAlloc.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18006ACE0 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpHpSegLfhExtendContext @ 0x18006C810 (RtlpHpSegLfhExtendContext.c)
 *     RtlpHpSegPageRangeCommit @ 0x1800704D4 (RtlpHpSegPageRangeCommit.c)
 *     RtlpGetContainingRange @ 0x1800D903C (RtlpGetContainingRange.c)
 *     RtlpQueryExtendedInformationHeap @ 0x1800D9C20 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     ZwQueryVirtualMemory @ 0x180093B30 (ZwQueryVirtualMemory.c)
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
