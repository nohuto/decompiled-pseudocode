/*
 * XREFs of NtAlpcOpenSenderProcess @ 0x180094130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAlpcOpenSenderProcess(
        PHANDLE ProcessHandle,
        HANDLE PortHandle,
        PPORT_MESSAGE PortMessage,
        ULONG Flags,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 131;
  __asm { syscall; Low latency system call }
  return result;
}
