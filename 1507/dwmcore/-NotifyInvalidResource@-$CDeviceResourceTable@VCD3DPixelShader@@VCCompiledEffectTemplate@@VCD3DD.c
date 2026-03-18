/*
 * XREFs of ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800F9C80
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x1800F9CE8 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate,CD3DDeviceLevel1>::NotifyInvalidResource(
        __int64 a1)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 8LL))(*(_QWORD *)(a1 + 8));
  CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate,CD3DDeviceLevel1>::ReleaseResourcesNoAddRef(a1);
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
}
