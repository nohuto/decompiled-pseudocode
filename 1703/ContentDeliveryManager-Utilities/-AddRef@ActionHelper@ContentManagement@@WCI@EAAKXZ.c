/*
 * XREFs of ?AddRef@ActionHelper@ContentManagement@@WCI@EAAKXZ @ 0x18001EA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::ActionHelper::AddRef(__int64 a1)
{
  return ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::AddRef((ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *)(a1 - 40));
}
