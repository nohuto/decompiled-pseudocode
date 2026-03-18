/*
 * XREFs of ?Decode@CDecodedBitmap@@QEAAJAEBUtagRECT@@0IIVDisplayId@@PEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVIBitmapSource@@@Z @ 0x18016041C
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleDecodeBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18015F8A0 (-GetBitmapShaderResourceViewNoRef@CDxHandleDecodeBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4S.c)
 *     ?GetD2DBitmap@CDxHandleDecodeBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x18015FA20 (-GetD2DBitmap@CDxHandleDecodeBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?EnsureRenderTargetBitmap@CDecodedBitmap@@IEAAJIIIIVDisplayId@@_N@Z @ 0x180160594 (-EnsureRenderTargetBitmap@CDecodedBitmap@@IEAAJIIIIVDisplayId@@_N@Z.c)
 */

__int64 __fastcall CDecodedBitmap::Decode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        int a9,
        _QWORD *a10)
{
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // eax
  _DWORD v19[12]; // [rsp+40h] [rbp-88h] BYREF

  *a10 = 0LL;
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a7 + 80LL))(a7, v19);
  v14 = CDecodedBitmap::EnsureRenderTargetBitmap(a1, v19[0], v19[1], a4, a5, a6, (v19[10] & 0x80000) != 0);
  v15 = v14;
  if ( v14 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 56) != a8 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, __int64, __int64, int))(**(_QWORD **)(a1 + 40) + 208LL))(
              *(_QWORD *)(a1 + 40),
              *(_QWORD *)(a1 + 72),
              *(_QWORD *)(a1 + 80),
              a7,
              a8,
              a2,
              a3,
              a9);
      v15 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x40u);
        return v15;
      }
      *(_DWORD *)(a1 + 56) = a8;
    }
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 40) + 176LL))(*(_QWORD *)(a1 + 40), a10);
    v15 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x49u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x36u);
  }
  return v15;
}
