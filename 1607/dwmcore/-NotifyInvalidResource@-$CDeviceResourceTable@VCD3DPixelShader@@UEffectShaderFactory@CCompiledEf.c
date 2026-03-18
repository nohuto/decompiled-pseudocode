/*
 * XREFs of ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DPixelShader@@UEffectShaderFactory@CCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x18014E6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate::EffectShaderFactory,CD3DDeviceLevel1>::NotifyInvalidResource()
{
  return CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate::EffectShaderFactory,CD3DDeviceLevel1>::ReleaseResourcesNoAddRef();
}
