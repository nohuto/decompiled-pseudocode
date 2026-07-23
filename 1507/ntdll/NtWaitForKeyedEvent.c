/*
 * XREFs of NtWaitForKeyedEvent @ 0x180095450
 * Callers:
 *     RtlpRunOnceWaitForInit @ 0x180077DEC (RtlpRunOnceWaitForInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWaitForKeyedEvent(
        HANDLE KeyedEventHandle,
        PVOID KeyValue,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 437;
  __asm { syscall; Low latency system call }
  return result;
}
