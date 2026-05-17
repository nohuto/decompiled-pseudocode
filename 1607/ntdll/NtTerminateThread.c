/*
 * XREFs of NtTerminateThread @ 0x1800A6E80
 * Callers:
 *     RtlExitUserProcess @ 0x180006E60 (RtlExitUserProcess.c)
 *     RtlExitUserThread @ 0x180052930 (RtlExitUserThread.c)
 *     EtwpCreateEtwThread @ 0x1800543F0 (EtwpCreateEtwThread.c)
 *     RtlQueryProcessDebugInformation @ 0x18006D3B0 (RtlQueryProcessDebugInformation.c)
 *     LdrpGenericExceptionFilter @ 0x1800D2D24 (LdrpGenericExceptionFilter.c)
 *     RtlSetProcessDebugInformation @ 0x1800D52F0 (RtlSetProcessDebugInformation.c)
 *     RtlAssert @ 0x1800E4CD0 (RtlAssert.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA33C (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     <none>
 */

__int64 NtTerminateThread()
{
  __int64 result; // rax

  result = 83LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
