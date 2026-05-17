/*
 * XREFs of NtFlushInstallUILanguage @ 0x180094680
 * Callers:
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180080E50 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetInstallLanguage @ 0x1800D66B0 (RtlpSetInstallLanguage.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800E8750 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     <none>
 */

__int64 NtFlushInstallUILanguage()
{
  __int64 result; // rax

  result = 216LL;
  __asm { syscall; Low latency system call }
  return result;
}
