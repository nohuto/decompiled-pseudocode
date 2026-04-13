/*
 * XREFs of ?AddRef@SubscriptionImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ @ 0x180048430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::TargetedContent::SubscriptionImpl::AddRef(__int64 a1)
{
  return ContentManagement::TargetedContent::ContentCollectionImpl::AddRef((ContentManagement::TargetedContent::ContentCollectionImpl *)(a1 - 32));
}
