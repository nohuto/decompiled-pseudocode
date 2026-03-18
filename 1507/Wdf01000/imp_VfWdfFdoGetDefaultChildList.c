/*
 * XREFs of imp_VfWdfFdoGetDefaultChildList @ 0x1C00CB030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFCHILDLIST__ *__fastcall imp_VfWdfFdoGetDefaultChildList(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Fdo)
{
  return WdfVersion.Functions.pfnWdfFdoGetDefaultChildList(DriverGlobals, Fdo);
}
