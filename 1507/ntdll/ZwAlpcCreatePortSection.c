/*
 * XREFs of ZwAlpcCreatePortSection @ 0x180094080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAlpcCreatePortSection()
{
  __int64 result; // rax

  result = 120LL;
  __asm { syscall; Low latency system call }
  return result;
}
