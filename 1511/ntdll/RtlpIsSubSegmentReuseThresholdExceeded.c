/*
 * XREFs of RtlpIsSubSegmentReuseThresholdExceeded @ 0x18004F5A8
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x180025DE0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004F7C8 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     RtlpLogHeapReuseThresholdActivate @ 0x1800F191C (RtlpLogHeapReuseThresholdActivate.c)
 */

bool __fastcall RtlpIsSubSegmentReuseThresholdExceeded(__int64 a1, __int64 a2)
{
  bool v2; // bl
  unsigned __int16 v4; // ax

  v2 = (RtlpLowFragHeapGlobalFlags & 4) == 0
    && (v4 = *(_WORD *)(a1 + 172), v4 <= 0x70u)
    && *(_DWORD *)(a1 + 160) >= 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v4]
    && *(_WORD *)(a2 + 32) < (unsigned int)(*(_WORD *)(a2 + 40) >> 2);
  if ( (MEMORY[0x7FFE038A] || MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0) && v2 )
    RtlpLogHeapReuseThresholdActivate(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL),
      *(_QWORD *)(a2 + 8),
      *(unsigned __int16 *)(a1 + 172));
  return v2;
}
