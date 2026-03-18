/*
 * XREFs of VerifierZwOpenKeyTransactedEx @ 0x1406C0D84
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwOpenKeyTransactedEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions,
        HANDLE TransactionHandle)
{
  return pXdvZwOpenKeyTransactedEx(KeyHandle, DesiredAccess, ObjectAttributes, OpenOptions, TransactionHandle);
}
