/*
 * XREFs of imp_WdfIoTargetFormatRequestForWrite @ 0x1C00820D0
 * Callers:
 *     <none>
 * Callees:
 *     FxIoTargetFormatIo @ 0x1C00810F0 (FxIoTargetFormatIo.c)
 */

__int64 __fastcall imp_WdfIoTargetFormatRequestForWrite(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *InputBuffer,
        _WDFMEMORY_OFFSET *InputBufferOffsets,
        __int64 *DeviceOffset)
{
  WDFMEMORY__ *IoBuffer; // [rsp+20h] [rbp-28h]

  IoBuffer = InputBuffer;
  LOBYTE(InputBuffer) = 4;
  return FxIoTargetFormatIo(
           (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
           (unsigned __int64)IoTarget,
           (__int64)Request,
           (unsigned __int16)InputBuffer,
           IoBuffer,
           InputBufferOffsets,
           DeviceOffset);
}
