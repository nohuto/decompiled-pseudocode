/*
 * XREFs of ?Release@ContentCollectionImpl@TargetedContent@ContentManagement@@WDA@EAAKXZ @ 0x1800484D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::TargetedContent::ContentCollectionImpl::Release(__int64 a1)
{
  return ContentManagement::TargetedContent::SubscriptionImpl::Release((ContentManagement::TargetedContent::SubscriptionImpl *)(a1 - 48));
}
