/*
 * XREFs of WdmlibIoCreateDeviceSecure @ 0x1C00CF8C0
 * Callers:
 *     DpiGdoCreateGdiObjects @ 0x1C00CEE00 (DpiGdoCreateGdiObjects.c)
 *     DpiPdoAddPdo @ 0x1C00E2A50 (DpiPdoAddPdo.c)
 *     DriverEntry @ 0x1C018D79C (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     WdmlibInit @ 0x1C00CEA5C (WdmlibInit.c)
 */

NTSTATUS __stdcall WdmlibIoCreateDeviceSecure(
        PDRIVER_OBJECT DriverObject,
        ULONG DeviceExtensionSize,
        PUNICODE_STRING DeviceName,
        ULONG DeviceType,
        ULONG DeviceCharacteristics,
        BOOLEAN Exclusive,
        PCUNICODE_STRING DefaultSDDLString,
        LPCGUID DeviceClassGuid,
        PDEVICE_OBJECT *DeviceObject)
{
  if ( !WdmlibInitialized )
    WdmlibInit();
  return ((__int64 (__fastcall *)(PDRIVER_OBJECT, _QWORD, PUNICODE_STRING, _QWORD, ULONG, BOOLEAN, PCUNICODE_STRING, LPCGUID, PDEVICE_OBJECT *))PfnIoCreateDeviceSecure)(
           DriverObject,
           DeviceExtensionSize,
           DeviceName,
           DeviceType,
           DeviceCharacteristics,
           Exclusive,
           DefaultSDDLString,
           DeviceClassGuid,
           DeviceObject);
}
