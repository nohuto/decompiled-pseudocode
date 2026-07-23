/*
 * XREFs of ZwSignalAndWaitForSingleObject @ 0x1800952A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSignalAndWaitForSingleObject(
        HANDLE SignalHandle,
        HANDLE WaitHandle,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 410;
  __asm { syscall; Low latency system call }
  return result;
}
