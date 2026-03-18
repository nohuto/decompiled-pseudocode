/*
 * XREFs of imp_VfWdfDeviceRemoveDependentUsageDeviceObject @ 0x1C00C3A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceRemoveDependentUsageDeviceObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *DependentDevice)
{
  WdfVersion.Functions.pfnWdfDeviceRemoveDependentUsageDeviceObject(DriverGlobals, Device, DependentDevice);
}
