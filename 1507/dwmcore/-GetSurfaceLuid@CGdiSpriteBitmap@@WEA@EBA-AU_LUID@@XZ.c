/*
 * XREFs of ?GetSurfaceLuid@CGdiSpriteBitmap@@WEA@EBA?AU_LUID@@XZ @ 0x18009A780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CGdiSpriteBitmap::GetSurfaceLuid(__int64 a1, struct _LUID *a2)
{
  return CGdiSpriteBitmap::GetSurfaceLuid((CGdiSpriteBitmap *)(a1 - 64), a2);
}
