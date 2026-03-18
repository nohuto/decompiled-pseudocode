/*
 * XREFs of VerifierIoGetDeviceInterfaces @ 0x140741F58
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoGetDeviceInterfaces(
        const GUID *InterfaceClassGuid,
        PDEVICE_OBJECT PhysicalDeviceObject,
        ULONG Flags,
        PZZWSTR *SymbolicLinkList)
{
  return pXdvIoGetDeviceInterfaces(InterfaceClassGuid, PhysicalDeviceObject, Flags, SymbolicLinkList);
}
