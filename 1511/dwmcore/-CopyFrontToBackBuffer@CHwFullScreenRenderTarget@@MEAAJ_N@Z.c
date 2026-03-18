/*
 * XREFs of ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@MEAAJ_N@Z @ 0x180074520
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x180074220 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwFullScreenRenderTarget::CopyFrontToBackBuffer(
        CHwFullScreenRenderTarget *this,
        char a2,
        __int64 a3)
{
  LOBYTE(a3) = a2;
  return CHwFullScreenRenderTarget::CopyFrontToBackBufferWorker(this, 0LL, a3);
}
