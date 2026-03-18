/*
 * XREFs of ?HasContent@CHwndBitmap@@UEBA_NXZ @ 0x1801268A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHwndBitmap::HasContent(CHwndBitmap *this)
{
  return *((_QWORD *)this + 55) != 0LL;
}
