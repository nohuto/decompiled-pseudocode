/*
 * XREFs of VerifierIoOpenDeviceInterfaceRegistryKey @ 0x140741FA0
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
