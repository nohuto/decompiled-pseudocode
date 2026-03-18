/*
 * XREFs of ?CreateResource@CEffectBrush@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x180122868
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x180122A6C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDevic.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18012DE60 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x180148838 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 */

__int64 __fastcall CEffectBrush::CreateResource(
        CEffectBrush *this,
        struct CD3DDeviceLevel1 *a2,
        struct CD3DConstantBuffer **a3)
{
  const void *v6; // r15
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rdi
  unsigned int v8; // eax
  enum D3D11_USAGE v9; // r8d
  int v10; // eax
  unsigned int v11; // ebx

  v6 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 64LL))(*((_QWORD *)this + 11));
  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(*((CCompiledEffectTemplate **)this + 9));
  v8 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *))(*(_QWORD *)CompiledEffectNoRef
                                                                                           + 40LL))(CompiledEffectNoRef);
  if ( (v8 & 0xF) != 0 )
    v8 += 16 - (v8 & 0xF);
  v10 = CD3DConstantBuffer::Create(a2, v8, v9, v6, a3);
  v11 = v10;
  if ( v10 >= 0 )
    return 0;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x21Cu);
  return v11;
}
