/*
 * XREFs of ?GetDirtyRects@CHwBitmapColorSource@@AEBA_NPEAPEBUtagRECT@@PEAI1@Z @ 0x1800315D4
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18003166C (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x18014D290 (-CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetDirtyRects@CBitmap@@UEAA_NPEAPEBUtagRECT@@PEAI1@Z @ 0x1800886C0 (-GetDirtyRects@CBitmap@@UEAA_NPEAPEBUtagRECT@@PEAI1@Z.c)
 */

char __fastcall CHwBitmapColorSource::GetDirtyRects(
        CHwBitmapColorSource *this,
        const struct tagRECT **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  char v4; // r10
  __int64 v5; // rbx
  bool (__fastcall *v6)(CBitmap *__hidden, const struct tagRECT **, unsigned int *, unsigned int *); // rdi

  v4 = 0;
  *a4 = *((_DWORD *)this + 42);
  v5 = *((_QWORD *)this + 26);
  if ( v5 )
  {
    v6 = *(bool (__fastcall **)(CBitmap *__hidden, const struct tagRECT **, unsigned int *, unsigned int *))(*(_QWORD *)v5 + 48LL);
    if ( v6 == CBitmap::GetDirtyRects )
      return CBitmap::GetDirtyRects(*((CBitmap **)this + 26), a2, a3, a4);
    else
      return v6(*((CBitmap **)this + 26), a2, a3, a4);
  }
  return v4;
}
