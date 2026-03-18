/*
 * XREFs of imp_WdfIoTargetFormatRequestForInternalIoctl @ 0x1C00117A0
 * Callers:
 *     <none>
 * Callees:
 *     FxIoTargetFormatIoctl @ 0x1C000E7B0 (FxIoTargetFormatIoctl.c)
 */

__int64 __fastcall imp_WdfIoTargetFormatRequestForInternalIoctl(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned int Ioctl,
        WDFMEMORY__ *InputBuffer,
        _MDL *InputBufferOffsets,
        WDFMEMORY__ *OutputBuffer,
        _WDFMEMORY_OFFSET *OutputBufferOffsets)
{
  return FxIoTargetFormatIoctl(
           (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
           (unsigned __int64)IoTarget,
           (__int64)Request,
           Ioctl,
           1u,
           InputBuffer,
           InputBufferOffsets,
           OutputBuffer,
           OutputBufferOffsets);
}
