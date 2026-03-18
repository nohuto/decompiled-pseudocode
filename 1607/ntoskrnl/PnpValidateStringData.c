/*
 * XREFs of PnpValidateStringData @ 0x1401CF6F4
 * Callers:
 *     PiDevCfgQueryResolveValue @ 0x1401CF2EC (PiDevCfgQueryResolveValue.c)
 *     PnpValidateRegistryString @ 0x1401CF660 (PnpValidateRegistryString.c)
 *     PnpValidateRegistryValue @ 0x1401CF690 (PnpValidateRegistryValue.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057A954 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x140636298 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14063A648 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14063DFC8 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14063E7C8 (PiDevCfgResolveVariableDeviceProperty.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpValidateStringData(__int64 a1, unsigned int a2)
{
  char v2; // r8

  v2 = 0;
  if ( a2 >= 2 )
    return *(_WORD *)(a1 + 2 * ((unsigned __int64)a2 >> 1) - 2) == 0;
  return v2;
}
