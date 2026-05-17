/*
 * XREFs of NtWaitForMultipleObjects @ 0x1800A6F70
 * Callers:
 *     WerpWaitForCrashReporting @ 0x1800087E4 (WerpWaitForCrashReporting.c)
 *     TpTrimPools @ 0x180062620 (TpTrimPools.c)
 *     RtlCreateProcessReflection @ 0x1800D2F20 (RtlCreateProcessReflection.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1800F0304 (RtlpHeapTrkSyncWithDiagnoser.c)
 * Callees:
 *     <none>
 */

__int64 NtWaitForMultipleObjects()
{
  __int64 result; // rax

  result = 91LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
