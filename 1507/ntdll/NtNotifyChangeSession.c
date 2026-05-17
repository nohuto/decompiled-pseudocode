/*
 * XREFs of NtNotifyChangeSession @ 0x180094970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtNotifyChangeSession()
{
  __int64 result; // rax

  result = 263LL;
  __asm { syscall; Low latency system call }
  return result;
}
