/*
 * XREFs of ZwOpenKeyTransactedEx @ 0x1800949E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenKeyTransactedEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions,
        HANDLE TransactionHandle)
{
  NTSTATUS result; // eax

  result = 270;
  __asm { syscall; Low latency system call }
  return result;
}
