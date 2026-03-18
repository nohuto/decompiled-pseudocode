/*
 * XREFs of ?HasContent@CHwndBitmap@@UEBA_NXZ @ 0x18010AE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHwndBitmap::HasContent(CHwndBitmap *this)
{
  return *((_QWORD *)this + 55) != 0LL;
}
