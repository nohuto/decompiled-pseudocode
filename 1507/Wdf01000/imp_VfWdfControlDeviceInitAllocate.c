/*
 * XREFs of imp_VfWdfControlDeviceInitAllocate @ 0x1C00CA2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFDEVICE_INIT *__fastcall imp_VfWdfControlDeviceInitAllocate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        const _UNICODE_STRING *SDDLString)
{
  return WdfVersion.Functions.pfnWdfControlDeviceInitAllocate(DriverGlobals, Driver, SDDLString);
}
