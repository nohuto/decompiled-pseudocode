/*
 * XREFs of ZwAllocateUuids @ 0x180094020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAllocateUuids()
{
  __int64 result; // rax

  result = 114LL;
  __asm { syscall; Low latency system call }
  return result;
}
