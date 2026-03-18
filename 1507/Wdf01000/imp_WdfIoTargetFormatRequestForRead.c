/*
 * XREFs of imp_WdfIoTargetFormatRequestForRead @ 0x1C0082090
 * Callers:
 *     <none>
 * Callees:
 *     FxIoTargetFormatIo @ 0x1C00810F0 (FxIoTargetFormatIo.c)
 */

__int64 __fastcall imp_WdfIoTargetFormatRequestForRead(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *OutputBuffer,
        _WDFMEMORY_OFFSET *OutputBufferOffsets,
        __int64 *DeviceOffset)
{
  WDFMEMORY__ *IoBuffer; // [rsp+20h] [rbp-28h]

  IoBuffer = OutputBuffer;
  LOBYTE(OutputBuffer) = 3;
  return FxIoTargetFormatIo(
           (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
           (unsigned __int64)IoTarget,
           (__int64)Request,
           (unsigned __int16)OutputBuffer,
           IoBuffer,
           OutputBufferOffsets,
           DeviceOffset);
}
