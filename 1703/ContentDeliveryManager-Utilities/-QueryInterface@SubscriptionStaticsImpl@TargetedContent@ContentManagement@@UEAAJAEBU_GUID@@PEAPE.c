/*
 * XREFs of ?QueryInterface@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001FC20
 * Callers:
 *     ?QueryInterface@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022640 (-QueryInterface@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCA@EAAJAEBU_GUID@@PE.c)
 *     ?QueryInterface@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022800 (-QueryInterface@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@W7EAAJAEBU_GUID@@PEAP.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::TargetedContent::SubscriptionStaticsImpl::QueryInterface(
        ContentManagement::TargetedContent::SubscriptionStaticsImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::TargetedContent::ITargetedContentSubscriptionStatics,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::QueryInterface(
           this,
           a2,
           a3);
}
