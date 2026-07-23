/*
 * XREFs of _PnpCtxRegQueryValueIndirect @ 0x1404E4524
 * Callers:
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1404BBA40 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1404BFAF8 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _PnpGetGenericStoreProperty @ 0x1404DD9A0 (_PnpGetGenericStoreProperty.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1404E7094 (_CmGetInstallerClassRegPropWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxRegQueryValueIndirect(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v3)(size_t, void *, const WCHAR *, unsigned int *, unsigned __int64, __int64, bool *); // r10

  v3 = *(__int64 (__fastcall **)(size_t, void *, const WCHAR *, unsigned int *, unsigned __int64, __int64, bool *))(a1 + 344);
  if ( !v3 )
    v3 = PnpRegQueryValueIndirect;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))v3)(a1, a2, a3);
}
