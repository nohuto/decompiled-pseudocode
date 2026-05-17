/*
 * XREFs of RtlpMuiRegFreeStringPool @ 0x1800720D8
 * Callers:
 *     RtlCleanUpTEBLangLists @ 0x1800705C0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x180070EB0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x1800710C4 (RtlpLoadLanguageConfigList.c)
 *     RtlpUpdateTEBLanguage @ 0x180080EA4 (RtlpUpdateTEBLanguage.c)
 *     RtlpMuiRegResizeStringPool @ 0x1800F5694 (RtlpMuiRegResizeStringPool.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpMuiRegFreeStringPool(unsigned __int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return result;
}
