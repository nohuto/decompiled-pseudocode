/*
 * XREFs of imp_VfWdfRequestWdmFormatUsingStackLocation @ 0x1C00D0D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfRequestWdmFormatUsingStackLocation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _IO_STACK_LOCATION *Stack)
{
  WdfVersion.Functions.pfnWdfRequestWdmFormatUsingStackLocation(DriverGlobals, Request, Stack);
}
