/*
 * XREFs of NtWaitForMultipleObjects @ 0x1800A5C10
 * Callers:
 *     TpTrimPools @ 0x180067D30 (TpTrimPools.c)
 *     RtlCreateProcessReflection @ 0x18008C990 (RtlCreateProcessReflection.c)
 *     RtlReportExceptionEx @ 0x1800D0990 (RtlReportExceptionEx.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1800E7124 (RtlpHeapTrkSyncWithDiagnoser.c)
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
