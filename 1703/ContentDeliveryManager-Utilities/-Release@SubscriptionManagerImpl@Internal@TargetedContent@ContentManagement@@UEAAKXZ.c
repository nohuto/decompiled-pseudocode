/*
 * XREFs of ?Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAKXZ @ 0x1800382A0
 * Callers:
 *     ?Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBI@EAAKXZ @ 0x18003F770 (-Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBI@EAAKXZ.c)
 *     ?Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@W7EAAKXZ @ 0x18003F820 (-Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@W7EAAKXZ.c)
 *     ?Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAKXZ @ 0x18003F880 (-Release@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::Release(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}
