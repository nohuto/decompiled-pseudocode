/*
 * XREFs of ?AddRef@SubscriptionImpl@TargetedContent@ContentManagement@@WDA@EAAKXZ @ 0x1800481E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::TargetedContent::SubscriptionImpl::AddRef(__int64 a1)
{
  return ContentManagement::TargetedContent::ContentCollectionImpl::AddRef((ContentManagement::TargetedContent::ContentCollectionImpl *)(a1 - 48));
}
