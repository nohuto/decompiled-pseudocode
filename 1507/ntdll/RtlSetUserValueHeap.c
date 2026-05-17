/*
 * XREFs of RtlSetUserValueHeap @ 0x180058080
 * Callers:
 *     RtlDebugSetUserValueHeap @ 0x1800ED52C (RtlDebugSetUserValueHeap.c)
 * Callees:
 *     <none>
 */

__int64 RtlSetUserValueHeap()
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpVirtSetUserValueHeap();
  else
    return RtlpSetUserValueHeapInternal();
}
