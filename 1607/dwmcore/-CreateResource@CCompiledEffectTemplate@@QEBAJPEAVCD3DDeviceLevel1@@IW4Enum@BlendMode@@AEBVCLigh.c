/*
 * XREFs of ?CreateResource@CCompiledEffectTemplate@@QEBAJPEAVCD3DDeviceLevel1@@IW4Enum@BlendMode@@AEBVCLightsMask@@PEAPEAVCD3DPixelShader@@@Z @ 0x18014E054
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x18014E180 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompil.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@@XZ @ 0x18014E3A0 (-GetCompiledEffectNoRef@CCompiledEffectTemplate@@QEBAPEBUICompiledEffect@Composition@UI@Windows@.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x18017A1B4 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 */

__int64 __fastcall CCompiledEffectTemplate::CreateResource(
        CCompiledEffectTemplate *a1,
        struct CD3DDeviceLevel1 *a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct CD3DPixelShader **a6)
{
  const struct Windows::UI::Composition::ICompiledEffect *CompiledEffectNoRef; // rsi
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  const void *v15; // rax
  int v16; // eax
  __int64 v18[3]; // [rsp+30h] [rbp-18h] BYREF

  CompiledEffectNoRef = CCompiledEffectTemplate::GetCompiledEffectNoRef(a1);
  if ( CompiledEffectNoRef )
  {
    v11 = 1;
    if ( a4 == 22 )
      v11 = 3;
    v18[0] = 0LL;
    Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(v18);
    v12 = (*(__int64 (__fastcall **)(const struct Windows::UI::Composition::ICompiledEffect *, _QWORD, _QWORD, __int64, __int64 *))(*(_QWORD *)CompiledEffectNoRef + 16LL))(
            CompiledEffectNoRef,
            a3,
            v11,
            a5,
            v18);
    v10 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x109u);
    }
    else
    {
      v13 = v18[0];
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18[0] + 32LL))(v18[0]);
      v15 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
      v16 = CD3DPixelShader::Create(a2, v15, v14, a6);
      v10 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x10Bu);
    }
    Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(v18);
  }
  else
  {
    v10 = -2147019873;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147019873, 0xF3u);
  }
  return v10;
}
