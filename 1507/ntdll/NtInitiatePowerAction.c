/*
 * XREFs of NtInitiatePowerAction @ 0x180094810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtInitiatePowerAction()
{
  __int64 result; // rax

  result = 241LL;
  __asm { syscall; Low latency system call }
  return result;
}
