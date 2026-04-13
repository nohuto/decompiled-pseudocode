/*
 * XREFs of ?Release@ContentDeliveryManagerConfigurationStatics@ContentManagement@@UEAAKXZ @ 0x18001FC30
 * Callers:
 *     ?Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ @ 0x180022570 (-Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCA@EAAKXZ.c)
 *     ?Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@W7EAAKXZ @ 0x180022730 (-Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::ContentDeliveryManagerConfigurationStatics::Release(
        ContentManagement::ContentDeliveryManagerConfigurationStatics *this)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerManagerStaticsInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(this);
}
