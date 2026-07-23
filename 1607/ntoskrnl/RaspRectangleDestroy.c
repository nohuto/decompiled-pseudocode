/*
 * XREFs of RaspRectangleDestroy @ 0x14014125C
 * Callers:
 *     RaspDestroyCachedBitmap @ 0x1407283D4 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RaspRectangleDestroy(__int64 a1, _QWORD *a2)
{
  return RaspFreeMemory(a1, a2);
}
