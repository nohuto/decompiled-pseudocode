/*
 * XREFs of ?GetBitmapShaderResourceViewNoRef@CDxHandleDecodeBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18015F8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180139028 (-GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PE.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ @ 0x18015F6E0 (-EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ.c)
 *     ?Decode@CDecodedBitmap@@QEAAJAEBUtagRECT@@0IIVDisplayId@@PEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVIBitmapSource@@@Z @ 0x18016041C (-Decode@CDecodedBitmap@@QEAAJAEBUtagRECT@@0IIVDisplayId@@PEAUID3D11Texture2D@@IW4DXGI_COLOR_SPAC.c)
 */

__int64 __fastcall CDxHandleDecodeBitmapRealization::GetBitmapShaderResourceViewNoRef(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        struct ID3D11ShaderResourceView **a5)
{
  struct ID3D11ShaderResourceView **v5; // rsi
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int BitmapShaderResourceViewFromBitmapSourceNoRef; // eax
  _DWORD v13[4]; // [rsp+50h] [rbp-1h] BYREF
  __int64 v14; // [rsp+60h] [rbp+Fh]
  __int64 v15; // [rsp+68h] [rbp+17h] BYREF
  int v16; // [rsp+70h] [rbp+1Fh]
  int v17; // [rsp+74h] [rbp+23h]
  int v18; // [rsp+78h] [rbp+27h]
  __int64 v19; // [rsp+80h] [rbp+2Fh]
  struct IBitmapSource *v20; // [rsp+B0h] [rbp+5Fh] BYREF
  int v21; // [rsp+C0h] [rbp+6Fh]

  v21 = a3;
  v5 = a5;
  v20 = 0LL;
  v7 = -2003304287;
  *a5 = 0LL;
  v8 = *(_DWORD *)(a1 + 352);
  if ( v8 == DisplayId::None || v8 == a3 || a3 == DisplayId::All )
  {
    v14 = 0LL;
    v19 = 0LL;
    v13[2] = 1;
    v18 = 1;
    v13[0] = 87;
    v13[1] = 3;
    v15 = a2;
    v16 = a3;
    v17 = a4;
    v9 = CDxHandleDecodeBitmapRealization::EnsureVidMemOnlyTexture((CDxHandleDecodeBitmapRealization *)(a1 - 112));
    v7 = v9;
    if ( v9 >= 0 )
    {
      v10 = CDecodedBitmap::Decode(
              *(_QWORD *)(a1 + 360),
              a1 + 368,
              a1 + 384,
              *(unsigned int *)(a1 + 400),
              *(_DWORD *)(a1 + 404),
              v21,
              *(_QWORD *)(*(_QWORD *)(a1 + 344) + 128LL),
              *(_DWORD *)(a1 + 212),
              *(_DWORD *)(a1 + 132),
              &v20);
      v7 = v10;
      if ( v10 >= 0 )
      {
        BitmapShaderResourceViewFromBitmapSourceNoRef = GetBitmapShaderResourceViewFromBitmapSourceNoRef(
                                                          v20,
                                                          (const struct PixelFormatInfo *)v13,
                                                          (const struct BitmapSourceInfo *)&v15,
                                                          (const struct _GUID *)(a1 - 80),
                                                          v5);
        v7 = BitmapShaderResourceViewFromBitmapSourceNoRef;
        if ( BitmapShaderResourceViewFromBitmapSourceNoRef < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapShaderResourceViewFromBitmapSourceNoRef, 0xB1u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xA9u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x9Du);
    }
    if ( v20 )
      (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return v7;
}
