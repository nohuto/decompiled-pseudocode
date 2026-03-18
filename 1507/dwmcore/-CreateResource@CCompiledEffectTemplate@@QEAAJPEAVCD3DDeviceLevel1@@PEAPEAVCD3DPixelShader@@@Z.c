/*
 * XREFs of ?CreateResource@CCompiledEffectTemplate@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x180115178
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x180115220 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetCompiledEffectIfAvailable@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x180115464 (-GetCompiledEffectIfAvailable@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Wi.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x180138D04 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 */

__int64 __fastcall CCompiledEffectTemplate::CreateResource(
        CCompiledEffectTemplate *this,
        struct CD3DDeviceLevel1 *a2,
        struct CD3DPixelShader **a3)
{
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectIfAvailable; // rax
  unsigned int v6; // ebx
  int v7; // eax
  void *v9; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  CompiledEffectIfAvailable = CCompiledEffectTemplate::GetCompiledEffectIfAvailable(this);
  if ( CompiledEffectIfAvailable )
  {
    (*(void (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, void **, unsigned __int64 *))(*(_QWORD *)CompiledEffectIfAvailable + 16LL))(
      CompiledEffectIfAvailable,
      &v9,
      &v10);
    v7 = CD3DPixelShader::Create(a2, v9, (unsigned int)v10, a3);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xAAu);
  }
  else
  {
    v6 = -2147019873;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147019873, 0xA3u);
  }
  return v6;
}
