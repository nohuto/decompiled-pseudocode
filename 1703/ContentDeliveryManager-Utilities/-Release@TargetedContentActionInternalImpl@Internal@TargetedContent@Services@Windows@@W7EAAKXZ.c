/*
 * XREFs of ?Release@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@W7EAAKXZ @ 0x18001EAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::Release(
        __int64 a1)
{
  return ContentManagement::ThumbnailCacheHelper::Release((ContentManagement::ThumbnailCacheHelper *)(a1 - 8));
}
