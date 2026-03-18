/*
 * XREFs of ?_SpecialTypeToUsage@FxPkgPnp@@KA?AW4_DEVICE_USAGE_NOTIFICATION_TYPE@@W4_WDF_SPECIAL_FILE_TYPE@@@Z @ 0x1C0037D20
 * Callers:
 *     imp_WdfDeviceSetSpecialFileSupport @ 0x1C0035D50 (imp_WdfDeviceSetSpecialFileSupport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::_SpecialTypeToUsage(_WDF_SPECIAL_FILE_TYPE Type)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  v1 = Type - 1;
  if ( !v1 )
    return 1LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 2LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 3LL;
  if ( v3 != 1 )
    return 1LL;
  return 4LL;
}
