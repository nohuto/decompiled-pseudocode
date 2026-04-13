/*
 * XREFs of ?Release@ContextualSuggestionsManager@ContentManagement@@W7EAAKXZ @ 0x180017BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::ContextualSuggestionsManager::Release(__int64 a1)
{
  return ContentManagement::ThumbnailCacheHelper::Release((ContentManagement::ThumbnailCacheHelper *)(a1 - 8));
}
