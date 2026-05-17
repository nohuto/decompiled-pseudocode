/*
 * XREFs of ZwEnumerateValueKey @ 0x1800A6680
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1800579F4 (RtlpQueryRegistryValues.c)
 *     RtlpPopulateLanguageConfigList @ 0x180071B10 (RtlpPopulateLanguageConfigList.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DA2C0 (RtlpLookupSafeCurDirList.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1800F5ED4 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1800F64AC (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

__int64 ZwEnumerateValueKey()
{
  __int64 result; // rax

  result = 19LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
