/*
 * XREFs of ?IsInDirectFlip@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x18007B350
 * Callers:
 *     ?CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z @ 0x18007B468 (-CopyFrontToBackBufferWorker@CHwFullScreenRenderTarget@@IEAAJW4StereoContext@@_N@Z.c)
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x18008EE50 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHwFullScreenRenderTarget::IsInDirectFlip(CHwFullScreenRenderTarget *this)
{
  return *((_QWORD *)this + 46) != 0LL;
}
