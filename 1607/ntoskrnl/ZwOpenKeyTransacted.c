/*
 * XREFs of ZwOpenKeyTransacted @ 0x14015C430
 * Callers:
 *     _RegRtlOpenKeyTransacted @ 0x1404E0B64 (_RegRtlOpenKeyTransacted.c)
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
