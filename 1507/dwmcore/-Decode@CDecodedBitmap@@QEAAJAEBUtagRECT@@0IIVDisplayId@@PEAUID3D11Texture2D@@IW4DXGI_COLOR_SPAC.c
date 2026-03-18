/*
 * XREFs of ?Decode@CDecodedBitmap@@QEAAJAEBUtagRECT@@0IIVDisplayId@@PEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVIBitmapSource@@@Z @ 0x180153570
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleDecodeBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801523D0 (-GetBitmapShaderResourceViewNoRef@CDxHandleDecodeBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4S.c)
 *     ?GetD2DBitmap@CDxHandleDecodeBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x180152550 (-GetD2DBitmap@CDxHandleDecodeBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?EnsureRenderTargetBitmap@CDecodedBitmap@@IEAAJIIVDisplayId@@_N@Z @ 0x1801536C8 (-EnsureRenderTargetBitmap@CDecodedBitmap@@IEAAJIIVDisplayId@@_N@Z.c)
 */

__int64 __fastcall CDecodedBitmap::Decode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8,
        int a9,
        _QWORD *a10)
{
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // eax
  _BYTE v19[40]; // [rsp+30h] [rbp-88h] BYREF
  int v20; // [rsp+58h] [rbp-60h]

  *a10 = 0LL;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a7 + 80LL))(a7, v19);
  v14 = CDecodedBitmap::EnsureRenderTargetBitmap(a1, a4, a5, a6, (v20 & 0x80000) != 0);
  v15 = v14;
  if ( v14 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 56) != a8 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, __int64, int))(**(_QWORD **)(a1 + 40) + 208LL))(
              *(_QWORD *)(a1 + 40),
              a7,
              a8,
              a2,
              a3,
              a9);
      v15 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x3Eu);
        return v15;
      }
      *(_DWORD *)(a1 + 56) = a8;
    }
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 40) + 176LL))(*(_QWORD *)(a1 + 40), a10);
    v15 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x46u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x36u);
  }
  return v15;
}
