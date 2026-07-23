/*
 * XREFs of NtReleaseKeyedEvent @ 0x1800A7B90
 * Callers:
 *     RtlRunOnceComplete @ 0x180054B10 (RtlRunOnceComplete.c)
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

  result = 343;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
