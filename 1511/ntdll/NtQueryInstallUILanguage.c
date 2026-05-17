/*
 * XREFs of NtQueryInstallUILanguage @ 0x1800A77F0
 * Callers:
 *     RtlpGetSystemDefaultUILanguage @ 0x18003EB40 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180088F80 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetPreferredUILanguages @ 0x1800DEC00 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x1800ECA20 (RtlpRefreshCachedUILanguage.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1800ED408 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1800ED74C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1800EDC6C (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInstallUILanguage()
{
  __int64 result; // rax

  result = 314LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
