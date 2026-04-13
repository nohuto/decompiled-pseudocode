/*
 * XREFs of ?Release@ContextualSuggestionsManager@ContentManagement@@W7EAAKXZ @ 0x180006020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::ContextualSuggestionsManager::Release(__int64 a1)
{
  return ContentManagement::AppContainerCreativeEventReportedCache::Release((ContentManagement::AppContainerCreativeEventReportedCache *)(a1 - 8));
}
