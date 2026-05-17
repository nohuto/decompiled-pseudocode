/*
 * XREFs of NtOpenJobObject @ 0x1800949B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtOpenJobObject()
{
  __int64 result; // rax

  result = 267LL;
  __asm { syscall; Low latency system call }
  return result;
}
