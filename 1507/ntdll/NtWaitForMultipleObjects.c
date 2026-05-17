/*
 * XREFs of NtWaitForMultipleObjects @ 0x180093EB0
 * Callers:
 *     TpTrimPools @ 0x180065B80 (TpTrimPools.c)
 *     RtlCreateProcessReflection @ 0x1800C1540 (RtlCreateProcessReflection.c)
 *     RtlReportExceptionEx @ 0x1800C7660 (RtlReportExceptionEx.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1800E1CE4 (RtlpHeapTrkSyncWithDiagnoser.c)
 * Callees:
 *     <none>
 */

__int64 NtWaitForMultipleObjects()
{
  __int64 result; // rax

  result = 91LL;
  __asm { syscall; Low latency system call }
  return result;
}
