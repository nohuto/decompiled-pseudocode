/*
 * XREFs of ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x18002A9A0
 * Callers:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18002A398 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x18002D478 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?UpdatePixelFormatInfo@CHwFullScreenRenderTarget@@MEAAXAEBUPixelFormatInfo@@@Z @ 0x180074590 (-UpdatePixelFormatInfo@CHwFullScreenRenderTarget@@MEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x18008C6C0 (-UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?UpdatePixelFormatInfo@CHwStereoFullScreenRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x18014F220 (-UpdatePixelFormatInfo@CHwStereoFullScreenRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CD3DSurface::UpdatePixelFormatInfo(CD3DSurface *this, const struct PixelFormatInfo *a2)
{
  int v2; // r8d
  int v4; // r9d
  __int64 v5; // rsi

  v2 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)this + 48);
  *((_DWORD *)this + 48) = v2;
  *((_DWORD *)this + 49) = *((_DWORD *)a2 + 2);
  if ( v4 != v2 )
  {
    v5 = *((_QWORD *)this + 27);
    if ( v5 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 27));
      *((_QWORD *)this + 27) = 0LL;
    }
  }
}
