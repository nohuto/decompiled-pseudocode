/*
 * XREFs of imp_WdfUsbTargetPipeFormatRequestForWrite @ 0x1C003CC40
 * Callers:
 *     <none>
 * Callees:
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C00013E0 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 *     WPP_IFR_SF_qqq @ 0x1C006AA34 (WPP_IFR_SF_qqq.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeFormatRequestForWrite(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *WriteMemory,
        _WDFMEMORY_OFFSET *WriteOffsets)
{
  if ( BYTE4(DriverGlobals[-2].Driver) )
    WPP_IFR_SF_qqq(
      (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
      5u,
      0xEu,
      0xCu,
      WPP_FxUsbPipeAPI_cpp_Traceguids,
      Pipe,
      Request,
      WriteMemory);
  return FxUsbPipe::_FormatTransfer(
           (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
           Pipe,
           Request,
           WriteMemory,
           WriteOffsets,
           0);
}
