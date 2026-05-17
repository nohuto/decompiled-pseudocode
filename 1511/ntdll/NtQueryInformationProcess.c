/*
 * XREFs of NtQueryInformationProcess @ 0x1800A53E0
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x180029DF0 (RtlpSubSegmentInitialize.c)
 *     PsspCaptureProcessInformation @ 0x18004B1F4 (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleTrace @ 0x18004B39C (PsspCaptureHandleTrace.c)
 *     RtlpGetModifiedProcessCookie @ 0x18004BF78 (RtlpGetModifiedProcessCookie.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x18005829C (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180058680 (RtlpHeapGenerateRandomValue32.c)
 *     WerpGlobalFlagsForProcess @ 0x18005B83C (WerpGlobalFlagsForProcess.c)
 *     WerpProcessId @ 0x18005BA98 (WerpProcessId.c)
 *     RtlDecodePointer @ 0x18005C980 (RtlDecodePointer.c)
 *     RtlQueryProcessDebugInformation @ 0x18006C270 (RtlQueryProcessDebugInformation.c)
 *     RtlpCallVectoredHandlers @ 0x18006E65C (RtlpCallVectoredHandlers.c)
 *     RtlEncodePointer @ 0x180072AD0 (RtlEncodePointer.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x18007E464 (LdrpLogLoadFailureEtwEvent.c)
 *     RtlSetProcessIsCritical @ 0x180089A10 (RtlSetProcessIsCritical.c)
 *     LdrpQueryInformationCurrentProcess @ 0x180089C00 (LdrpQueryInformationCurrentProcess.c)
 *     PsspCaptureHandleInformation @ 0x18008A588 (PsspCaptureHandleInformation.c)
 *     SetAssertBufferPtrinPeb @ 0x18008C918 (SetAssertBufferPtrinPeb.c)
 *     RtlCreateProcessReflection @ 0x18008C990 (RtlCreateProcessReflection.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     RtlpInitRandomExVector @ 0x180094CB0 (RtlpInitRandomExVector.c)
 *     RtlWow64SuspendThreadEx @ 0x1800D0350 (RtlWow64SuspendThreadEx.c)
 *     RtlDecodeRemotePointer @ 0x1800D0760 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x1800D07D0 (RtlEncodeRemotePointer.c)
 *     IsDebugPortPresent @ 0x1800D0834 (IsDebugPortPresent.c)
 *     RtlReportException @ 0x1800D0880 (RtlReportException.c)
 *     RtlInitBarrier @ 0x1800DBE80 (RtlInitBarrier.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800EE7E0 (RtlpCreateExecutionRequiredRequest.c)
 *     PsspDumpObject_Process @ 0x1800F61A0 (PsspDumpObject_Process.c)
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
