/*
 * XREFs of VerifierIoGetDeviceInterfaceAlias @ 0x140741F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoGetDeviceInterfaceAlias(
        PUNICODE_STRING SymbolicLinkName,
        const GUID *AliasInterfaceClassGuid,
        PUNICODE_STRING AliasSymbolicLinkName)
{
  return pXdvIoGetDeviceInterfaceAlias(SymbolicLinkName, AliasInterfaceClassGuid, AliasSymbolicLinkName);
}
