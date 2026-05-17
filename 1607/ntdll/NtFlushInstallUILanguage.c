/*
 * XREFs of NtFlushInstallUILanguage @ 0x1800A7F70
 * Callers:
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008D890 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetInstallLanguage @ 0x1800E76F0 (RtlpSetInstallLanguage.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800F5790 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     <none>
 */

__int64 NtFlushInstallUILanguage()
{
  __int64 result; // rax

  result = 219LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
