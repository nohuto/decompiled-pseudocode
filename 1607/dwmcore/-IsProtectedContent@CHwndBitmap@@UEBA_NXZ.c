/*
 * XREFs of ?IsProtectedContent@CHwndBitmap@@UEBA_NXZ @ 0x1801431B0
 * Callers:
 *     ?IsProtectedContent@CHwndBitmap@@WII@EBA_NXZ @ 0x1800C05F0 (-IsProtectedContent@CHwndBitmap@@WII@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwndBitmap::IsProtectedContent(CHwndBitmap *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 68);
  result = 0;
  if ( v1 )
    return *(_BYTE *)(v1 + 369);
  return result;
}
