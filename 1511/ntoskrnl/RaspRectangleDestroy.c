/*
 * XREFs of RaspRectangleDestroy @ 0x1401377AC
 * Callers:
 *     RaspDestroyCachedBitmap @ 0x1406DC30C (RaspDestroyCachedBitmap.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RaspRectangleDestroy(__int64 a1, _QWORD *a2)
{
  return RaspFreeMemory(a1, a2);
}
