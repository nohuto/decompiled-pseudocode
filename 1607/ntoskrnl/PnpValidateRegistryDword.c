/*
 * XREFs of PnpValidateRegistryDword @ 0x1401CF3AC
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x1406359A8 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406383DC (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14063A6FC (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateDevice @ 0x14063A918 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgMigrateRootDevice @ 0x14063AE00 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14063D224 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14063D290 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14063E8AC (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x140641134 (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgVerifyService @ 0x140641240 (PiDevCfgVerifyService.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PnpValidateRegistryDword(__int64 a1)
{
  return *(_DWORD *)(a1 + 4) == 4 && *(_DWORD *)(a1 + 12) == 4;
}
