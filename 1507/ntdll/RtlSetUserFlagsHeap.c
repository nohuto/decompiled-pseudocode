/*
 * XREFs of RtlSetUserFlagsHeap @ 0x1800D85F0
 * Callers:
 *     RtlDebugSetUserFlagsHeap @ 0x1800ED358 (RtlDebugSetUserFlagsHeap.c)
 * Callees:
 *     RtlpSetUserFlagsHeapInternal @ 0x1800DA634 (RtlpSetUserFlagsHeapInternal.c)
 */

__int64 __fastcall RtlSetUserFlagsHeap(int a1, int a2, int a3, int a4, int a5)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpVirtSetUserFlagsHeap();
  else
    return RtlpSetUserFlagsHeapInternal(a1, a2, a3, a5, a4);
}
