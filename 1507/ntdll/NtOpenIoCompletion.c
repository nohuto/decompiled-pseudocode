/*
 * XREFs of NtOpenIoCompletion @ 0x1800949A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 266;
  __asm { syscall; Low latency system call }
  return result;
}
