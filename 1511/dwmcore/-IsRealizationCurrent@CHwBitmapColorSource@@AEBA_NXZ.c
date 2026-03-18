/*
 * XREFs of ?IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ @ 0x180031ECC
 * Callers:
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x180030FA0 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18003166C (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ @ 0x1800FA7AC (-IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetUniquenessToken@CBitmap@@UEAAJPEAI@Z @ 0x180088720 (-GetUniquenessToken@CBitmap@@UEAAJPEAI@Z.c)
 */

char __fastcall CHwBitmapColorSource::IsRealizationCurrent(CHwBitmapColorSource *this)
{
  CBitmap *v1; // rdi
  char v2; // bl
  __int64 (__fastcall *v4)(CBitmap *__hidden, unsigned int *); // rbp
  int v5; // eax
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CBitmap *)*((_QWORD *)this + 26);
  v2 = 0;
  if ( !v1 )
    return 1;
  v4 = *(__int64 (__fastcall **)(CBitmap *__hidden, unsigned int *))(*(_QWORD *)v1 + 40LL);
  v5 = v4 == CBitmap::GetUniquenessToken ? CBitmap::GetUniquenessToken(v1, &v7) : v4(v1, &v7);
  if ( v5 >= 0 && *((_DWORD *)this + 42) == v7 )
    return 1;
  return v2;
}
