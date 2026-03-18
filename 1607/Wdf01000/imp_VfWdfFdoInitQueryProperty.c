/*
 * XREFs of imp_VfWdfFdoInitQueryProperty @ 0x1C00C4100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfFdoInitQueryProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 DeviceProperty,
        __int64 BufferLength,
        void *PropertyBuffer,
        unsigned int *ResultLength)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE_INIT *, __int64, __int64, void *, unsigned int *))WdfVersion.Functions.pfnWdfFdoInitQueryProperty)(
           DriverGlobals,
           DeviceInit,
           DeviceProperty,
           BufferLength,
           PropertyBuffer,
           ResultLength);
}
