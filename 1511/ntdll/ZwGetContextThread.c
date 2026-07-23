/*
 * XREFs of ZwGetContextThread @ 0x1800A6D30
 * Callers:
 *     PsspDumpThread @ 0x18008B79C (PsspDumpThread.c)
 *     RtlRemoteCall @ 0x1800E74C0 (RtlRemoteCall.c)
 *     RtlpSaveUmsDebugRegisterState @ 0x1800F34E4 (RtlpSaveUmsDebugRegisterState.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwGetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  NTSTATUS result; // eax

  result = 228;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
