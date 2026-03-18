/*
 * XREFs of PnpValidateRegistryDword @ 0x1401CF618
 * Callers:
 *     PiDevCfgConfigureDeviceKeys @ 0x1406358F4 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140638328 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14063A648 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateDevice @ 0x14063A864 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgMigrateRootDevice @ 0x14063AD4C (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14063D170 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14063D1DC (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14063E7C8 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x140641050 (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgVerifyService @ 0x14064115C (PiDevCfgVerifyService.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PnpValidateRegistryDword(__int64 a1)
{
  return *(_DWORD *)(a1 + 4) == 4 && *(_DWORD *)(a1 + 12) == 4;
}
