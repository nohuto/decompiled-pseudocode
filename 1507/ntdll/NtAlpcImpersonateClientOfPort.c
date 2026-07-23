/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x180094120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAlpcImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, PVOID Flags)
{
  NTSTATUS result; // eax

  result = 130;
  __asm { syscall; Low latency system call }
  return result;
}
