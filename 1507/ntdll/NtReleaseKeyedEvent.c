/*
 * XREFs of NtReleaseKeyedEvent @ 0x180094E40
 * Callers:
 *     RtlRunOnceComplete @ 0x18006CC70 (RtlRunOnceComplete.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtReleaseKeyedEvent(
        HANDLE KeyedEventHandle,
        PVOID KeyValue,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 340;
  __asm { syscall; Low latency system call }
  return result;
}
