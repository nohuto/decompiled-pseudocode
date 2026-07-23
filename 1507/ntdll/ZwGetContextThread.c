/*
 * XREFs of ZwGetContextThread @ 0x180094730
 * Callers:
 *     PsspDumpThread @ 0x180083200 (PsspDumpThread.c)
 *     RtlRemoteCall @ 0x1800E2420 (RtlRemoteCall.c)
 *     RtlpSaveUmsDebugRegisterState @ 0x1800F2FE4 (RtlpSaveUmsDebugRegisterState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  NTSTATUS result; // eax

  result = 227;
  __asm { syscall; Low latency system call }
  return result;
}
