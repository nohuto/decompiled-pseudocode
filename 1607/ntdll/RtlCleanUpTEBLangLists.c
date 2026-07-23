/*
 * XREFs of RtlCleanUpTEBLangLists @ 0x1800705B0
 * Callers:
 *     RtlpCleanupRegistryKeys @ 0x1800E6690 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x180045F04 (RtlpMuiRegFreeLanguageList.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpMuiRegFreeStringPool @ 0x1800720C8 (RtlpMuiRegFreeStringPool.c)
 */

void RtlCleanUpTEBLangLists(void)
{
  PVOID *UserPrefLanguages; // rbx
  PVOID v1; // rcx

  RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
  NtCurrentTeb()->MergedPrefLanguages = 0LL;
  UserPrefLanguages = (PVOID *)NtCurrentTeb()->UserPrefLanguages;
  if ( UserPrefLanguages )
  {
    if ( *UserPrefLanguages )
      RtlpMuiRegFreeLanguageList(*UserPrefLanguages);
    v1 = UserPrefLanguages[1];
    if ( v1 )
      RtlpMuiRegFreeStringPool(v1);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, UserPrefLanguages);
  }
  NtCurrentTeb()->UserPrefLanguages = 0LL;
  RtlpMuiRegFreeLanguageList(NtCurrentTeb()->PreferredLanguages);
  NtCurrentTeb()->PreferredLanguages = 0LL;
  if ( NtCurrentTeb()->ResourceRetValue )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, NtCurrentTeb()->ResourceRetValue);
    NtCurrentTeb()->ResourceRetValue = 0LL;
  }
}
