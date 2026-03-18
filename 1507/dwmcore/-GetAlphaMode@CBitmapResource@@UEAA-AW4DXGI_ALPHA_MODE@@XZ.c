/*
 * XREFs of ?GetAlphaMode@CBitmapResource@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800826C0
 * Callers:
 *     ?IsOpaque@CImageSource@@UEBA_NXZ @ 0x180070DE0 (-IsOpaque@CImageSource@@UEBA_NXZ.c)
 *     ?GetDefaultRealizationFormat@CImageBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x180085AF0 (-GetDefaultRealizationFormat@CImageBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?GetAlphaMode@CBitmap@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180080CF0 (-GetAlphaMode@CBitmap@@UEAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBitmapResource::GetAlphaMode(CBitmapResource *this)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 (__fastcall *v3)(CBitmap *); // rdi

  v1 = *((_QWORD *)this + 8);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(__int64 (__fastcall **)(CBitmap *))(*(_QWORD *)v1 + 32LL);
    if ( v3 == CBitmap::GetAlphaMode )
      return CBitmap::GetAlphaMode(*((CBitmap **)this + 8));
    else
      return v3(*((CBitmap **)this + 8));
  }
  return result;
}
