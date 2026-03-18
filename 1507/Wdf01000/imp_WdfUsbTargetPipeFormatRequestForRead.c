/*
 * XREFs of imp_WdfUsbTargetPipeFormatRequestForRead @ 0x1C008A120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqq @ 0x1C006437C (WPP_IFR_SF_qqq.c)
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C0091B24 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 */

int __fastcall imp_WdfUsbTargetPipeFormatRequestForRead(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *ReadMemory,
        _WDFMEMORY_OFFSET *ReadOffsets)
{
  if ( DriverGlobals[-2].DriverName[4] )
    WPP_IFR_SF_qqq(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      5u,
      0xEu,
      0xEu,
      WPP_FxUsbPipeAPI_cpp_Traceguids,
      Pipe,
      Request,
      ReadMemory);
  return FxUsbPipe::_FormatTransfer(
           (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
           Pipe,
           Request,
           ReadMemory,
           ReadOffsets,
           3u);
}
