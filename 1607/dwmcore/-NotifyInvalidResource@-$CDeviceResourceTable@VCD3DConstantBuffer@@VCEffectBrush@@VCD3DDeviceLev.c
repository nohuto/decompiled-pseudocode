/*
 * XREFs of ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x18013C380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x18013C60C (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDevice.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CEffectBrush,CD3DDeviceLevel1>::NotifyInvalidResource(
        struct IDeviceResourceNotify *a1)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 8LL))(*((_QWORD *)a1 + 1));
  CDeviceResourceTable<CD3DConstantBuffer,CEffectBrush,CD3DDeviceLevel1>::ReleaseResourcesNoAddRef(a1);
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 16LL))(*((_QWORD *)a1 + 1));
}
