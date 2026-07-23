/*
 * XREFs of NtRegisterThreadTerminatePort @ 0x180094E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtRegisterThreadTerminatePort(HANDLE PortHandle)
{
  NTSTATUS result; // eax

  result = 339;
  __asm { syscall; Low latency system call }
  return result;
}
