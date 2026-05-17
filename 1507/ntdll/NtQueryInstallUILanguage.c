/*
 * XREFs of NtQueryInstallUILanguage @ 0x180094C70
 * Callers:
 *     RtlpGetSystemDefaultUILanguage @ 0x18001F930 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180080E50 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetPreferredUILanguages @ 0x1800D6DF0 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800E8750 (RtlpRefreshCachedUILanguage.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1800E9138 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1800E947C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1800E999C (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInstallUILanguage()
{
  __int64 result; // rax

  result = 311LL;
  __asm { syscall; Low latency system call }
  return result;
}
