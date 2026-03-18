/*
 * XREFs of ?GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180142E40
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x18000A5F4 (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180033DD0 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x180142BBC (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180164480 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 */

__int64 __fastcall CHwndBitmap::GetD2DBitmapRealizationForContextOwner(
        CHwndBitmap *this,
        struct ID2DContextOwner *a2,
        struct ID2D1Bitmap1 **a3)
{
  struct CComposition **v3; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  int BitmapSource; // eax
  int v16; // eax
  __int64 v17; // r9
  int D2DBitmapFromBitmapSource; // eax
  _BYTE v20[4]; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+34h] [rbp-3Ch]
  int v22; // [rsp+38h] [rbp-38h]
  __int64 v23; // [rsp+40h] [rbp-30h]
  __int64 v24; // [rsp+48h] [rbp-28h] BYREF
  int v25; // [rsp+50h] [rbp-20h]
  int v26; // [rsp+54h] [rbp-1Ch]
  int v27; // [rsp+58h] [rbp-18h]
  __int64 v28; // [rsp+60h] [rbp-10h]
  char v29; // [rsp+A0h] [rbp+30h] BYREF
  struct IBitmapSource *v30; // [rsp+B0h] [rbp+40h] BYREF

  v30 = 0LL;
  v3 = (struct CComposition **)((char *)this - 144);
  *a3 = 0LL;
  v7 = -2147467259;
  if ( CHwndBitmap::IsValidVisual((CHwndBitmap *)((char *)this - 144)) )
  {
    v25 = 0;
    v8 = CHwndBitmap::EnsureCachedVisualImage(v3);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xDAu);
    }
    else
    {
      v9 = *(_QWORD *)(*(__int64 (__fastcall **)(struct ID2DContextOwner *, char *))(*(_QWORD *)a2 + 40LL))(a2, &v29);
      v10 = *(_QWORD *)a2;
      v24 = v9;
      v11 = *(_DWORD *)(*(__int64 (__fastcall **)(struct ID2DContextOwner *, char *))(v10 + 48))(a2, &v29);
      v12 = *(_QWORD *)a2;
      v25 = v11;
      v13 = (*(__int64 (__fastcall **)(struct ID2DContextOwner *))(v12 + 56))(a2);
      v14 = *((_QWORD *)this + 51);
      v27 = 0;
      v28 = 0LL;
      v26 = v13;
      BitmapSource = CCachedVisualImage::GetBitmapSource(
                       (CCachedVisualImage *)(v14 + 8),
                       &v30,
                       (const struct BitmapSourceInfo *)&v24);
      v7 = BitmapSource;
      if ( BitmapSource < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapSource, 0xE3u);
      }
      else
      {
        if ( !v30 )
          return v7;
        v22 = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v30 + 40LL))(v30);
        v21 = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v30 + 32LL))(v30);
        v16 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _BYTE *))(*(_QWORD *)v30 + 24LL))(v30, v20);
        v7 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xECu);
        }
        else
        {
          v17 = *((_QWORD *)this - 14);
          v23 = 0LL;
          D2DBitmapFromBitmapSource = GetD2DBitmapFromBitmapSource(
                                        v30,
                                        (const struct PixelFormatInfo *)v20,
                                        (const struct BitmapSourceInfo *)&v24,
                                        (const struct _GUID *)(v17 + 252),
                                        a3);
          v7 = D2DBitmapFromBitmapSource;
          if ( D2DBitmapFromBitmapSource < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapFromBitmapSource, 0xF3u);
        }
      }
    }
  }
  if ( v30 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v30 + 16LL))(v30);
  return v7;
}
