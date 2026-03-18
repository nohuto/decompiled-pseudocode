/*
 * XREFs of imp_VfWdfUsbTargetPipeWdmGetPipeHandle @ 0x1C00C62A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall imp_VfWdfUsbTargetPipeWdmGetPipeHandle(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFUSBPIPE__ *UsbPipe)
{
  return WdfVersion.Functions.pfnWdfUsbTargetPipeWdmGetPipeHandle(DriverGlobals, UsbPipe);
}
