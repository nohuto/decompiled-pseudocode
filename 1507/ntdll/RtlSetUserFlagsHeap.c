/*
 * XREFs of RtlSetUserFlagsHeap @ 0x1800D85F0
 * Callers:
 *     RtlDebugSetUserFlagsHeap @ 0x1800ED358 (RtlDebugSetUserFlagsHeap.c)
 * Callees:
 *     RtlpSetUserFlagsHeapInternal @ 0x1800DA634 (RtlpSetUserFlagsHeapInternal.c)
 */

BOOLEAN __cdecl RtlSetUserFlagsHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        ULONG UserFlagsReset,
        ULONG UserFlagsSet)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpVirtSetUserFlagsHeap(HeapHandle);
  else
    return RtlpSetUserFlagsHeapInternal(HeapHandle, UserFlagsReset);
}
