/*
 * XREFs of ?NeedsConfirmUpdateId@CGdiSpriteBitmap@@UEAA_NXZ @ 0x18002AE30
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180027F90 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::NeedsConfirmUpdateId(CGdiSpriteBitmap *this)
{
  return (*((_BYTE *)this + 372) & 0x10) != 0;
}
