/*
 * XREFs of ?UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x18002DAE0
 * Callers:
 *     ?UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x18002D990 (-UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?UpdatePixelFormatInfo@CHwFullScreenRenderTarget@@MEAAXAEBUPixelFormatInfo@@@Z @ 0x18007B8B0 (-UpdatePixelFormatInfo@CHwFullScreenRenderTarget@@MEAAXAEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180079CB0 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 */

void __fastcall CHwSurfaceRenderTarget::UpdatePixelFormatInfo(
        CHwSurfaceRenderTarget *this,
        const struct PixelFormatInfo *a2)
{
  CD3DSurface *v2; // rcx

  v2 = (CD3DSurface *)*((_QWORD *)this + 21);
  if ( v2 )
    CD3DSurface::UpdatePixelFormatInfo(v2, a2);
}
