/*
 * XREFs of RtlpGetLFHContext @ 0x18004F408
 * Callers:
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpInitializeSegmentInfoForBucket @ 0x18004F468 (RtlpInitializeSegmentInfoForBucket.c)
 */

__int64 __fastcall RtlpGetLFHContext(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbx

  if ( a1
    && a2 <= RtlpLargestLfhBlock
    && (v2 = RtlpLfhBucketIndexMap[((a2 + 23) >> 4) - 1], (unsigned int)v2 < 0x81)
    && (*(_QWORD *)(a1 + 8 * v2 + 1192)
     || (int)RtlpInitializeSegmentInfoForBucket(a1, RtlpLfhBucketIndexMap[((a2 + 23) >> 4) - 1]) >= 0) )
  {
    return (unsigned __int16)v2;
  }
  else
  {
    return 0xFFFFLL;
  }
}
