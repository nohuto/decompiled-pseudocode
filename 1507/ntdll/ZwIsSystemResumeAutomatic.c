/*
 * XREFs of ZwIsSystemResumeAutomatic @ 0x180094820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwIsSystemResumeAutomatic()
{
  __int64 result; // rax

  result = 242LL;
  __asm { syscall; Low latency system call }
  return result;
}
