/*
 * XREFs of ?QueryInterface@ContextualSuggestionsManager@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContextualSuggestionsManager::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::ContextualSuggestionsManager::QueryInterface(
           (ContentManagement::ContextualSuggestionsManager *)(a1 - 32),
           a2,
           a3);
}
