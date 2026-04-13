/*
 * XREFs of ?Release@ContextualSuggestionsManager@ContentManagement@@WCI@EAAKXZ @ 0x180006050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::ContextualSuggestionsManager::Release(__int64 a1)
{
  return ContentManagement::AppContainerCreativeEventReportedCache::Release((ContentManagement::AppContainerCreativeEventReportedCache *)(a1 - 40));
}
