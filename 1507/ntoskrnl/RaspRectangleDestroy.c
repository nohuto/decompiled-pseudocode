/*
 * XREFs of RaspRectangleDestroy @ 0x140166350
 * Callers:
 *     RaspDestroyCachedBitmap @ 0x14075F354 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RaspRectangleDestroy(__int64 a1, _QWORD *a2)
{
  return RaspFreeMemory(a1, a2);
}
