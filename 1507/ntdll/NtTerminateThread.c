/*
 * XREFs of NtTerminateThread @ 0x180093E30
 * Callers:
 *     RtlExitUserThread @ 0x180009FA0 (RtlExitUserThread.c)
 *     RtlExitUserProcess @ 0x180044550 (RtlExitUserProcess.c)
 *     RtlQueryProcessDebugInformation @ 0x180068A40 (RtlQueryProcessDebugInformation.c)
 *     EtwpCreateEtwThread @ 0x1800764A0 (EtwpCreateEtwThread.c)
 *     LdrpGenericExceptionFilter @ 0x1800C0F28 (LdrpGenericExceptionFilter.c)
 *     RtlSetProcessDebugInformation @ 0x1800C3D20 (RtlSetProcessDebugInformation.c)
 *     RtlAssert @ 0x1800D3780 (RtlAssert.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800D92B4 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpExitThread @ 0x1800F6160 (RtlpExitThread.c)
 * Callees:
 *     <none>
 */

__int64 NtTerminateThread()
{
  __int64 result; // rax

  result = 83LL;
  __asm { syscall; Low latency system call }
  return result;
}
