/*
 * XREFs of ?Release@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAKXZ @ 0x18003B5A0
 * Callers:
 *     ?Release@ContentCollectionImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ @ 0x180048200 (-Release@ContentCollectionImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ.c)
 *     ?Release@SubscriptionImpl@TargetedContent@ContentManagement@@W7EAAKXZ @ 0x180048370 (-Release@SubscriptionImpl@TargetedContent@ContentManagement@@W7EAAKXZ.c)
 *     ?Release@SubscriptionImpl@TargetedContent@ContentManagement@@WCI@EAAKXZ @ 0x1800483A0 (-Release@SubscriptionImpl@TargetedContent@ContentManagement@@WCI@EAAKXZ.c)
 *     ?Release@ContentCollectionImpl@TargetedContent@ContentManagement@@WDA@EAAKXZ @ 0x1800484D0 (-Release@ContentCollectionImpl@TargetedContent@ContentManagement@@WDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::TargetedContent::SubscriptionImpl::Release(
        ContentManagement::TargetedContent::SubscriptionImpl *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentItem,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}
