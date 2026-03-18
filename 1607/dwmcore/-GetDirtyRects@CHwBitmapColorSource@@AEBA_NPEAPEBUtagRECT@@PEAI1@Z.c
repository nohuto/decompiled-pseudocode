/*
 * XREFs of ?GetDirtyRects@CHwBitmapColorSource@@AEBA_NPEAPEBUtagRECT@@PEAI1@Z @ 0x1800824B4
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x180082504 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x18017E274 (-CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 * Callees:
 *     ?GetDirtyRects@CBitmap@@UEAA_NPEAPEBUtagRECT@@PEAI1@Z @ 0x1800849C0 (-GetDirtyRects@CBitmap@@UEAA_NPEAPEBUtagRECT@@PEAI1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwBitmapColorSource::GetDirtyRects(
        CHwBitmapColorSource *this,
        const struct tagRECT **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  char v4; // r10
  CBitmap *v5; // rcx
  bool (__fastcall *v6)(CBitmap *__hidden, const struct tagRECT **, unsigned int *, unsigned int *); // rax

  v4 = 0;
  *a4 = *((_DWORD *)this + 42);
  v5 = (CBitmap *)*((_QWORD *)this + 26);
  if ( v5 )
  {
    v6 = *(bool (__fastcall **)(CBitmap *__hidden, const struct tagRECT **, unsigned int *, unsigned int *))(*(_QWORD *)v5 + 48LL);
    if ( v6 == CBitmap::GetDirtyRects )
      return CBitmap::GetDirtyRects(v5, a2, a3, a4);
    else
      return ((__int64 (__fastcall *)(CBitmap *, const struct tagRECT **, unsigned int *))v6)(v5, a2, a3);
  }
  return v4;
}
