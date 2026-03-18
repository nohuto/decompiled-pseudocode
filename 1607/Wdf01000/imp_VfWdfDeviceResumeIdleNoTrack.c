/*
 * XREFs of imp_VfWdfDeviceResumeIdleNoTrack @ 0x1C00C3A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceResumeIdleNoTrack(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  WdfVersion.Functions.pfnWdfDeviceResumeIdleNoTrack(DriverGlobals, Device);
}
