/*
 * XREFs of ?GetD2DBitmap@CDxHandleDecodeBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x180152550
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18012520C (-GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ @ 0x180152210 (-EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ.c)
 *     ?Decode@CDecodedBitmap@@QEAAJAEBUtagRECT@@0IIVDisplayId@@PEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVIBitmapSource@@@Z @ 0x180153570 (-Decode@CDecodedBitmap@@QEAAJAEBUtagRECT@@0IIVDisplayId@@PEAUID3D11Texture2D@@IW4DXGI_COLOR_SPAC.c)
 */

__int64 __fastcall CDxHandleDecodeBitmapRealization::GetD2DBitmap(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        struct ID2D1Bitmap1 **a8)
{
  struct ID2D1Bitmap1 **v8; // rsi
  unsigned int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int D2DBitmapFromBitmapSource; // eax
  _DWORD v16[4]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v17; // [rsp+60h] [rbp-9h]
  __int64 v18; // [rsp+68h] [rbp-1h] BYREF
  int v19; // [rsp+70h] [rbp+7h]
  int v20; // [rsp+74h] [rbp+Bh]
  int v21; // [rsp+78h] [rbp+Fh]
  __int64 v22; // [rsp+80h] [rbp+17h]
  struct IBitmapSource *v23; // [rsp+B0h] [rbp+47h] BYREF
  int v24; // [rsp+C0h] [rbp+57h]

  v24 = a3;
  v8 = a8;
  v23 = 0LL;
  v10 = -2003304287;
  *a8 = 0LL;
  v11 = *(_DWORD *)(a1 + 352);
  if ( v11 == DisplayId::None || v11 == a3 || a3 == DisplayId::All )
  {
    v17 = 0LL;
    v22 = 0LL;
    v16[2] = 1;
    v21 = 1;
    v16[0] = 87;
    v16[1] = 3;
    v18 = a2;
    v19 = a3;
    v20 = a4;
    v12 = CDxHandleDecodeBitmapRealization::EnsureVidMemOnlyTexture((CDxHandleDecodeBitmapRealization *)(a1 - 112));
    v10 = v12;
    if ( v12 >= 0 )
    {
      v13 = CDecodedBitmap::Decode(
              *(_QWORD *)(a1 + 360),
              a1 + 368,
              a1 + 384,
              *(unsigned int *)(a1 + 400),
              *(_DWORD *)(a1 + 404),
              v24,
              *(_QWORD *)(*(_QWORD *)(a1 + 344) + 128LL),
              *(_DWORD *)(a1 + 212),
              *(_DWORD *)(a1 + 132),
              &v23);
      v10 = v13;
      if ( v13 >= 0 )
      {
        D2DBitmapFromBitmapSource = GetD2DBitmapFromBitmapSource(
                                      v23,
                                      (const struct PixelFormatInfo *)v16,
                                      (const struct BitmapSourceInfo *)&v18,
                                      (const struct _GUID *)(a1 - 80),
                                      v8);
        v10 = D2DBitmapFromBitmapSource;
        if ( D2DBitmapFromBitmapSource < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapFromBitmapSource, 0x70u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x6Au);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x60u);
    }
    if ( v23 )
      (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return v10;
}
