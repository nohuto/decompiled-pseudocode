/*
 * XREFs of ZwResumeThread @ 0x1800A6E60
 * Callers:
 *     EtwpCreateEtwThread @ 0x1800543F0 (EtwpCreateEtwThread.c)
 *     RtlSetProcessDebugInformation @ 0x1800D52F0 (RtlSetProcessDebugInformation.c)
 *     RtlWow64SuspendThreadEx @ 0x1800D8200 (RtlWow64SuspendThreadEx.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA33C (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x1800F06A0 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

__int64 ZwResumeThread()
{
  __int64 result; // rax

  result = 82LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
