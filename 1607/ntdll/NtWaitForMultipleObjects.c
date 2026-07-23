/*
 * XREFs of NtWaitForMultipleObjects @ 0x1800A6F70
 * Callers:
 *     WerpWaitForCrashReporting @ 0x1800087D4 (WerpWaitForCrashReporting.c)
 *     TpTrimPools @ 0x180062610 (TpTrimPools.c)
 *     RtlCreateProcessReflection @ 0x1800D2FE0 (RtlCreateProcessReflection.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1800F0304 (RtlpHeapTrkSyncWithDiagnoser.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWaitForMultipleObjects(
        ULONG Count,
        HANDLE Handles[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 91;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
