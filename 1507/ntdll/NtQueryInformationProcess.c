/*
 * XREFs of NtQueryInformationProcess @ 0x180093A90
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x180032E50 (RtlpSubSegmentInitialize.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180034CA8 (RtlpHeapGenerateRandomValue32.c)
 *     WerpGlobalFlagsForProcess @ 0x180045C44 (WerpGlobalFlagsForProcess.c)
 *     WerpProcessId @ 0x180045EA0 (WerpProcessId.c)
 *     PsspCaptureProcessInformation @ 0x1800595B4 (PsspCaptureProcessInformation.c)
 *     PsspCaptureHandleTrace @ 0x180059734 (PsspCaptureHandleTrace.c)
 *     RtlpCallVectoredHandlers @ 0x18005F7F4 (RtlpCallVectoredHandlers.c)
 *     RtlDecodePointer @ 0x180066340 (RtlDecodePointer.c)
 *     RtlEncodePointer @ 0x180067200 (RtlEncodePointer.c)
 *     RtlQueryProcessDebugInformation @ 0x180068A40 (RtlQueryProcessDebugInformation.c)
 *     LdrpLogLoadFailureEtwEvent @ 0x180073030 (LdrpLogLoadFailureEtwEvent.c)
 *     RtlSetProcessIsCritical @ 0x180081A00 (RtlSetProcessIsCritical.c)
 *     LdrpQueryInformationCurrentProcess @ 0x180081BF0 (LdrpQueryInformationCurrentProcess.c)
 *     PsspCaptureHandleInformation @ 0x180082508 (PsspCaptureHandleInformation.c)
 *     PsspDumpObject_Process @ 0x180082EB0 (PsspDumpObject_Process.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     RtlCreateProcessReflection @ 0x1800C1540 (RtlCreateProcessReflection.c)
 *     RtlWow64SuspendThreadEx @ 0x1800C7020 (RtlWow64SuspendThreadEx.c)
 *     RtlDecodeRemotePointer @ 0x1800C7430 (RtlDecodeRemotePointer.c)
 *     RtlEncodeRemotePointer @ 0x1800C74A0 (RtlEncodeRemotePointer.c)
 *     IsDebugPortPresent @ 0x1800C7504 (IsDebugPortPresent.c)
 *     RtlReportException @ 0x1800C7550 (RtlReportException.c)
 *     SetAssertBufferPtrinPeb @ 0x1800C80A8 (SetAssertBufferPtrinPeb.c)
 *     RtlInitBarrier @ 0x1800D3B90 (RtlInitBarrier.c)
 *     RtlpInitRandomExVector @ 0x1800E5630 (RtlpInitRandomExVector.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1800EA934 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpGetModifiedProcessCookie @ 0x1800EEDD8 (RtlpGetModifiedProcessCookie.c)
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
  __asm { syscall; Low latency system call }
  return result;
}
