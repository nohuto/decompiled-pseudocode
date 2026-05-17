/*
 * XREFs of ZwEnumerateValueKey @ 0x180093A30
 * Callers:
 *     RtlpQueryRegistryValues @ 0x18000D754 (RtlpQueryRegistryValues.c)
 *     RtlpPopulateLanguageConfigList @ 0x180049D70 (RtlpPopulateLanguageConfigList.c)
 *     RtlpLookupSafeCurDirList @ 0x1800C941C (RtlpLookupSafeCurDirList.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1800E8E90 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1800E947C (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

__int64 ZwEnumerateValueKey()
{
  __int64 result; // rax

  result = 19LL;
  __asm { syscall; Low latency system call }
  return result;
}
