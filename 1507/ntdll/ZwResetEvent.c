/*
 * XREFs of ZwResetEvent @ 0x180094EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  NTSTATUS result; // eax

  result = 350;
  __asm { syscall; Low latency system call }
  return result;
}
