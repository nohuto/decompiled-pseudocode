/*
 * XREFs of RtlSetUserValueHeap @ 0x180058080
 * Callers:
 *     RtlDebugSetUserValueHeap @ 0x1800ED52C (RtlDebugSetUserValueHeap.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlSetUserValueHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, PVOID UserValue)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpVirtSetUserValueHeap(HeapHandle, Flags, BaseAddress, UserValue);
  else
    return RtlpSetUserValueHeapInternal(HeapHandle);
}
