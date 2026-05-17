/*
 * XREFs of RtlWalkHeap @ 0x1800D8880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWalkHeap(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  return RtlpWalkHeapInternal(a1, a2, a3);
}
