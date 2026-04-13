/*
 * XREFs of ?QueryInterface@ContextualSuggestionsManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180017C40
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
           (ContentManagement::ContextualSuggestionsManager *)(a1 - 8),
           a2,
           a3);
}
