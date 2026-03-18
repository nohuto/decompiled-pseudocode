/*
 * XREFs of VerifierZwOpenKeyTransacted @ 0x1406C0D7C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwOpenKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE TransactionHandle)
{
  return pXdvZwOpenKeyTransacted(KeyHandle, DesiredAccess, ObjectAttributes, TransactionHandle);
}
