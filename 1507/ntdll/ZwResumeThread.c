/*
 * XREFs of ZwResumeThread @ 0x180093E20
 * Callers:
 *     EtwpCreateEtwThread @ 0x1800764A0 (EtwpCreateEtwThread.c)
 *     RtlSetProcessDebugInformation @ 0x1800C3D20 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendThreadEx @ 0x1800C7020 (RtlWow64SuspendThreadEx.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800D92B4 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x1800E2420 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  NTSTATUS result; // eax

  result = 82;
  __asm { syscall; Low latency system call }
  return result;
}
