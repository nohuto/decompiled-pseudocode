/*
 * XREFs of RtlpIsSubSegmentReuseable @ 0x18002D980
 * Callers:
 *     RtlpLocalInfoAllocFromCache @ 0x180008CE4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapFree @ 0x18002ACB0 (RtlpLowFragHeapFree.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002F190 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlpLogHeapReuseThresholdActivate @ 0x1800EF9C4 (RtlpLogHeapReuseThresholdActivate.c)
 */

char __fastcall RtlpIsSubSegmentReuseable(__int64 a1, __int64 a2)
{
  char v2; // di
  bool v3; // bl
  unsigned __int16 v5; // ax

  if ( !*(_WORD *)(a2 + 32) )
    return 0;
  v2 = 1;
  v3 = (RtlpLowFragHeapGlobalFlags & 4) == 0
    && (v5 = *(_WORD *)(a1 + 172), v5 <= 0x70u)
    && *(_DWORD *)(a1 + 160) >= 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v5]
    && *(_WORD *)(a2 + 32) < (unsigned int)(*(_WORD *)(a2 + 40) >> 2);
  if ( MEMORY[0x7FFE038A] || MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( !v3 )
      return v2;
    RtlpLogHeapReuseThresholdActivate(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL),
      *(_QWORD *)(a2 + 8),
      *(unsigned __int16 *)(a1 + 172));
  }
  if ( v3 )
    return 0;
  return v2;
}
