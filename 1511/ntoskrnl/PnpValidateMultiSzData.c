/*
 * XREFs of PnpValidateMultiSzData @ 0x14012F998
 * Callers:
 *     PnpValidateRegistryMultiSz @ 0x1401C07E4 (PnpValidateRegistryMultiSz.c)
 *     PnpValidateRegistryValue @ 0x1401C0814 (PnpValidateRegistryValue.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140515AA0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgQueryObjectProperties @ 0x14053EF3C (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140607C34 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140609340 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14060A6AC (PiDevCfgResolveMultiSzValue.c)
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
