/*
 * XREFs of ?GetFrontBufferIndex@CSwapChainBase@@MEBAIXZ @ 0x180042450
 * Callers:
 *     ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x180043BF0 (-GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwapChainBase::GetFrontBufferIndex(CSwapChainBase *this)
{
  return (unsigned int)(*((_DWORD *)this + 42) - 1);
}
