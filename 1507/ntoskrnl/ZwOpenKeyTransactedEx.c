/*
 * XREFs of ZwOpenKeyTransactedEx @ 0x1401811B0
 * Callers:
 *     VerifierZwOpenKeyTransactedEx @ 0x1407425C4 (VerifierZwOpenKeyTransactedEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenKeyTransactedEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions,
        HANDLE TransactionHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
