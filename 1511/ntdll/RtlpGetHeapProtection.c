/*
 * XREFs of RtlpGetHeapProtection @ 0x18001B7E4
 * Callers:
 *     RtlpHpSegPageRangeCommit @ 0x18001B578 (RtlpHpSegPageRangeCommit.c)
 *     RtlpExtendHeap @ 0x18001E644 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18001E8B0 (RtlpFindAndCommitPages.c)
 *     RtlpLowFragHeapFree @ 0x180020B00 (RtlpLowFragHeapFree.c)
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18004F4BC (RtlpExtendLowFragHeapSegment.c)
 *     RtlpFreeUserBlockToHeap @ 0x18004FBB0 (RtlpFreeUserBlockToHeap.c)
 *     RtlpCommitBlock @ 0x180052BE8 (RtlpCommitBlock.c)
 *     RtlpCreateLowFragHeap @ 0x180053214 (RtlpCreateLowFragHeap.c)
 *     RtlpHpSegLfhExtendContext @ 0x1800535C0 (RtlpHpSegLfhExtendContext.c)
 *     RtlProtectHeap @ 0x180055E30 (RtlProtectHeap.c)
 *     RtlpInitializeHeapSegment @ 0x180057998 (RtlpInitializeHeapSegment.c)
 *     RtlpHpSegSegmentAllocate @ 0x1800593FC (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpLargeAlloc @ 0x18005A614 (RtlpHpLargeAlloc.c)
 *     RtlpGetContainingRange @ 0x180085DE8 (RtlpGetContainingRange.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180093700 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     ZwQueryVirtualMemory @ 0x1800A5520 (ZwQueryVirtualMemory.c)
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
