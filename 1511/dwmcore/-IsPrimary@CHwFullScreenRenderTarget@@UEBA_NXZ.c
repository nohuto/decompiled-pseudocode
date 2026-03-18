/*
 * XREFs of ?IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ @ 0x180073FC0
 * Callers:
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x180080740 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHwFullScreenRenderTarget::IsPrimary(CDisplay **this)
{
  return CDisplay::IsPrimary(this[2]);
}
