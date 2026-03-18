/*
 * XREFs of ?GetColorSpace@CBitmapResource@@UEAA?AW4ColorSpace@@XZ @ 0x1800AE9A0
 * Callers:
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x180032930 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?GetColorSpace@CBitmap@@UEAA?AW4ColorSpace@@XZ @ 0x180085130 (-GetColorSpace@CBitmap@@UEAA-AW4ColorSpace@@XZ.c)
 */

__int64 __fastcall CBitmapResource::GetColorSpace(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 (*v3)(void); // rax

  v1 = *(_QWORD *)(a1 + 136);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(__int64 (**)(void))(*(_QWORD *)v1 + 40LL);
    if ( (char *)v3 == (char *)CBitmap::GetColorSpace )
      return CBitmap::GetColorSpace(v1);
    else
      return v3();
  }
  return result;
}
