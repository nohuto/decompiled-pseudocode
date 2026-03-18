/*
 * XREFs of imp_WdfUsbTargetPipeWriteSynchronously @ 0x1C0086830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C0089EE8 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 */

int __fastcall imp_WdfUsbTargetPipeWriteSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        _WDF_MEMORY_DESCRIPTOR *MemoryDescriptor,
        unsigned int *BytesWritten)
{
  if ( DriverGlobals[-2].DriverName[4] )
    WPP_IFR_SF_q(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      5u,
      0xEu,
      0xBu,
      WPP_FxUsbPipeAPI_cpp_Traceguids,
      Pipe);
  return FxUsbPipe::_SendTransfer(
           (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
           Pipe,
           Request,
           RequestOptions,
           MemoryDescriptor,
           BytesWritten,
           0);
}
