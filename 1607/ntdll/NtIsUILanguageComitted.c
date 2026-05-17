/*
 * XREFs of NtIsUILanguageComitted @ 0x1800A82F0
 * Callers:
 *     RtlpGetSystemDefaultUILanguage @ 0x18003F6C0 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E65D0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800E76F0 (RtlpSetInstallLanguage.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1800F6178 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1800F64AC (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1800F69B8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

__int64 NtIsUILanguageComitted()
{
  __int64 result; // rax

  result = 247LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
