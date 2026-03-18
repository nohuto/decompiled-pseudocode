/*
 * XREFs of VerifierIoOpenDeviceRegistryKey @ 0x1406C07B4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoOpenDeviceRegistryKey(
        PDEVICE_OBJECT DeviceObject,
        ULONG DevInstKeyType,
        ACCESS_MASK DesiredAccess,
        PHANDLE DeviceRegKey)
{
  return pXdvIoOpenDeviceRegistryKey(DeviceObject, DevInstKeyType, DesiredAccess, DeviceRegKey);
}
