/*
 * XREFs of RtlpMuiRegFreeStringPool @ 0x1800720C8
 * Callers:
 *     RtlCleanUpTEBLangLists @ 0x1800705B0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x180070EA0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x1800710B4 (RtlpLoadLanguageConfigList.c)
 *     RtlpUpdateTEBLanguage @ 0x180080E94 (RtlpUpdateTEBLanguage.c)
 *     RtlpMuiRegResizeStringPool @ 0x1800F5694 (RtlpMuiRegResizeStringPool.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 */

LOGICAL __fastcall RtlpMuiRegFreeStringPool(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( BaseAddress )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return result;
}
