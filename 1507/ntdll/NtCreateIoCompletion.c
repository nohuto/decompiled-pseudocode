/*
 * XREFs of NtCreateIoCompletion @ 0x180094300
 * Callers:
 *     TpAllocPoolInternal @ 0x18007B968 (TpAllocPoolInternal.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Count)
{
  NTSTATUS result; // eax

  result = 160;
  __asm { syscall; Low latency system call }
  return result;
}
