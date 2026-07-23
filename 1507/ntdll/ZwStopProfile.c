/*
 * XREFs of ZwStopProfile @ 0x1800952D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwStopProfile(HANDLE ProfileHandle)
{
  NTSTATUS result; // eax

  result = 413;
  __asm { syscall; Low latency system call }
  return result;
}
