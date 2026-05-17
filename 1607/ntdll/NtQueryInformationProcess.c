/*
 * XREFs of NtQueryInformationProcess @ 0x1800A6740
 * Callers:
 *     PsspCaptureHandleInformation @ 0x180004AAC (PsspCaptureHandleInformation.c)
 *     PsspDumpObject_Process @ 0x180006900 (PsspDumpObject_Process.c)
 *     RtlReportException @ 0x180006A80 (RtlReportException.c)
 *     WerpIsDebugPortPresent @ 0x180006B60 (WerpIsDebugPortPresent.c)
 *     WerpGetProcessSnapshot @ 0x180006C68 (WerpGetProcessSnapshot.c)
 *     WerpGlobalFlagsForProcess @ 0x1800075CC (WerpGlobalFlagsForProcess.c)
 *     WerpProcessId @ 0x1800077BC (WerpProcessId.c)
 *     RtlpSubSegmentInitialize @ 0x180027270 (RtlpSubSegmentInitialize.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180042348 (RtlpHeapGenerateRandomValue32.c)
 *     RtlDecodePointer @ 0x180051BE0 (RtlDecodePointer.c)
 *     RtlpGetModifiedProcessCookie @ 0x18005D96C (RtlpGetModifiedProcessCookie.c)
 *     RtlpCallVectoredHandlers @ 0x18006701C (RtlpCallVectoredHandlers.c)
 *     RtlQueryProcessDebugInformation @ 0x18006D3B0 (RtlQueryProcessDebugInformation.c)
 *     LdrpQueryInformationCurrentProcess @ 0x18006E510 (LdrpQueryInformationCurrentProcess.c)
 *     RtlEncodePointer @ 0x180074C40 (RtlEncodePointer.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180081EC4 (LdrpLogLoadFailureEtwEvent.c)
 *     PsspCaptureProcessInformation @ 0x180088BD8 (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleTrace @ 0x180088D88 (PsspCaptureHandleTrace.c)
 *     RtlSetProcessIsCritical @ 0x18008DC90 (RtlSetProcessIsCritical.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     RtlpInitRandomExVector @ 0x180096440 (RtlpInitRandomExVector.c)
 *     RtlCreateProcessReflection @ 0x1800D2F20 (RtlCreateProcessReflection.c)
 *     RtlWow64SuspendThreadEx @ 0x1800D8200 (RtlWow64SuspendThreadEx.c)
 *     RtlDecodeRemotePointer @ 0x1800D85E0 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x1800D8650 (RtlEncodeRemotePointer.c)
 *     SetAssertBufferPtrinPeb @ 0x1800D8E94 (SetAssertBufferPtrinPeb.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800F74E0 (RtlpCreateExecutionRequiredRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 25;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
