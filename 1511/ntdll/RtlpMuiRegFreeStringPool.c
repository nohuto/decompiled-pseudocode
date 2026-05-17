/*
 * XREFs of RtlpMuiRegFreeStringPool @ 0x18007AAE4
 * Callers:
 *     RtlpLoadLanguageConfigList @ 0x180004EE8 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18003D640 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpUpdateTEBLanguage @ 0x18003EEF0 (RtlpUpdateTEBLanguage.c)
 *     RtlCleanUpTEBLangLists @ 0x18007A9E0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegResizeStringPool @ 0x1800EC920 (RtlpMuiRegResizeStringPool.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpMuiRegFreeStringPool(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return result;
}
