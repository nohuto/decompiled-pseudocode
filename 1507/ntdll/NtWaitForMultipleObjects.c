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

NTSTATUS __cdecl NtWaitForMultipleObjects(
        ULONG Count,
        HANDLE Handles[],
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 91;
  __asm { syscall; Low latency system call }
  return result;
}
