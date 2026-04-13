/*
 * XREFs of ?QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180038290
 * Callers:
 *     ?QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003F760 (-QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBI@EAAJAEBU.c)
 *     ?QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003F7F0 (-QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@W7EAAJAEBU_G.c)
 *     ?QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003F860 (-QueryInterface@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@WBA@EAAJAEBU.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::QueryInterface(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ContentManagement::TargetedContent::Internal::ISubscriptionManager,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::CloakedIid<ContentManagement::TargetedContent::Internal::IPartialTrustSubscriptionFactory>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
