/*
 * XREFs of ZwAlpcDeleteSecurityContext @ 0x1800940F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcDeleteSecurityContext(HANDLE PortHandle, ULONG Flags, ALPC_HANDLE ContextHandle)
{
  NTSTATUS result; // eax

  result = 127;
  __asm { syscall; Low latency system call }
  return result;
}
