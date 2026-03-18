/*
 * XREFs of BgpGxDrawBitmapImage @ 0x1406DF20C
 * Callers:
 *     AnFwDisplayBackgroundUpdate @ 0x1406DCA98 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1406DF258 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x14011C310 (BgpGxDrawRectangle.c)
 *     BgpGxParseBitmap @ 0x1406D9990 (BgpGxParseBitmap.c)
 *     BgpGxRectangleDestroy @ 0x1406DB7A4 (BgpGxRectangleDestroy.c)
 */

__int64 __fastcall BgpGxDrawBitmapImage(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v3 = BgpGxParseBitmap(a1, &v5);
  if ( v3 >= 0 )
  {
    v3 = BgpGxDrawRectangle(v5, a2);
    BgpGxRectangleDestroy(v5);
  }
  return (unsigned int)v3;
}
