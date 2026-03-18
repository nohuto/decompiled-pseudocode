/*
 * XREFs of ?IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ @ 0x1800431F0
 * Callers:
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x180044B70 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwFullScreenRenderTarget::IsPrimary(CDisplay **this)
{
  return CDisplay::IsPrimary(this[2]);
}
