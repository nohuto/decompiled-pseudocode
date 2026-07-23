/*
 * XREFs of NtOpenKeyTransacted @ 0x1405F9884
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenKeyTransactedEx @ 0x1404C210C (NtOpenKeyTransactedEx.c)
 */

NTSTATUS __cdecl NtOpenKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE TransactionHandle)
{
  return NtOpenKeyTransactedEx(KeyHandle, DesiredAccess, ObjectAttributes, 0, TransactionHandle);
}
