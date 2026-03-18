/*
 * XREFs of ??1?$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x18014DF20
 * Callers:
 *     ??_G?$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@UEAAPEAXI@Z @ 0x18014E010 (--_G-$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEffectTemplate@@VCD3D.c)
 *     ?GetShaders@CCompiledEffectTemplate@@QEBAJPEAVCD3DDeviceLevel1@@IW4Enum@BlendMode@@AEBVCLightsMask@@PEAPEAUID3D11VertexShader@@PEAPEAUID3D11PixelShader@@@Z @ 0x18014E3F8 (-GetShaders@CCompiledEffectTemplate@@QEBAJPEAVCD3DDeviceLevel1@@IW4Enum@BlendMode@@AEBVCLightsMa.c)
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x18014E8F4 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompile.c)
 */

void __fastcall CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate::EffectShaderFactory,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate::EffectShaderFactory,CD3DDeviceLevel1>(
        _QWORD *a1)
{
  *a1 = &CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate::EffectShaderFactory,CD3DDeviceLevel1>::`vftable';
  CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate::EffectShaderFactory,CD3DDeviceLevel1>::ReleaseResourcesNoAddRef();
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)(a1 + 2));
}
