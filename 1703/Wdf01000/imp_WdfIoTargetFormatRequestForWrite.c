/*
 * XREFs of imp_WdfIoTargetFormatRequestForWrite @ 0x1C0086B60
 * Callers:
 *     <none>
 * Callees:
 *     FxIoTargetFormatIo @ 0x1C0085FA0 (FxIoTargetFormatIo.c)
 */

__int64 __fastcall imp_WdfIoTargetFormatRequestForWrite(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *InputBuffer,
        _WDFMEMORY_OFFSET *InputBufferOffsets,
        __int64 *DeviceOffset)
{
  return FxIoTargetFormatIo(
           (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
           IoTarget,
           Request,
           4u,
           InputBuffer,
           InputBufferOffsets,
           DeviceOffset);
}
