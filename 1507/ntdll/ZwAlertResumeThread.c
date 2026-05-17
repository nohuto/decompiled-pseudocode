/*
 * XREFs of ZwAlertResumeThread @ 0x180093FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAlertResumeThread()
{
  __int64 result; // rax

  result = 108LL;
  __asm { syscall; Low latency system call }
  return result;
}
