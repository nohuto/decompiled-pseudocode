/*
 * XREFs of ?GetShaderResourceViewNoRef@CD2DBitmap@@UEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x18009FB10
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180055220 (-GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 */

__int64 __fastcall CD2DBitmap::GetShaderResourceViewNoRef(CD2DBitmap *this, struct ID3D11ShaderResourceView **a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v7; // rcx
  int v8; // eax

  v3 = 0;
  v4 = *((_QWORD *)this + 3);
  if ( !v4 )
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x244u);
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xC9u);
    return v3;
  }
  if ( !*((_QWORD *)this + 5) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this - 10) + 24LL) + 568LL);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v7 + 56LL))(v7, v4, 0LL);
    v3 = v8;
    if ( v8 < 0 )
    {
      if ( IsOOM(v8) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x24Du);
      goto LABEL_12;
    }
  }
  *a2 = (struct ID3D11ShaderResourceView *)*((_QWORD *)this + 5);
  return v3;
}
