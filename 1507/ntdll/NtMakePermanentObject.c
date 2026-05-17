/*
 * XREFs of NtMakePermanentObject @ 0x1800948D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtMakePermanentObject()
{
  __int64 result; // rax

  result = 253LL;
  __asm { syscall; Low latency system call }
  return result;
}
