/*
 * XREFs of ZwOpenKeyTransactedEx @ 0x140152840
 * Callers:
 *     VerifierZwOpenKeyTransactedEx @ 0x1406C0D84 (VerifierZwOpenKeyTransactedEx.c)
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
