/*
 * XREFs of ZwGetContextThread @ 0x1800A80D0
 * Callers:
 *     PsspDumpThread @ 0x180005574 (PsspDumpThread.c)
 *     RtlRemoteCall @ 0x1800F06A0 (RtlRemoteCall.c)
 *     RtlpSaveUmsDebugRegisterState @ 0x1800FCBA4 (RtlpSaveUmsDebugRegisterState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  NTSTATUS result; // eax

  result = 230;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
