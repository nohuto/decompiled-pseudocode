/*
 * XREFs of PnpValidateMultiSzData @ 0x1401CF37C
 * Callers:
 *     PnpValidateRegistryMultiSz @ 0x1401CF3C4 (PnpValidateRegistryMultiSz.c)
 *     PnpValidateRegistryValue @ 0x1401CF424 (PnpValidateRegistryValue.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057AE94 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140632F6C (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14063BAA8 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14063E0AC (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14063E8AC (PiDevCfgResolveVariableDeviceProperty.c)
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
