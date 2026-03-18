/*
 * XREFs of ?IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ @ 0x180082D08
 * Callers:
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x180081F30 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x180082504 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ @ 0x18010F4B8 (-IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ.c)
 * Callees:
 *     ?GetUniquenessToken@CBitmap@@UEAAJPEAI@Z @ 0x180084A20 (-GetUniquenessToken@CBitmap@@UEAAJPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwBitmapColorSource::IsRealizationCurrent(CHwBitmapColorSource *this)
{
  char v2; // bl
  CBitmap *v3; // rcx
  __int64 (__fastcall *v4)(CBitmap *__hidden, unsigned int *); // rax
  int v5; // eax
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (CBitmap *)*((_QWORD *)this + 26);
  if ( !v3 )
    return 1;
  v4 = *(__int64 (__fastcall **)(CBitmap *__hidden, unsigned int *))(*(_QWORD *)v3 + 40LL);
  v5 = v4 == CBitmap::GetUniquenessToken ? CBitmap::GetUniquenessToken(v3, &v7) : v4(v3, &v7);
  if ( v5 >= 0 && *((_DWORD *)this + 42) == v7 )
    return 1;
  return v2;
}
