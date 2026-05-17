/*
 * XREFs of NtWaitForKeyedEvent @ 0x180095450
 * Callers:
 *     RtlpRunOnceWaitForInit @ 0x180077DEC (RtlpRunOnceWaitForInit.c)
 * Callees:
 *     <none>
 */

__int64 NtWaitForKeyedEvent()
{
  __int64 result; // rax

  result = 437LL;
  __asm { syscall; Low latency system call }
  return result;
}
