/*
 * XREFs of ?GetColorSpace@CBitmapResource@@UEAA?AW4ColorSpace@@XZ @ 0x180082710
 * Callers:
 *     ?GetDefaultRealizationFormat@CImageBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x180085AF0 (-GetDefaultRealizationFormat@CImageBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?GetColorSpace@CBitmap@@UEAA?AW4ColorSpace@@XZ @ 0x180080C90 (-GetColorSpace@CBitmap@@UEAA-AW4ColorSpace@@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBitmapResource::GetColorSpace(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 (__fastcall *v3)(__int64); // rdi

  v1 = *(_QWORD *)(a1 + 64);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL);
    if ( v3 == CBitmap::GetColorSpace )
      return CBitmap::GetColorSpace(*(_QWORD *)(a1 + 64));
    else
      return v3(*(_QWORD *)(a1 + 64));
  }
  return result;
}
