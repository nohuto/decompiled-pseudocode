/*
 * XREFs of NtTerminateThread @ 0x1800A5B20
 * Callers:
 *     EtwpCreateEtwThread @ 0x180045130 (EtwpCreateEtwThread.c)
 *     RtlExitUserProcess @ 0x18005B0A0 (RtlExitUserProcess.c)
 *     RtlExitUserThread @ 0x18005C5F0 (RtlExitUserThread.c)
 *     RtlQueryProcessDebugInformation @ 0x18006C270 (RtlQueryProcessDebugInformation.c)
 *     LdrpGenericExceptionFilter @ 0x1800CB5E8 (LdrpGenericExceptionFilter.c)
 *     RtlSetProcessDebugInformation @ 0x1800CD370 (RtlSetProcessDebugInformation.c)
 *     RtlAssert @ 0x1800DBA70 (RtlAssert.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800E1180 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpExitThread @ 0x1800F5A40 (RtlpExitThread.c)
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
