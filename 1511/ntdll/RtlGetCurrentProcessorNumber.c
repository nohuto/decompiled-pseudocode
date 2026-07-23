/*
 * XREFs of RtlGetCurrentProcessorNumber @ 0x1800A4CB0
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x180025DE0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800270C0 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18004E8C0 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHeapTrkInterceptor @ 0x180094F10 (RtlpHeapTrkInterceptor.c)
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
