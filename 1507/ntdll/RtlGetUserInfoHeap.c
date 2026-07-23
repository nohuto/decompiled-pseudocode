/*
 * XREFs of RtlGetUserInfoHeap @ 0x180057CD0
 * Callers:
 *     RtlDebugGetUserInfoHeap @ 0x1800ECAF0 (RtlDebugGetUserInfoHeap.c)
 * Callees:
 *     RtlpGetUserInfoHeapInternal @ 0x180057D00 (RtlpGetUserInfoHeapInternal.c)
 *     RtlpHpVirtGetUserInfoHeap @ 0x1800EAD04 (RtlpHpVirtGetUserInfoHeap.c)
 */

BOOLEAN __cdecl RtlGetUserInfoHeap(
        PVOID HeapHandle,
        ULONG Flags,
        PVOID BaseAddress,
        PVOID *UserValue,
        PULONG UserFlags)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpVirtGetUserInfoHeap(HeapHandle);
  else
    return RtlpGetUserInfoHeapInternal(HeapHandle, UserFlags);
}
