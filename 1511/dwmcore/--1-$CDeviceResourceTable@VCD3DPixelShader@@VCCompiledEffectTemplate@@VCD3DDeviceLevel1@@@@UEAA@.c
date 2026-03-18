/*
 * XREFs of ??1?$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x180112CB4
 * Callers:
 *     ??_G?$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@UEAAPEAXI@Z @ 0x180112E40 (--_G-$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@UEAA.c)
 *     ??1CCompiledEffectTemplate@@MEAA@XZ @ 0x18012DAE4 (--1CCompiledEffectTemplate@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x180113B08 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCCompiledEffectTemplate@@VCD.c)
 */

void __fastcall CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate,CD3DDeviceLevel1>(
        __int64 a1)
{
  *(_QWORD *)a1 = &CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate,CD3DDeviceLevel1>::`vftable';
  CDeviceResourceTable<CD3DPixelShader,CCompiledEffectTemplate,CD3DDeviceLevel1>::ReleaseResourcesNoAddRef();
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)(a1 + 16));
}
