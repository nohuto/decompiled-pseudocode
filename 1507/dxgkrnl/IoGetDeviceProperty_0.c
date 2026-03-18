/*
 * XREFs of IoGetDeviceProperty_0 @ 0x1C000FF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall IoGetDeviceProperty_0(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        ULONG BufferLength,
        PVOID PropertyBuffer,
        PULONG ResultLength)
{
  return IoGetDeviceProperty(DeviceObject, DeviceProperty, BufferLength, PropertyBuffer, ResultLength);
}
