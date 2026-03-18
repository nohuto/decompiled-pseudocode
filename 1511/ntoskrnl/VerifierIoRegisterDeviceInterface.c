/*
 * XREFs of VerifierIoRegisterDeviceInterface @ 0x1406C07E4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoRegisterDeviceInterface(
        PDEVICE_OBJECT PhysicalDeviceObject,
        const GUID *InterfaceClassGuid,
        PUNICODE_STRING ReferenceString,
        PUNICODE_STRING SymbolicLinkName)
{
  return pXdvIoRegisterDeviceInterface(PhysicalDeviceObject, InterfaceClassGuid, ReferenceString, SymbolicLinkName);
}
