/*
 * XREFs of ?Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAKXZ @ 0x180018D70
 * Callers:
 *     ?Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ @ 0x18001B460 (-Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ.c)
 *     ?Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@W7EAAKXZ @ 0x18001B590 (-Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::TargetedContent::SubscriptionStaticsImpl::Release(
        ContentManagement::TargetedContent::SubscriptionStaticsImpl *this)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(this);
}
