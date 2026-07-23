/*
 * XREFs of NtIsUILanguageComitted @ 0x1800A6F50
 * Callers:
 *     RtlpGetSystemDefaultUILanguage @ 0x18003EB40 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpCleanupRegistryKeys @ 0x1800DD3A0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800DE4C0 (RtlpSetInstallLanguage.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1800ED408 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1800ED74C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1800EDC6C (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

NTSTATUS NtIsUILanguageComitted(void)
{
  NTSTATUS result; // eax

  result = 245;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
