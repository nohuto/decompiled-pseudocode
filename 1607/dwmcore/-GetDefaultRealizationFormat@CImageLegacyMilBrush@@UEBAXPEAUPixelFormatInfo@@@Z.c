/*
 * XREFs of ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x180032930
 * Callers:
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x18002ECB0 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PE.c)
 * Callees:
 *     ?GetAlphaMode@CCachedVisualImage@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18001B770 (-GetAlphaMode@CCachedVisualImage@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18001B920 (-GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18002EE30 (-GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 *     ?GetColorSpace@CCachedVisualImage@@UEAA?AW4ColorSpace@@XZ @ 0x180032EC0 (-GetColorSpace@CCachedVisualImage@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetPixelFormat@CBitmapResource@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800AE910 (-GetPixelFormat@CBitmapResource@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetAlphaMode@CBitmapResource@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800AE960 (-GetAlphaMode@CBitmapResource@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetColorSpace@CBitmapResource@@UEAA?AW4ColorSpace@@XZ @ 0x1800AE9A0 (-GetColorSpace@CBitmapResource@@UEAA-AW4ColorSpace@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImageLegacyMilBrush::GetDefaultRealizationFormat(CImageLegacyMilBrush *this, enum DXGI_FORMAT *a2)
{
  CBitmapResource *v4; // rcx
  __int64 (__fastcall *v5)(CComposition **, enum DXGI_FORMAT *); // rax
  int PixelFormat; // eax
  CCachedVisualImage *v7; // rcx
  __int64 (*v8)(void); // rax
  enum DXGI_ALPHA_MODE AlphaMode; // eax
  __int64 (*v10)(void); // rax
  int ColorSpace; // eax

  v4 = (CBitmapResource *)*((_QWORD *)this + 74);
  if ( v4
    && ((v5 = *(__int64 (__fastcall **)(CComposition **, enum DXGI_FORMAT *))(*(_QWORD *)v4 + 24LL),
         v5 != CCachedVisualImage::GetPixelFormat)
      ? ((char *)v5 != (char *)CBitmapResource::GetPixelFormat
       ? (PixelFormat = v5((CComposition **)v4, a2))
       : (PixelFormat = CBitmapResource::GetPixelFormat(v4, a2)))
      : (PixelFormat = CCachedVisualImage::GetPixelFormat((CComposition **)v4, a2)),
        PixelFormat >= 0) )
  {
    v7 = (CCachedVisualImage *)*((_QWORD *)this + 74);
    v8 = *(__int64 (**)(void))(*(_QWORD *)v7 + 32LL);
    if ( (char *)v8 == (char *)CCachedVisualImage::GetAlphaMode )
    {
      AlphaMode = (unsigned int)CCachedVisualImage::GetAlphaMode(v7);
    }
    else if ( (char *)v8 == (char *)CBitmapResource::GetAlphaMode )
    {
      AlphaMode = CBitmapResource::GetAlphaMode(v7);
    }
    else
    {
      AlphaMode = (unsigned int)v8();
    }
    *((_DWORD *)a2 + 1) = AlphaMode;
    v10 = *(__int64 (**)(void))(**((_QWORD **)this + 74) + 40LL);
    if ( v10 == CCachedVisualImage::GetColorSpace )
    {
      ColorSpace = CCachedVisualImage::GetColorSpace();
    }
    else if ( v10 == CBitmapResource::GetColorSpace )
    {
      ColorSpace = CBitmapResource::GetColorSpace();
    }
    else
    {
      ColorSpace = v10();
    }
    *((_QWORD *)a2 + 2) = 0LL;
    *((_DWORD *)a2 + 2) = ColorSpace;
  }
  else
  {
    CLegacyMilBrush::GetDefaultRealizationFormat(this, (struct PixelFormatInfo *)a2);
  }
}
