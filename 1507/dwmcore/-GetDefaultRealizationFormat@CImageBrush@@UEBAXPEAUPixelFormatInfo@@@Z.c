/*
 * XREFs of ?GetDefaultRealizationFormat@CImageBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x180085AF0
 * Callers:
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAUBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x180083520 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAUBrushContext@@PEBUCContextState@@PEBUPixelFo.c)
 * Callees:
 *     ?GetPixelFormat@CBitmapResource@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180082660 (-GetPixelFormat@CBitmapResource@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetAlphaMode@CBitmapResource@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800826C0 (-GetAlphaMode@CBitmapResource@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?GetColorSpace@CBitmapResource@@UEAA?AW4ColorSpace@@XZ @ 0x180082710 (-GetColorSpace@CBitmapResource@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?GetDefaultRealizationFormat@CBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x180083690 (-GetDefaultRealizationFormat@CBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CImageBrush::GetDefaultRealizationFormat(CImageBrush *this, struct PixelFormatInfo *a2)
{
  __int64 v2; // rsi
  __int64 (__fastcall *v5)(CBitmapResource *, enum DXGI_FORMAT *); // rbp
  int PixelFormat; // eax
  __int64 (__fastcall *v7)(CBitmapResource *); // rbp
  int AlphaMode; // eax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64); // rsi
  int ColorSpace; // eax

  v2 = *((_QWORD *)this + 64);
  if ( v2
    && ((v5 = *(__int64 (__fastcall **)(CBitmapResource *, enum DXGI_FORMAT *))(*(_QWORD *)v2 + 24LL),
         v5 != CBitmapResource::GetPixelFormat)
      ? (PixelFormat = v5(*((CBitmapResource **)this + 64), (enum DXGI_FORMAT *)a2))
      : (PixelFormat = CBitmapResource::GetPixelFormat(*((CBitmapResource **)this + 64), (enum DXGI_FORMAT *)a2)),
        PixelFormat >= 0) )
  {
    v7 = *(__int64 (__fastcall **)(CBitmapResource *))(**((_QWORD **)this + 64) + 32LL);
    if ( v7 == CBitmapResource::GetAlphaMode )
      AlphaMode = CBitmapResource::GetAlphaMode(*((CBitmapResource **)this + 64));
    else
      AlphaMode = v7(*((CBitmapResource **)this + 64));
    *((_DWORD *)a2 + 1) = AlphaMode;
    v9 = *((_QWORD *)this + 64);
    v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL);
    if ( v10 == CBitmapResource::GetColorSpace )
      ColorSpace = CBitmapResource::GetColorSpace(v9);
    else
      ColorSpace = v10(v9);
    *((_QWORD *)a2 + 2) = 0LL;
    *((_DWORD *)a2 + 2) = ColorSpace;
  }
  else
  {
    CBrush::GetDefaultRealizationFormat(this, a2);
  }
}
