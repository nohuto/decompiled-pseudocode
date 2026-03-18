/*
 * XREFs of ?GetAlphaMode@CBitmapResource@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800AE960
 * Callers:
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x180032930 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 *     ?IsOpaque@CImageSource@@UEBA_NXZ @ 0x18008E730 (-IsOpaque@CImageSource@@UEBA_NXZ.c)
 * Callees:
 *     ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180085190 (-GetAlphaMode@CBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 */

__int64 __fastcall CBitmapResource::GetAlphaMode(CBitmapResource *this)
{
  CBitmap *v1; // rcx
  __int64 result; // rax
  __int64 (*v3)(void); // rax

  v1 = (CBitmap *)*((_QWORD *)this + 17);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(__int64 (**)(void))(*(_QWORD *)v1 + 32LL);
    if ( (char *)v3 == (char *)CBitmap::GetAlphaMode )
      return CBitmap::GetAlphaMode(v1);
    else
      return v3();
  }
  return result;
}
