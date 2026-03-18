/*
 * XREFs of ?SetAlphaMode@CHwDisplayRenderTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x180139510
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@QEAAXPEAVIPixelFormat@@@Z @ 0x180081824 (-UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@QEAAXPEAVIPixelFormat@@@Z.c)
 */

void __fastcall CHwDisplayRenderTarget::SetAlphaMode(unsigned __int64 this, enum DXGI_ALPHA_MODE a2)
{
  if ( *(_DWORD *)(this + 112) != a2 )
  {
    *(_DWORD *)(this + 112) = a2;
    CHwSurfaceRenderTarget::UpdatePixelFormatInfo(
      (CHwSurfaceRenderTarget *)(this - 176),
      (struct IPixelFormat *)(this & ((unsigned __int128)-(__int128)(this - 176) >> 64)));
  }
}
