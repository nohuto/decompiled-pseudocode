/*
 * XREFs of VerifierZwCreateResourceManager @ 0x1406C0D3C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwCreateResourceManager(
        PHANDLE ResourceManagerHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE TmHandle,
        LPGUID ResourceManagerGuid,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG CreateOptions,
        PUNICODE_STRING Description)
{
  return pXdvZwCreateResourceManager(
           ResourceManagerHandle,
           DesiredAccess,
           TmHandle,
           ResourceManagerGuid,
           ObjectAttributes,
           CreateOptions,
           Description);
}
