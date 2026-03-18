/*
 * XREFs of VerifierIoGetDeviceInterfaceAlias @ 0x1406C075C
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
