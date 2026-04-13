/*
 * XREFs of ?AddRef@ThumbnailCacheHelper@ContentManagement@@WCI@EAAKXZ @ 0x180017B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::ThumbnailCacheHelper::AddRef(__int64 a1)
{
  return ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::AddRef((ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *)(a1 - 40));
}
