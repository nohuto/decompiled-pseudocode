/*
 * XREFs of ?GetIids@ContextualSuggestionsManager@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180018200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContextualSuggestionsManager::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return ContentManagement::ContextualSuggestionsManager::GetIids(
           (ContentManagement::ContextualSuggestionsManager *)(a1 - 40),
           a2,
           a3);
}
