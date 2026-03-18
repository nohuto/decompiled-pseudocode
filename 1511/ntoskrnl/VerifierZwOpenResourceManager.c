/*
 * XREFs of VerifierZwOpenResourceManager @ 0x1406C0D8C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwOpenResourceManager(
        PHANDLE ResourceManagerHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE TmHandle,
        LPGUID ResourceManagerGuid,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  return pXdvZwOpenResourceManager(
           ResourceManagerHandle,
           DesiredAccess,
           TmHandle,
           ResourceManagerGuid,
           ObjectAttributes);
}
