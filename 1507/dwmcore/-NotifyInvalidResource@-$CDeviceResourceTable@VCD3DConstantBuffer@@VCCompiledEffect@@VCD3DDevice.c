/*
 * XREFs of ?NotifyInvalidResource@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDeviceLevel1@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x180113430
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x1801138FC (-ReleaseResourcesNoAddRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDev.c)
 */

__int64 __fastcall CDeviceResourceTable<CD3DConstantBuffer,CCompiledEffect,CD3DDeviceLevel1>::NotifyInvalidResource(
        struct IDeviceResourceNotify *a1,
        __int64 a2)
{
  (**(void (__fastcall ***)(__int64, __int64))(*((_QWORD *)a1 + 1) + 40LL))(*((_QWORD *)a1 + 1) + 40LL, a2);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 8LL))(*((_QWORD *)a1 + 1));
  CDeviceResourceTable<CD3DConstantBuffer,CCompiledEffect,CD3DDeviceLevel1>::ReleaseResourcesNoAddRef(a1);
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 1) + 16LL))(*((_QWORD *)a1 + 1));
}
