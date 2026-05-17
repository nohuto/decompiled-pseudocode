/*
 * XREFs of RtlCleanUpTEBLangLists @ 0x1800475E0
 * Callers:
 *     RtlpCleanupRegistryKeys @ 0x1800D5480 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800273D8 (RtlpMuiRegFreeLanguageList.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlpMuiRegFreeStringPool @ 0x180047C60 (RtlpMuiRegFreeStringPool.c)
 */

struct _TEB *RtlCleanUpTEBLangLists()
{
  __int64 *UserPrefLanguages; // rbx
  struct _TEB *result; // rax

  RtlpMuiRegFreeLanguageList((__int64)NtCurrentTeb()->MergedPrefLanguages);
  NtCurrentTeb()->MergedPrefLanguages = 0LL;
  UserPrefLanguages = (__int64 *)NtCurrentTeb()->UserPrefLanguages;
  if ( UserPrefLanguages )
  {
    if ( *UserPrefLanguages )
      RtlpMuiRegFreeLanguageList(*UserPrefLanguages);
    if ( UserPrefLanguages[1] )
      RtlpMuiRegFreeStringPool();
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)UserPrefLanguages);
  }
  NtCurrentTeb()->UserPrefLanguages = 0LL;
  RtlpMuiRegFreeLanguageList((__int64)NtCurrentTeb()->PreferredLanguages);
  NtCurrentTeb()->PreferredLanguages = 0LL;
  result = NtCurrentTeb();
  if ( result->ResourceRetValue )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)NtCurrentTeb()->ResourceRetValue);
    result = NtCurrentTeb();
    result->ResourceRetValue = 0LL;
  }
  return result;
}
