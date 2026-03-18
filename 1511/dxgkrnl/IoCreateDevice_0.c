/*
 * XREFs of IoCreateDevice_0 @ 0x1C0011540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall IoCreateDevice_0(
        PDRIVER_OBJECT DriverObject,
        ULONG DeviceExtensionSize,
        PUNICODE_STRING DeviceName,
        ULONG DeviceType,
        ULONG DeviceCharacteristics,
        BOOLEAN Exclusive,
        PDEVICE_OBJECT *DeviceObject)
{
  return IoCreateDevice(
           DriverObject,
           DeviceExtensionSize,
           DeviceName,
           DeviceType,
           DeviceCharacteristics,
           Exclusive,
           DeviceObject);
}
