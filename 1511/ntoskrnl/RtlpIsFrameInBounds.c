/*
 * XREFs of RtlpIsFrameInBounds @ 0x140026130
 * Callers:
 *     RtlDispatchException @ 0x140024440 (RtlDispatchException.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpIsFrameInBounds(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  return (a2 & 7) == 0 && a2 >= *a1 && a2 < *a3;
}
