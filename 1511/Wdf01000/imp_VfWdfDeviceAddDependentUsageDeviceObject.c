/*
 * XREFs of imp_VfWdfDeviceAddDependentUsageDeviceObject @ 0x1C00B43F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfDeviceAddDependentUsageDeviceObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *DependentDevice)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _DEVICE_OBJECT *))WdfVersion.Functions.pfnWdfDeviceAddDependentUsageDeviceObject)(
           DriverGlobals,
           Device,
           DependentDevice);
}
