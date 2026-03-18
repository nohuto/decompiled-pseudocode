/*
 * XREFs of ?UpdatePixelFormatInfo@CHwStereoFullScreenRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x18014F220
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x18002A9A0 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 */

void __fastcall CHwStereoFullScreenRenderTarget::UpdatePixelFormatInfo(
        CHwStereoFullScreenRenderTarget *this,
        const struct PixelFormatInfo *a2)
{
  CD3DSurface *v4; // rcx
  CD3DSurface *v5; // rcx

  v4 = (CD3DSurface *)*((_QWORD *)this + 48);
  if ( v4 )
    CD3DSurface::UpdatePixelFormatInfo(v4, a2);
  v5 = (CD3DSurface *)*((_QWORD *)this + 49);
  if ( v5 )
    CD3DSurface::UpdatePixelFormatInfo(v5, a2);
}
