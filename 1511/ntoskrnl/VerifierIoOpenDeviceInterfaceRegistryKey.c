/*
 * XREFs of VerifierIoOpenDeviceInterfaceRegistryKey @ 0x1406C07AC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoOpenDeviceInterfaceRegistryKey(
        PUNICODE_STRING SymbolicLinkName,
        ACCESS_MASK DesiredAccess,
        PHANDLE DeviceInterfaceRegKey)
{
  return pXdvIoOpenDeviceInterfaceRegistryKey(SymbolicLinkName, DesiredAccess, DeviceInterfaceRegKey);
}
