/*
 * XREFs of ?GetSRVNoRef@CD2DBitmap@@UEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x18001BA10
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18001E810 (-GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DBitmap::GetSRVNoRef(CD2DBitmap *this, struct ID3D11ShaderResourceView **a2)
{
  unsigned int v2; // ebx
  struct ID3D11ShaderResourceView **v3; // rsi
  int v6; // eax

  v2 = 0;
  v3 = (struct ID3D11ShaderResourceView **)((char *)this + 40);
  if ( *((_QWORD *)this + 5)
    || (v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this - 10)
                                                                                                 + 16LL)
                                                                                     + 544LL)
                                                                       + 56LL))(
               *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this - 10) + 16LL) + 544LL),
               *((_QWORD *)this + 3),
               0LL,
               (char *)this + 40),
        v2 = v6,
        v6 >= 0) )
  {
    *a2 = *v3;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xCEu);
  }
  return v2;
}
