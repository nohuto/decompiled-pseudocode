/*
 * XREFs of imp_VfWdfDeviceGetSystemPowerAction @ 0x1C00C36D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfDeviceGetSystemPowerAction(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *))WdfVersion.Functions.pfnWdfDeviceGetSystemPowerAction)(
           DriverGlobals,
           Device);
}
