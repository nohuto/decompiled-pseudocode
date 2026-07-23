/*
 * XREFs of RtlGetCurrentProcessorNumber @ 0x1800A6010
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180022DE0 (RtlpAllocateHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x1800240B0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHpLfhContextAllocate @ 0x180042D80 (RtlpHpLfhContextAllocate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1800770C8 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHeapTrkInterceptor @ 0x180090FA0 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetCurrentProcessorNumber(void)
{
  unsigned __int8 v0; // cl
  char v2; // zf
  unsigned __int32 v3; // eax

  if ( MEMORY[0x7FFE0294] )
  {
    __asm { rdtscp }
    return v0;
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
