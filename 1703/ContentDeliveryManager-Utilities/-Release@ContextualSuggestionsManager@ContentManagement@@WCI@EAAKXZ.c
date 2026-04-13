/*
 * XREFs of ?Release@ContextualSuggestionsManager@ContentManagement@@WCI@EAAKXZ @ 0x18001E710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::ContextualSuggestionsManager::Release(__int64 a1)
{
  return ContentManagement::ThumbnailCacheHelper::Release((ContentManagement::ThumbnailCacheHelper *)(a1 - 40));
}
