/*
 * XREFs of _PnpCtxRegQueryValueIndirect @ 0x140441644
 * Callers:
 *     _PnpGetGenericStoreProperty @ 0x14043F704 (_PnpGetGenericStoreProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x14045D154 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14046082C (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1404DDE30 (_CmGetInstallerClassRegPropWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxRegQueryValueIndirect(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v3)(size_t, void *, const WCHAR *, unsigned int *, unsigned __int64, __int64, bool *); // r10

  v3 = *(__int64 (__fastcall **)(size_t, void *, const WCHAR *, unsigned int *, unsigned __int64, __int64, bool *))(a1 + 336);
  if ( !v3 )
    v3 = PnpRegQueryValueIndirect;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))v3)(a1, a2, a3);
}
