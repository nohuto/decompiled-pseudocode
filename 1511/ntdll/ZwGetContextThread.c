/*
 * XREFs of ZwGetContextThread @ 0x1800A6D30
 * Callers:
 *     PsspDumpThread @ 0x18008B79C (PsspDumpThread.c)
 *     RtlRemoteCall @ 0x1800E74C0 (RtlRemoteCall.c)
 *     RtlpSaveUmsDebugRegisterState @ 0x1800F34E4 (RtlpSaveUmsDebugRegisterState.c)
 * Callees:
 *     <none>
 */

__int64 ZwGetContextThread()
{
  __int64 result; // rax

  result = 228LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
