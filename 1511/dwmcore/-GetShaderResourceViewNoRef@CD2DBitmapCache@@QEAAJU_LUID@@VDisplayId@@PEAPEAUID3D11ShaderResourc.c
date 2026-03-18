/*
 * XREFs of ?GetShaderResourceViewNoRef@CD2DBitmapCache@@QEAAJU_LUID@@VDisplayId@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800F9F2C
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CSectionBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18015C5F0 (-GetBitmapShaderResourceViewNoRef@CSectionBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoCo.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x18003032C (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@PEBV-$TMilRect@IUMilRectU@@UNo.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DBitmapCache::GetShaderResourceViewNoRef(
        CD2DBitmapCache *a1,
        struct _LUID a2,
        int a3,
        _QWORD *a4)
{
  int BitmapInternalNoRef; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v9 = 0LL;
  BitmapInternalNoRef = CD2DBitmapCache::GetBitmapInternalNoRef(a1, a2, a3, 0LL, &v9);
  v6 = BitmapInternalNoRef;
  if ( BitmapInternalNoRef >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 80LL))(v9, a4);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xA7u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapInternalNoRef, 0xA2u);
  }
  return v6;
}
