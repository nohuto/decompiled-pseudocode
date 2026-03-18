/*
 * XREFs of ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x1801122B0
 * Callers:
 *     ??1CCompiledEffect@@MEAA@XZ @ 0x1801122DC (--1CCompiledEffect@@MEAA@XZ.c)
 *     ??_E?$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDeviceLevel1@@@@UEAAPEAXI@Z @ 0x180112420 (--_E-$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDeviceLevel1@@@@UEAAPEAXI.c)
 * Callees:
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x1801138FC (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDev.c)
 */

void __fastcall CDeviceResourceTable<CD3DConstantBuffer,CCompiledEffect,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DConstantBuffer,CCompiledEffect,CD3DDeviceLevel1>(
        __int64 a1)
{
  *(_QWORD *)a1 = &CDeviceResourceTable<CD3DConstantBuffer,CCompiledEffect,CD3DDeviceLevel1>::`vftable';
  CDeviceResourceTable<CD3DConstantBuffer,CCompiledEffect,CD3DDeviceLevel1>::ReleaseResourcesNoAddRef((struct IDeviceResourceNotify *)a1);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)(a1 + 16));
}
