/*
 * XREFs of imp_VfWdfPdoInitAddHardwareID @ 0x1C00CC250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfPdoInitAddHardwareID(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *HardwareID)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE_INIT *, const _UNICODE_STRING *))WdfVersion.Functions.pfnWdfPdoInitAddHardwareID)(
           DriverGlobals,
           DeviceInit,
           HardwareID);
}
