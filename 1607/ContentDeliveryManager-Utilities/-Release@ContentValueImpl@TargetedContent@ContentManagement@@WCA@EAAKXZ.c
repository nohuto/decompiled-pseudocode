/*
 * XREFs of ?Release@ContentValueImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ @ 0x180017A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::TargetedContent::ContentValueImpl::Release(__int64 a1)
{
  return ContentManagement::ThumbnailCacheHelper::Release((ContentManagement::ThumbnailCacheHelper *)(a1 - 32));
}
