/*
 * XREFs of ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18005A330
 * Callers:
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x18005D460 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAULegacyMilBrushContext@@PEBUCContextState@@PE.c)
 * Callees:
 *     ?GetAlphaMode@CCachedVisualImage@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18000B2B0 (-GetAlphaMode@CCachedVisualImage@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18000B3B0 (-GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetColorSpace@CCachedVisualImage@@UEAA?AW4ColorSpace@@XZ @ 0x18005AB80 (-GetColorSpace@CCachedVisualImage@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetPixelFormat@CBitmapResource@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18005C370 (-GetPixelFormat@CBitmapResource@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetAlphaMode@CBitmapResource@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18005C3E0 (-GetAlphaMode@CBitmapResource@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetColorSpace@CBitmapResource@@UEAA?AW4ColorSpace@@XZ @ 0x18005C440 (-GetColorSpace@CBitmapResource@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18005D5E0 (-GetDefaultRealizationFormat@CLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 */

void __fastcall CImageLegacyMilBrush::GetDefaultRealizationFormat(
        CImageLegacyMilBrush *this,
        struct PixelFormatInfo *a2)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v5)(CCachedVisualImage *, enum DXGI_FORMAT *); // rsi
  int PixelFormat; // eax
  CCachedVisualImage *v7; // rdi
  enum DXGI_ALPHA_MODE (__fastcall *v8)(CCachedVisualImage *); // rsi
  enum DXGI_ALPHA_MODE AlphaMode; // eax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(_QWORD); // rsi
  int ColorSpace; // eax

  v2 = *((_QWORD *)this + 64);
  if ( v2
    && ((v5 = *(__int64 (__fastcall **)(CCachedVisualImage *, enum DXGI_FORMAT *))(*(_QWORD *)v2 + 24LL),
         v5 != CCachedVisualImage::GetPixelFormat)
      ? (v5 != CBitmapResource::GetPixelFormat
       ? (PixelFormat = v5(*((CCachedVisualImage **)this + 64), (enum DXGI_FORMAT *)a2))
       : (PixelFormat = CBitmapResource::GetPixelFormat(*((CBitmapResource **)this + 64), (enum DXGI_FORMAT *)a2)))
      : (PixelFormat = CCachedVisualImage::GetPixelFormat(*((CCachedVisualImage **)this + 64), (enum DXGI_FORMAT *)a2)),
        PixelFormat >= 0) )
  {
    v7 = (CCachedVisualImage *)*((_QWORD *)this + 64);
    v8 = *(enum DXGI_ALPHA_MODE (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v7 + 32LL);
    if ( v8 == CCachedVisualImage::GetAlphaMode )
    {
      AlphaMode = CCachedVisualImage::GetAlphaMode(v7);
    }
    else if ( v8 == CBitmapResource::GetAlphaMode )
    {
      AlphaMode = CBitmapResource::GetAlphaMode(v7);
    }
    else
    {
      AlphaMode = v8(*((CCachedVisualImage **)this + 64));
    }
    *((_DWORD *)a2 + 1) = AlphaMode;
    v10 = *((_QWORD *)this + 64);
    v11 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 40LL);
    if ( v11 == CCachedVisualImage::GetColorSpace )
    {
      ColorSpace = CCachedVisualImage::GetColorSpace(v10);
    }
    else if ( v11 == CBitmapResource::GetColorSpace )
    {
      ColorSpace = CBitmapResource::GetColorSpace(v10);
    }
    else
    {
      ColorSpace = v11(*((_QWORD *)this + 64));
    }
    *((_QWORD *)a2 + 2) = 0LL;
    *((_DWORD *)a2 + 2) = ColorSpace;
  }
  else
  {
    CLegacyMilBrush::GetDefaultRealizationFormat(this, a2);
  }
}
