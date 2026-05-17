/*
 * XREFs of ZwAddBootEntry @ 0x180093F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAddBootEntry()
{
  __int64 result; // rax

  result = 104LL;
  __asm { syscall; Low latency system call }
  return result;
}
