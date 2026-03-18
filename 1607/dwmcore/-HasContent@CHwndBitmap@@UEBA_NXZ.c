/*
 * XREFs of ?HasContent@CHwndBitmap@@UEBA_NXZ @ 0x1801430A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHwndBitmap::HasContent(CHwndBitmap *this)
{
  return *((_QWORD *)this + 65) != 0LL;
}
