/*
 * XREFs of imp_VfWdfDeviceResumeIdleActual @ 0x1C00C3A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceResumeIdleActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        void *Tag,
        __int64 Line,
        char *File)
{
  WdfVersion.Functions.pfnWdfDeviceResumeIdleActual(DriverGlobals, Device, Tag, Line, File);
}
