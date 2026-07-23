/*
 * XREFs of ZwOpenKeyTransacted @ 0x140181190
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x140435A8C (_RegRtlOpenKeyTransacted.c)
 *     VerifierZwOpenKeyTransacted @ 0x1407425BC (VerifierZwOpenKeyTransacted.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE TransactionHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
