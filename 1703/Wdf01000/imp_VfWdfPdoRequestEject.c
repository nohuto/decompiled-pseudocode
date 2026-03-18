/*
 * XREFs of imp_VfWdfPdoRequestEject @ 0x1C00D0060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfPdoRequestEject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  WdfVersion.Functions.pfnWdfPdoRequestEject(DriverGlobals, Device);
}
