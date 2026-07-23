/*
 * XREFs of ZwImpersonateClientOfPort @ 0x180093AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE Message)
{
  NTSTATUS result; // eax

  result = 31;
  __asm { syscall; Low latency system call }
  return result;
}
