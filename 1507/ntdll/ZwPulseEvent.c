/*
 * XREFs of ZwPulseEvent @ 0x180094B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPulseEvent(HANDLE EventHandle, PLONG PreviousState)
{
  NTSTATUS result; // eax

  result = 295;
  __asm { syscall; Low latency system call }
  return result;
}
