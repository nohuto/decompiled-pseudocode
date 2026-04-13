/*
 * XREFs of ?Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAKXZ @ 0x180032A90
 * Callers:
 *     ?Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBI@EAAKXZ @ 0x18003A020 (-Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBI@EAAKXZ.c)
 *     ?Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@W7EAAKXZ @ 0x18003A0E0 (-Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@W7EAAKXZ.c)
 *     ?Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAKXZ @ 0x18003A170 (-Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::Release(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}
