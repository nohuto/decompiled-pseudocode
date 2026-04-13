/*
 * XREFs of ?Release@ActionHelper@ContentManagement@@WCA@EAAKXZ @ 0x18001E900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::ActionHelper::Release(__int64 a1)
{
  return ContentManagement::ThumbnailCacheHelper::Release((ContentManagement::ThumbnailCacheHelper *)(a1 - 32));
}
