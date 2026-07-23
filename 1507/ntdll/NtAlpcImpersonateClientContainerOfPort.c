/*
 * XREFs of NtAlpcImpersonateClientContainerOfPort @ 0x180094110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAlpcImpersonateClientContainerOfPort(HANDLE PortHandle, PPORT_MESSAGE Message, ULONG Flags)
{
  NTSTATUS result; // eax

  result = 129;
  __asm { syscall; Low latency system call }
  return result;
}
