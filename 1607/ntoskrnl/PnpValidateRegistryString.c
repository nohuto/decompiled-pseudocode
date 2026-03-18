/*
 * XREFs of PnpValidateRegistryString @ 0x1401CF660
 * Callers:
 *     PiDevCfgBuildIndirectString @ 0x14063287C (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14063D1DC (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariable @ 0x14063E354 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14063E7C8 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14063FD2C (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14064041C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140640BC8 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x140640D9C (PiDevCfgResolveVariableSwitchCase.c)
 * Callees:
 *     PnpValidateStringData @ 0x1401CF6F4 (PnpValidateStringData.c)
 */

char __fastcall PnpValidateRegistryString(_DWORD *a1)
{
  char v1; // r9

  if ( a1[1] != 1 || !(unsigned __int8)PnpValidateStringData((char *)a1 + (unsigned int)a1[2], (unsigned int)a1[3]) )
    return 0;
  return v1;
}
