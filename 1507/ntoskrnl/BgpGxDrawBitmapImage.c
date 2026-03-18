/*
 * XREFs of BgpGxDrawBitmapImage @ 0x140762288
 * Callers:
 *     AnFwDisplayBackgroundUpdate @ 0x14075FAE0 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpBackgroundUpdateTimer @ 0x1407622D4 (AnFwpBackgroundUpdateTimer.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x1401505A0 (BgpGxDrawRectangle.c)
 *     BgpGxParseBitmap @ 0x14075C9D8 (BgpGxParseBitmap.c)
 *     BgpGxRectangleDestroy @ 0x14075E7EC (BgpGxRectangleDestroy.c)
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
