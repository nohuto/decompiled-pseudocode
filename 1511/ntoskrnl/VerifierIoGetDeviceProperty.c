/*
 * XREFs of VerifierIoGetDeviceProperty @ 0x1406C077C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoGetDeviceProperty(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        ULONG BufferLength,
        PVOID PropertyBuffer,
        PULONG ResultLength)
{
  return pXdvIoGetDeviceProperty(DeviceObject, DeviceProperty, BufferLength, PropertyBuffer, ResultLength);
}
