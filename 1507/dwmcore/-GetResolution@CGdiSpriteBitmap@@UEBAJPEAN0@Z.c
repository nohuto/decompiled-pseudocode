/*
 * XREFs of ?GetResolution@CGdiSpriteBitmap@@UEBAJPEAN0@Z @ 0x1801080C0
 * Callers:
 *     ?GetResolution@CGdiSpriteBitmap@@WEA@EBAJPEAN0@Z @ 0x18009A760 (-GetResolution@CGdiSpriteBitmap@@WEA@EBAJPEAN0@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CGdiSpriteBitmap::GetResolution(CGdiSpriteBitmap *this, double *a2, double *a3)
{
  return CBitmapResource::GetResolution(this, a2, a3);
}
