/*
 * XREFs of ?GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180126620
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x18000F604 (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18005B850 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180070F30 (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x18012634C (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 */

__int64 __fastcall CHwndBitmap::GetD2DBitmapRealizationForContextOwner(
        struct CComposition **this,
        struct ID2DContextOwner *a2,
        struct ID2D1Bitmap1 **a3)
{
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rax
  int v12; // eax
  struct CComposition *v13; // rcx
  int BitmapSource; // eax
  int v15; // eax
  __int64 v16; // r9
  int D2DBitmapFromBitmapSource; // eax
  _BYTE v19[4]; // [rsp+30h] [rbp-40h] BYREF
  int v20; // [rsp+34h] [rbp-3Ch]
  int v21; // [rsp+38h] [rbp-38h]
  __int64 v22; // [rsp+40h] [rbp-30h]
  __int64 v23; // [rsp+48h] [rbp-28h] BYREF
  int v24; // [rsp+50h] [rbp-20h]
  int v25; // [rsp+54h] [rbp-1Ch]
  int v26; // [rsp+58h] [rbp-18h]
  __int64 v27; // [rsp+60h] [rbp-10h]
  char v28; // [rsp+A0h] [rbp+30h] BYREF
  struct IBitmapSource *v29; // [rsp+B0h] [rbp+40h] BYREF

  v29 = 0LL;
  *a3 = 0LL;
  v6 = -2147467259;
  if ( CHwndBitmap::IsValidVisual((CHwndBitmap *)(this - 9)) )
  {
    v24 = 0;
    v7 = CHwndBitmap::EnsureCachedVisualImage(this - 9);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v8 = *(_QWORD *)(*(__int64 (__fastcall **)(struct ID2DContextOwner *, char *))(*(_QWORD *)a2 + 40LL))(a2, &v28);
      v9 = *(_QWORD *)a2;
      v23 = v8;
      v10 = *(_DWORD *)(*(__int64 (__fastcall **)(struct ID2DContextOwner *, char *))(v9 + 48))(a2, &v28);
      v11 = *(_QWORD *)a2;
      v24 = v10;
      v12 = (*(__int64 (__fastcall **)(struct ID2DContextOwner *))(v11 + 56))(a2);
      v13 = this[50];
      v26 = 0;
      v27 = 0LL;
      v25 = v12;
      BitmapSource = CCachedVisualImage::GetBitmapSource(
                       (struct CComposition *)((char *)v13 + 8),
                       &v29,
                       (const struct BitmapSourceInfo *)&v23);
      v6 = BitmapSource;
      if ( BitmapSource >= 0 )
      {
        if ( !v29 )
          return v6;
        v21 = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v29 + 40LL))(v29);
        v20 = (*(__int64 (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v29 + 32LL))(v29);
        v15 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _BYTE *))(*(_QWORD *)v29 + 24LL))(v29, v19);
        v6 = v15;
        if ( v15 >= 0 )
        {
          v16 = (__int64)*(this - 5);
          v22 = 0LL;
          D2DBitmapFromBitmapSource = GetD2DBitmapFromBitmapSource(
                                        v29,
                                        (const struct PixelFormatInfo *)v19,
                                        (const struct BitmapSourceInfo *)&v23,
                                        (const struct _GUID *)(v16 + 252),
                                        a3);
          v6 = D2DBitmapFromBitmapSource;
          if ( D2DBitmapFromBitmapSource < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapFromBitmapSource, 0xF3u);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xECu);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapSource, 0xE3u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xDAu);
    }
  }
  if ( v29 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v29 + 16LL))(v29);
  return v6;
}
