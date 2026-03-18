/*
 * XREFs of imp_VfWdfPdoInitAllocate @ 0x1C00C51E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFDEVICE_INIT *__fastcall imp_VfWdfPdoInitAllocate(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *ParentDevice)
{
  return WdfVersion.Functions.pfnWdfPdoInitAllocate(DriverGlobals, ParentDevice);
}
