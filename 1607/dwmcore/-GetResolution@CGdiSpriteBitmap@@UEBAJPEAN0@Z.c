/*
 * XREFs of ?GetResolution@CGdiSpriteBitmap@@UEBAJPEAN0@Z @ 0x180141800
 * Callers:
 *     ?GetResolution@CGdiSpriteBitmap@@WII@EBAJPEAN0@Z @ 0x1800C0450 (-GetResolution@CGdiSpriteBitmap@@WII@EBAJPEAN0@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CGdiSpriteBitmap::GetResolution(CGdiSpriteBitmap *this, double *a2, double *a3)
{
  return CBitmapResource::GetResolution(this, a2, a3);
}
