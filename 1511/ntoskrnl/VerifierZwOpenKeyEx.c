/*
 * XREFs of VerifierZwOpenKeyEx @ 0x1406C0D74
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  return pXdvZwOpenKeyEx(KeyHandle, DesiredAccess, ObjectAttributes, OpenOptions);
}
