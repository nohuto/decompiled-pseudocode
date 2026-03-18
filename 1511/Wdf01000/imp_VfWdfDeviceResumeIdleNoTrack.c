/*
 * XREFs of imp_VfWdfDeviceResumeIdleNoTrack @ 0x1C00B4A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceResumeIdleNoTrack(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  WdfVersion.Functions.pfnWdfDeviceResumeIdleNoTrack(DriverGlobals, Device);
}
