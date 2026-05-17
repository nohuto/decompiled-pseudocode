/*
 * XREFs of RtlpMuiRegFreeStringPool @ 0x180047C60
 * Callers:
 *     RtlCleanUpTEBLangLists @ 0x1800475E0 (RtlCleanUpTEBLangLists.c)
 *     RtlpUpdateTEBLanguage @ 0x180048904 (RtlpUpdateTEBLanguage.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800491B0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x1800493C4 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegResizeStringPool @ 0x1800E848C (RtlpMuiRegResizeStringPool.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpMuiRegFreeStringPool(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return result;
}
