/*
 * XREFs of ZwSetEventBoostPriority @ 0x180093BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetEventBoostPriority(HANDLE EventHandle)
{
  NTSTATUS result; // eax

  result = 45;
  __asm { syscall; Low latency system call }
  return result;
}
