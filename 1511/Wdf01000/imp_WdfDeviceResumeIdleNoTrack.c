/*
 * XREFs of imp_WdfDeviceResumeIdleNoTrack @ 0x1C0067770
 * Callers:
 *     <none>
 * Callees:
 *     ResumeIdleWorker @ 0x1C00664B0 (ResumeIdleWorker.c)
 */

void __fastcall imp_WdfDeviceResumeIdleNoTrack(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  ResumeIdleWorker(DriverGlobals, Device, 0LL, 0, 0LL);
}
