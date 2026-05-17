/*
 * XREFs of RtlGetCurrentProcessorNumber @ 0x1800A6010
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180022DF0 (RtlpAllocateHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x1800240C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHpLfhContextAllocate @ 0x180042D90 (RtlpHpLfhContextAllocate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1800770D8 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHeapTrkInterceptor @ 0x180090FB0 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetCurrentProcessorNumber(unsigned __int8 a1)
{
  char v2; // zf
  unsigned __int32 v3; // eax

  if ( MEMORY[0x7FFE0294] )
  {
    __asm { rdtscp }
    return a1;
  }
  else
  {
    v3 = __segmentlimit(0x53u);
    if ( v2 )
      return v3 >> 14;
    else
      return ZwGetCurrentProcessorNumber();
  }
}
