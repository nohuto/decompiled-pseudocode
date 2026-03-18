/*
 * XREFs of IoOpenDeviceRegistryKey_0 @ 0x1C00115A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall IoOpenDeviceRegistryKey_0(
        PDEVICE_OBJECT DeviceObject,
        ULONG DevInstKeyType,
        ACCESS_MASK DesiredAccess,
        PHANDLE DeviceRegKey)
{
  return IoOpenDeviceRegistryKey(DeviceObject, DevInstKeyType, DesiredAccess, DeviceRegKey);
}
