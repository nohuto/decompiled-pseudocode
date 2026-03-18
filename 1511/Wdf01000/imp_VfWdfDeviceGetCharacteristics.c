/*
 * XREFs of imp_VfWdfDeviceGetCharacteristics @ 0x1C00B4620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfDeviceGetCharacteristics(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *))WdfVersion.Functions.pfnWdfDeviceGetCharacteristics)(
           DriverGlobals,
           Device);
}
