/*
 * XREFs of ZwPrepareComplete @ 0x180094B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  NTSTATUS result; // eax

  result = 288;
  __asm { syscall; Low latency system call }
  return result;
}
