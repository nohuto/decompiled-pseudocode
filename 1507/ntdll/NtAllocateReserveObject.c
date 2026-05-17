/*
 * XREFs of NtAllocateReserveObject @ 0x180094000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtAllocateReserveObject()
{
  __int64 result; // rax

  result = 112LL;
  __asm { syscall; Low latency system call }
  return result;
}
