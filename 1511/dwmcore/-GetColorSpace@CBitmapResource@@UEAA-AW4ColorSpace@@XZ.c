/*
 * XREFs of ?GetColorSpace@CBitmapResource@@UEAA?AW4ColorSpace@@XZ @ 0x18005C440
 * Callers:
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18005A330 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetColorSpace@CBitmap@@UEAA?AW4ColorSpace@@XZ @ 0x180088EC0 (-GetColorSpace@CBitmap@@UEAA-AW4ColorSpace@@XZ.c)
 */

__int64 __fastcall CBitmapResource::GetColorSpace(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 (__fastcall *v3)(_QWORD); // rdi

  v1 = *(_QWORD *)(a1 + 64);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 40LL);
    if ( v3 == CBitmap::GetColorSpace )
      return CBitmap::GetColorSpace(*(_QWORD *)(a1 + 64));
    else
      return v3(*(_QWORD *)(a1 + 64));
  }
  return result;
}
