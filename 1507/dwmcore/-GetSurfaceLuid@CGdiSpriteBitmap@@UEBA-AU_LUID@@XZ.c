/*
 * XREFs of ?GetSurfaceLuid@CGdiSpriteBitmap@@UEBA?AU_LUID@@XZ @ 0x18009A5C0
 * Callers:
 *     ?GetSurfaceLuid@CGdiSpriteBitmap@@WEA@EBA?AU_LUID@@XZ @ 0x18009A780 (-GetSurfaceLuid@CGdiSpriteBitmap@@WEA@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CGdiSpriteBitmap::GetSurfaceLuid(CGdiSpriteBitmap *this, struct _LUID *a2)
{
  *a2 = g_luidZero;
  return (struct _LUID)a2;
}
