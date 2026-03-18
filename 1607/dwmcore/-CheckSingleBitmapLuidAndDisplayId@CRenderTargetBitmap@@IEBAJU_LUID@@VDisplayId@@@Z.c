/*
 * XREFs of ?CheckSingleBitmapLuidAndDisplayId@CRenderTargetBitmap@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x180131FEC
 * Callers:
 *     ?GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N3PEAPEAUID2D1Bitmap1@@@Z @ 0x1801321E0 (-GetBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNotNeeded@R.c)
 *     ?GetBitmapShaderResourceViewNoRef@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801322D0 (-GetBitmapShaderResourceViewNoRef@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@.c)
 *     ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x1801324E0 (-GetD2DBitmap@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$TMilRect@IUMi.c)
 *     ?GetLegacyBitmapSource@CRenderTargetBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180132630 (-GetLegacyBitmapSource@CRenderTargetBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::CheckSingleBitmapLuidAndDisplayId(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h]
  int v9; // [rsp+50h] [rbp+18h]
  int v10; // [rsp+58h] [rbp+20h] BYREF
  int v11; // [rsp+5Ch] [rbp+24h]

  v9 = a3;
  v8 = a2;
  v3 = *(_QWORD *)(a1 + 128);
  v7 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, int *, int *, _QWORD))(*(_QWORD *)v3 + 104LL))(v3, &v10, &v7, 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x215u);
  }
  else if ( (_DWORD)v8 != v10 || HIDWORD(v8) != v11 || v7 != DisplayId::None && v7 != v9 && v9 != DisplayId::All )
  {
    v5 = -2003304287;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304287, 0x21Au);
  }
  return v5;
}
