/*
 * XREFs of ?GetBitmapRect@CSecondaryBitmap@@IEBAXPEAUMilRectU@@@Z @ 0x180018E1C
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180012180 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 *     ?IsValid@CSecondaryBitmap@@UEAA_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180018E90 (-IsValid@CSecondaryBitmap@@UEAA_NPEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@.c)
 *     ?MarkFullInvalid@CSecondaryBitmap@@UEAAXXZ @ 0x180018F90 (-MarkFullInvalid@CSecondaryBitmap@@UEAAXXZ.c)
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x180018FF0 (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CSecondaryBitmap::GetBitmapRect(CSecondaryBitmap *this, struct MilRectU *a2)
{
  int v3; // eax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  v5 = 0;
  (*(void (__fastcall **)(CSecondaryBitmap *, int *, int *))(*(_QWORD *)this + 24LL))(this, &v4, &v5);
  v3 = v4;
  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  *((_DWORD *)a2 + 2) = v3;
  *((_DWORD *)a2 + 3) = v5;
}
