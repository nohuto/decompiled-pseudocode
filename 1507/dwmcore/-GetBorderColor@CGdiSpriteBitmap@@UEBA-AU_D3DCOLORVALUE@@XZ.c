/*
 * XREFs of ?GetBorderColor@CGdiSpriteBitmap@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x18009A6D0
 * Callers:
 *     ?GetBorderColor@CGdiSpriteBitmap@@WEA@EBA?AU_D3DCOLORVALUE@@XZ @ 0x18009A6E0 (-GetBorderColor@CGdiSpriteBitmap@@WEA@EBA-AU_D3DCOLORVALUE@@XZ.c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CGdiSpriteBitmap::GetBorderColor(
        CGdiSpriteBitmap *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  struct _D3DCOLORVALUE *result; // rax

  result = retstr;
  *(_OWORD *)&retstr->r = `CImageSource::GetBorderColor'::`2'::sc_colorTransparentBlack;
  return result;
}
