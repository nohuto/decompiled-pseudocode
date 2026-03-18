/*
 * XREFs of ?GetShaderResourceViewNoRef@CCompositionSurfaceBitmap@@QEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800DC61C
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@@Z @ 0x1800FF6A0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AE.c)
 *     ?Render@CWARPCallbackRenderer@@UEAAJXZ @ 0x180158A40 (-Render@CWARPCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180086E58 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetShaderResourceViewNoRef(
        CCompositionSurfaceBitmap *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5)
{
  int v7; // eax
  unsigned int v8; // ebx

  *a5 = 0LL;
  if ( CCompositionSurfaceBitmap::EnsureBitmapRealization(a1, 0) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)(*((_QWORD *)a1 + 55) + 112LL)
                                                                               + 104LL))(
           *((_QWORD *)a1 + 55) + 112LL,
           a2,
           a3,
           a4,
           a5);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x75u);
  }
  else
  {
    v8 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x79u);
  }
  return v8;
}
