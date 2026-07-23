/*
 * XREFs of NtQueryInformationProcess @ 0x1800A6740
 * Callers:
 *     PsspCaptureHandleInformation @ 0x180004AC8 (PsspCaptureHandleInformation.c)
 *     PsspDumpObject_Process @ 0x1800068F0 (PsspDumpObject_Process.c)
 *     RtlReportException @ 0x180006A70 (RtlReportException.c)
 *     WerpIsDebugPortPresent @ 0x180006B50 (WerpIsDebugPortPresent.c)
 *     WerpGetProcessSnapshot @ 0x180006C58 (WerpGetProcessSnapshot.c)
 *     WerpGlobalFlagsForProcess @ 0x1800075BC (WerpGlobalFlagsForProcess.c)
 *     WerpProcessId @ 0x1800077AC (WerpProcessId.c)
 *     RtlpSubSegmentInitialize @ 0x180027260 (RtlpSubSegmentInitialize.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180042338 (RtlpHeapGenerateRandomValue32.c)
 *     RtlDecodePointer @ 0x180051BD0 (RtlDecodePointer.c)
 *     RtlpGetModifiedProcessCookie @ 0x18005D95C (RtlpGetModifiedProcessCookie.c)
 *     RtlpCallVectoredHandlers @ 0x18006700C (RtlpCallVectoredHandlers.c)
 *     RtlQueryProcessDebugInformation @ 0x18006D3A0 (RtlQueryProcessDebugInformation.c)
 *     LdrpQueryInformationCurrentProcess @ 0x18006E500 (LdrpQueryInformationCurrentProcess.c)
 *     RtlEncodePointer @ 0x180074C30 (RtlEncodePointer.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180081EB4 (LdrpLogLoadFailureEtwEvent.c)
 *     PsspCaptureProcessInformation @ 0x180088BC8 (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleTrace @ 0x180088D78 (PsspCaptureHandleTrace.c)
 *     RtlSetProcessIsCritical @ 0x18008DC80 (RtlSetProcessIsCritical.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     RtlpInitRandomExVector @ 0x180096430 (RtlpInitRandomExVector.c)
 *     RtlCreateProcessReflection @ 0x1800D2FE0 (RtlCreateProcessReflection.c)
 *     RtlWow64SuspendThreadEx @ 0x1800D82C0 (RtlWow64SuspendThreadEx.c)
 *     RtlDecodeRemotePointer @ 0x1800D86A0 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x1800D8710 (RtlEncodeRemotePointer.c)
 *     SetAssertBufferPtrinPeb @ 0x1800D8F54 (SetAssertBufferPtrinPeb.c)
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
