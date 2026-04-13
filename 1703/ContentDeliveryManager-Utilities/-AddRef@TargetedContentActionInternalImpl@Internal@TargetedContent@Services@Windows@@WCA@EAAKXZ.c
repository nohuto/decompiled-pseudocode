/*
 * XREFs of ?AddRef@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@WCA@EAAKXZ @ 0x18001EC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::AddRef(
        __int64 a1)
{
  return ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::AddRef((ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *)(a1 - 32));
}
