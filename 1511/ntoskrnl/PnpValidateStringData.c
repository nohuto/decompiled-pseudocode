/*
 * XREFs of PnpValidateStringData @ 0x14012C378
 * Callers:
 *     PnpValidateRegistryString @ 0x14012C344 (PnpValidateRegistryString.c)
 *     PiDevCfgQueryResolveValue @ 0x1401C0680 (PiDevCfgQueryResolveValue.c)
 *     PnpValidateRegistryValue @ 0x1401C0814 (PnpValidateRegistryValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x140515118 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140515AA0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgQueryObjectProperties @ 0x14053EF3C (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgMakeServiceBootStart @ 0x140608F34 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14060A6AC (PiDevCfgResolveMultiSzValue.c)
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
