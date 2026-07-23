/*
 * XREFs of RtlValidateHeap @ 0x180038730
 * Callers:
 *     RtlValidateProcessHeaps @ 0x1800D8750 (RtlValidateProcessHeaps.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlValidateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpVirtValidateHeap(HeapHandle, Flags, BaseAddress);
  else
    return RtlpValidateHeapInternal(HeapHandle);
}
