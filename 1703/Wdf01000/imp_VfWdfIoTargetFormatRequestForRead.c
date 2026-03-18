/*
 * XREFs of imp_VfWdfIoTargetFormatRequestForRead @ 0x1C00CF7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfIoTargetFormatRequestForRead(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *OutputBuffer,
        _WDFMEMORY_OFFSET *OutputBufferOffset,
        __int64 *DeviceOffset)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *, WDFREQUEST__ *, WDFMEMORY__ *, _WDFMEMORY_OFFSET *, __int64 *))WdfVersion.Functions.pfnWdfIoTargetFormatRequestForRead)(
           DriverGlobals,
           IoTarget,
           Request,
           OutputBuffer,
           OutputBufferOffset,
           DeviceOffset);
}
