/*
 * XREFs of NtTerminateThread @ 0x1800A6E80
 * Callers:
 *     RtlExitUserProcess @ 0x180006E50 (RtlExitUserProcess.c)
 *     RtlExitUserThread @ 0x180052920 (RtlExitUserThread.c)
 *     EtwpCreateEtwThread @ 0x1800543E0 (EtwpCreateEtwThread.c)
 *     RtlQueryProcessDebugInformation @ 0x18006D3A0 (RtlQueryProcessDebugInformation.c)
 *     LdrpGenericExceptionFilter @ 0x1800D2DE4 (LdrpGenericExceptionFilter.c)
 *     RtlSetProcessDebugInformation @ 0x1800D53B0 (RtlSetProcessDebugInformation.c)
 *     RtlAssert @ 0x1800E4D90 (RtlAssert.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA3FC (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtTerminateThread(HANDLE ThreadHandle, NTSTATUS ExitStatus)
{
  NTSTATUS result; // eax

  result = 83;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
