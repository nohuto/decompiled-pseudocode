/*
 * XREFs of ?SetAlphaMode@CHwDisplayRenderTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18017A720
 * Callers:
 *     ?SetAlphaMode@CHwDisplayRenderTarget@@WLA@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800C1100 (-SetAlphaMode@CHwDisplayRenderTarget@@WLA@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     ?UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@QEAAXPEAVIPixelFormat@@@Z @ 0x18002DA30 (-UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@QEAAXPEAVIPixelFormat@@@Z.c)
 */

void __fastcall CHwDisplayRenderTarget::SetAlphaMode(CHwDisplayRenderTarget *this, enum DXGI_ALPHA_MODE a2)
{
  if ( *((_DWORD *)this + 74) != a2 )
  {
    *((_DWORD *)this + 74) = a2;
    CHwSurfaceRenderTarget::UpdatePixelFormatInfo(this, (CHwDisplayRenderTarget *)((char *)this + 176));
  }
}
