/*
 * XREFs of ZwNotifyChangeKey @ 0x180094950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwNotifyChangeKey()
{
  __int64 result; // rax

  result = 261LL;
  __asm { syscall; Low latency system call }
  return result;
}
