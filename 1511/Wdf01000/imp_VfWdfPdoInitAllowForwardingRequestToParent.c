/*
 * XREFs of imp_VfWdfPdoInitAllowForwardingRequestToParent @ 0x1C00B61D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfPdoInitAllowForwardingRequestToParent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfPdoInitAllowForwardingRequestToParent(DriverGlobals, DeviceInit);
}
