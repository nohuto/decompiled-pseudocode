/*
 * XREFs of ?GetBorderColor@CGdiSpriteBitmap@@WEA@EBA?AU_D3DCOLORVALUE@@XZ @ 0x18009A6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CGdiSpriteBitmap::GetBorderColor(__int64 a1, struct _D3DCOLORVALUE *a2)
{
  return CGdiSpriteBitmap::GetBorderColor((CGdiSpriteBitmap *)(a1 - 64), a2);
}
