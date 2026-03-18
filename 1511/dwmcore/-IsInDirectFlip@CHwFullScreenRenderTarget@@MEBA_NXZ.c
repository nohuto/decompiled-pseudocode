/*
 * XREFs of ?IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x1800743D0
 * Callers:
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x180080740 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHwFullScreenRenderTarget::IsInDirectFlip(CHwFullScreenRenderTarget *this)
{
  return *((_QWORD *)this + 44) != 0LL;
}
