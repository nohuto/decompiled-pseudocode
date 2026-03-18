/*
 * XREFs of PnpValidateMultiSzData @ 0x1401CF5E8
 * Callers:
 *     PnpValidateRegistryMultiSz @ 0x1401CF630 (PnpValidateRegistryMultiSz.c)
 *     PnpValidateRegistryValue @ 0x1401CF690 (PnpValidateRegistryValue.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057A954 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140632EB8 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14063B9F4 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14063DFC8 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14063E7C8 (PiDevCfgResolveVariableDeviceProperty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpValidateMultiSzData(_WORD *a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8

  result = 0LL;
  if ( a2 >= 4 )
  {
    v3 = (unsigned __int64)a2 >> 1;
    if ( !a1[v3 - 1] && !a1[v3 - 2] )
      return 1LL;
  }
  if ( a2 == 2 && !*a1 )
    return 1LL;
  return result;
}
