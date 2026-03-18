/*
 * XREFs of IoRegisterDeviceInterface_0 @ 0x1C00115F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall IoRegisterDeviceInterface_0(
        PDEVICE_OBJECT PhysicalDeviceObject,
        const GUID *InterfaceClassGuid,
        PUNICODE_STRING ReferenceString,
        PUNICODE_STRING SymbolicLinkName)
{
  return IoRegisterDeviceInterface(PhysicalDeviceObject, InterfaceClassGuid, ReferenceString, SymbolicLinkName);
}
