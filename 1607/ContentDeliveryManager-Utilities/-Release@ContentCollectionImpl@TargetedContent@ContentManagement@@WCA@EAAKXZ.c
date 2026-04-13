/*
 * XREFs of ?Release@ContentCollectionImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ @ 0x180048200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::TargetedContent::ContentCollectionImpl::Release(__int64 a1)
{
  return ContentManagement::TargetedContent::SubscriptionImpl::Release((ContentManagement::TargetedContent::SubscriptionImpl *)(a1 - 32));
}
