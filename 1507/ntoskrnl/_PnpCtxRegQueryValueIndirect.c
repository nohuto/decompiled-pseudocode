/*
 * XREFs of _PnpCtxRegQueryValueIndirect @ 0x14043DFB0
 * Callers:
 *     _CmGetDeviceRegPropWorker @ 0x14043DB74 (_CmGetDeviceRegPropWorker.c)
 *     _PnpGetGenericStoreProperty @ 0x14043E4F4 (_PnpGetGenericStoreProperty.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1404E4D6C (_CmGetInstallerClassRegPropWorker.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x140546BD0 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14057EC8C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxRegQueryValueIndirect(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v3)(int, int, int, int, size_t, __int64, __int64); // r10

  v3 = *(__int64 (__fastcall **)(int, int, int, int, size_t, __int64, __int64))(a1 + 336);
  if ( !v3 )
    v3 = PnpRegQueryValueIndirect;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))v3)(a1, a2, a3);
}
