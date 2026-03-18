/*
 * XREFs of imp_VfWdfDeviceInitSetPowerPolicyOwnership @ 0x1C00C38B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceInitSetPowerPolicyOwnership(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 IsPowerPolicyOwner)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetPowerPolicyOwnership(DriverGlobals, DeviceInit, IsPowerPolicyOwner);
}
