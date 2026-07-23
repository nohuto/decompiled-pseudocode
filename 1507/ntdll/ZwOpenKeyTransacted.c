/*
 * XREFs of ZwOpenKeyTransacted @ 0x1800949D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE TransactionHandle)
{
  NTSTATUS result; // eax

  result = 269;
  __asm { syscall; Low latency system call }
  return result;
}
