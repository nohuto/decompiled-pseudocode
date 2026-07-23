/*
 * XREFs of NtCancelTimer @ 0x180093F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  NTSTATUS result; // eax

  result = 97;
  __asm { syscall; Low latency system call }
  return result;
}
