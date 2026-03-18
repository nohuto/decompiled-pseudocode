/*
 * XREFs of ?IsProtectedContent@CHwndBitmap@@UEBA_NXZ @ 0x1801269B0
 * Callers:
 *     ?IsProtectedContent@CHwndBitmap@@WEA@EBA_NXZ @ 0x1800BD590 (-IsProtectedContent@CHwndBitmap@@WEA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwndBitmap::IsProtectedContent(CHwndBitmap *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 58);
  result = 0;
  if ( v1 )
    return *(_BYTE *)(v1 + 281);
  return result;
}
