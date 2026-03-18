/*
 * XREFs of imp_VfWdfUsbTargetPipeGetInformation @ 0x1C00B71C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfUsbTargetPipeGetInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        _WDF_USB_PIPE_INFORMATION *PipeInformation)
{
  WdfVersion.Functions.pfnWdfUsbTargetPipeGetInformation(DriverGlobals, Pipe, PipeInformation);
}
