/*
 * XREFs of ZwShutdownSystem @ 0x180095280
 * Callers:
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180080E50 (RtlpVerifyAndCommitUILanguageSettings.c)
 * Callees:
 *     <none>
 */

__int64 ZwShutdownSystem()
{
  __int64 result; // rax

  result = 408LL;
  __asm { syscall; Low latency system call }
  return result;
}
