/*
 * XREFs of ?GetAlphaMode@CBitmapResource@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x18005C3E0
 * Callers:
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18005A330 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 *     ?IsOpaque@CImageSource@@UEBA_NXZ @ 0x1800851E0 (-IsOpaque@CImageSource@@UEBA_NXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180088F20 (-GetAlphaMode@CBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 */

enum DXGI_ALPHA_MODE __fastcall CBitmapResource::GetAlphaMode(CBitmapResource *this)
{
  __int64 v1; // rbx
  enum DXGI_ALPHA_MODE result; // eax
  enum DXGI_ALPHA_MODE (__fastcall *v3)(CBitmap *__hidden); // rdi

  v1 = *((_QWORD *)this + 8);
  result = DXGI_ALPHA_MODE_UNSPECIFIED;
  if ( v1 )
  {
    v3 = *(enum DXGI_ALPHA_MODE (__fastcall **)(CBitmap *__hidden))(*(_QWORD *)v1 + 32LL);
    if ( v3 == CBitmap::GetAlphaMode )
      return CBitmap::GetAlphaMode(*((CBitmap **)this + 8));
    else
      return v3(*((CBitmap **)this + 8));
  }
  return result;
}
