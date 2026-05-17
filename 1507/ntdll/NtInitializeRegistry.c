/*
 * XREFs of NtInitializeRegistry @ 0x180094800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtInitializeRegistry()
{
  __int64 result; // rax

  result = 240LL;
  __asm { syscall; Low latency system call }
  return result;
}
