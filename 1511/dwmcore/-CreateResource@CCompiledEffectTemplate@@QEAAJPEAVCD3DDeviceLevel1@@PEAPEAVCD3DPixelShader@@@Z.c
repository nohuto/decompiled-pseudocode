/*
 * XREFs of ?CreateResource@CCompiledEffectTemplate@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x18012DB74
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x18012DC1C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VC.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18012DE60 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x1801499A8 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 */

__int64 __fastcall CCompiledEffectTemplate::CreateResource(
        CCompiledEffectTemplate *this,
        struct CD3DDeviceLevel1 *a2,
        struct CD3DPixelShader **a3)
{
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rax
  unsigned int v6; // ebx
  int v7; // eax
  void *v9; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(this);
  if ( CompiledEffectNoRef )
  {
    (*(void (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, void **, unsigned __int64 *))(*(_QWORD *)CompiledEffectNoRef + 16LL))(
      CompiledEffectNoRef,
      &v9,
      &v10);
    v7 = CD3DPixelShader::Create(a2, v9, (unsigned int)v10, a3);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xACu);
  }
  else
  {
    v6 = -2147019873;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147019873, 0xA5u);
  }
  return v6;
}
