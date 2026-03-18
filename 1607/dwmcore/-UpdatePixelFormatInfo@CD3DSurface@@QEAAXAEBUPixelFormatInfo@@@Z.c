/*
 * XREFs of ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180079CB0
 * Callers:
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180016828 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x18002DAE0 (-UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?UpdatePixelFormatInfo@CHwFullScreenRenderTarget@@MEAAXAEBUPixelFormatInfo@@@Z @ 0x18007B8B0 (-UpdatePixelFormatInfo@CHwFullScreenRenderTarget@@MEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180080EEC (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?UpdatePixelFormatInfo@CHwStereoFullScreenRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x18017FBC0 (-UpdatePixelFormatInfo@CHwStereoFullScreenRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DSurface::UpdatePixelFormatInfo(CD3DSurface *this, const struct PixelFormatInfo *a2)
{
  int v2; // r8d
  int v4; // r9d
  __int64 v5; // rcx

  v2 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)this + 48);
  *((_DWORD *)this + 48) = v2;
  *((_DWORD *)this + 49) = *((_DWORD *)a2 + 2);
  if ( v4 != v2 )
  {
    v5 = *((_QWORD *)this + 27);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      *((_QWORD *)this + 27) = 0LL;
    }
  }
}
