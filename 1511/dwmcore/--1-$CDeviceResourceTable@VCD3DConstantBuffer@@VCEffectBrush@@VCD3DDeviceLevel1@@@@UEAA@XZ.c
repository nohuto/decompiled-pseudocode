/*
 * XREFs of ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x180122570
 * Callers:
 *     ??1CEffectBrush@@MEAA@XZ @ 0x18012259C (--1CEffectBrush@@MEAA@XZ.c)
 *     ??_E?$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@UEAAPEAXI@Z @ 0x1801227B0 (--_E-$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x180123328 (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDevice.c)
 */

void __fastcall CDeviceResourceTable<CD3DConstantBuffer,CEffectBrush,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DConstantBuffer,CEffectBrush,CD3DDeviceLevel1>(
        __int64 a1)
{
  *(_QWORD *)a1 = &CDeviceResourceTable<CD3DConstantBuffer,CEffectBrush,CD3DDeviceLevel1>::`vftable';
  CDeviceResourceTable<CD3DConstantBuffer,CEffectBrush,CD3DDeviceLevel1>::ReleaseResourcesNoAddRef((struct IDeviceResourceNotify *)a1);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)(a1 + 16));
}
