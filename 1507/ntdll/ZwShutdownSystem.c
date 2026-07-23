/*
 * XREFs of ZwShutdownSystem @ 0x180095280
 * Callers:
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180080E50 (RtlpVerifyAndCommitUILanguageSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwShutdownSystem(SHUTDOWN_ACTION Action)
{
  NTSTATUS result; // eax

  result = 408;
  __asm { syscall; Low latency system call }
  return result;
}
