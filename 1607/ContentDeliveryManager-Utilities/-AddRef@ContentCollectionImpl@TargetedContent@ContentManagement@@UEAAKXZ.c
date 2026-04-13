/*
 * XREFs of ?AddRef@ContentCollectionImpl@TargetedContent@ContentManagement@@UEAAKXZ @ 0x18003B5B0
 * Callers:
 *     ?AddRef@SubscriptionImpl@TargetedContent@ContentManagement@@WDA@EAAKXZ @ 0x1800481E0 (-AddRef@SubscriptionImpl@TargetedContent@ContentManagement@@WDA@EAAKXZ.c)
 *     ?AddRef@ContentItemImpl@TargetedContent@ContentManagement@@W7EAAKXZ @ 0x180048250 (-AddRef@ContentItemImpl@TargetedContent@ContentManagement@@W7EAAKXZ.c)
 *     ?AddRef@ContentItemImpl@TargetedContent@ContentManagement@@WCI@EAAKXZ @ 0x1800482A0 (-AddRef@ContentItemImpl@TargetedContent@ContentManagement@@WCI@EAAKXZ.c)
 *     ?AddRef@UpdatedEventArgsImpl@TargetedContent@ContentManagement@@WBI@EAAKXZ @ 0x1800482B0 (-AddRef@UpdatedEventArgsImpl@TargetedContent@ContentManagement@@WBI@EAAKXZ.c)
 *     ?AddRef@SubscriptionImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ @ 0x180048430 (-AddRef@SubscriptionImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::TargetedContent::ContentCollectionImpl::AddRef(
        ContentManagement::TargetedContent::ContentCollectionImpl *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentItem,Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::ITargetedContentInteractionReporter,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(this);
}
