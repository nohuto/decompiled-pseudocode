/*
 * XREFs of ZwResumeThread @ 0x1800A6E60
 * Callers:
 *     EtwpCreateEtwThread @ 0x1800543E0 (EtwpCreateEtwThread.c)
 *     RtlSetProcessDebugInformation @ 0x1800D53B0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendThreadEx @ 0x1800D82C0 (RtlWow64SuspendThreadEx.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA3FC (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x1800F06A0 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  NTSTATUS result; // eax

  result = 82;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
