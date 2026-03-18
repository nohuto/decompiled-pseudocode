/*
 * XREFs of imp_VfWdfDeviceIndicateWakeStatus @ 0x1C00B46D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfDeviceIndicateWakeStatus(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int64 WaitWakeStatus)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, __int64))WdfVersion.Functions.pfnWdfDeviceIndicateWakeStatus)(
           DriverGlobals,
           Device,
           WaitWakeStatus);
}
