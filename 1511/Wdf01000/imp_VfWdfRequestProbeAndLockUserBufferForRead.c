/*
 * XREFs of imp_VfWdfRequestProbeAndLockUserBufferForRead @ 0x1C00B6AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfRequestProbeAndLockUserBufferForRead(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        void *Buffer,
        unsigned __int64 Length,
        WDFMEMORY__ **MemoryObject)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, void *, unsigned __int64, WDFMEMORY__ **))WdfVersion.Functions.pfnWdfRequestProbeAndLockUserBufferForRead)(
           DriverGlobals,
           Request,
           Buffer,
           Length,
           MemoryObject);
}
