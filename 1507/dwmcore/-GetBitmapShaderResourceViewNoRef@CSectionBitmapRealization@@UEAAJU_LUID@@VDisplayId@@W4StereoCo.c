/*
 * XREFs of ?GetBitmapShaderResourceViewNoRef@CSectionBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18014DBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetShaderResourceViewNoRef@CD2DBitmapCache@@QEAAJU_LUID@@VDisplayId@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800DD2FC (-GetShaderResourceViewNoRef@CD2DBitmapCache@@QEAAJU_LUID@@VDisplayId@@PEAPEAUID3D11ShaderResourc.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x18014D9FC (-EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ.c)
 */

__int64 __fastcall CSectionBitmapRealization::GetBitmapShaderResourceViewNoRef(
        __int64 a1,
        struct _LUID a2,
        int a3,
        __int64 a4,
        _QWORD *a5)
{
  CD2DBitmapCache *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  int ShaderResourceViewNoRef; // eax

  v5 = (CD2DBitmapCache *)(a1 - 112);
  *a5 = 0LL;
  v6 = CSectionBitmapRealization::EnsureBitmapCacheSource((struct IUnknown *)(a1 - 112));
  v7 = v6;
  if ( v6 >= 0 )
  {
    ShaderResourceViewNoRef = CD2DBitmapCache::GetShaderResourceViewNoRef(v5, a2, a3, a5);
    v7 = ShaderResourceViewNoRef;
    if ( ShaderResourceViewNoRef < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShaderResourceViewNoRef, 0x5Au);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x54u);
  }
  return v7;
}
