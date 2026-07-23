/*
 * XREFs of ZwSetSystemTime @ 0x180095200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemTime(PLARGE_INTEGER SystemTime, PLARGE_INTEGER PreviousTime)
{
  NTSTATUS result; // eax

  result = 400;
  __asm { syscall; Low latency system call }
  return result;
}
