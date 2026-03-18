/*
 * XREFs of PnpValidateRegistryDword @ 0x14012C1B4
 * Callers:
 *     PiDevCfgVerifyService @ 0x1405117E4 (PiDevCfgVerifyService.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140513FDC (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgMigrateDevice @ 0x140514B9C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140515AA0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x140515CB0 (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140608318 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x140608F34 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x140609150 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x140609AA8 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140609B14 (PiDevCfgQueryPolicyStringList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PnpValidateRegistryDword(__int64 a1)
{
  return *(_DWORD *)(a1 + 4) == 4 && *(_DWORD *)(a1 + 12) == 4;
}
