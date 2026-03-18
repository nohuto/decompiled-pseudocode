/*
 * XREFs of imp_VfWdfPdoGetParent @ 0x1C00CC210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFDEVICE__ *__fastcall imp_VfWdfPdoGetParent(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfPdoGetParent(DriverGlobals, Device);
}
