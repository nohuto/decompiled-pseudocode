/*
 * XREFs of RtlValidateHeap @ 0x180038730
 * Callers:
 *     RtlValidateProcessHeaps @ 0x1800D8750 (RtlValidateProcessHeaps.c)
 * Callees:
 *     <none>
 */

__int64 RtlValidateHeap()
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpVirtValidateHeap();
  else
    return RtlpValidateHeapInternal();
}
