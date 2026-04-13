/*
 * XREFs of ??1GetSubscribedContentActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18003E84C
 * Callers:
 *     _ContentManagement::TargetedContent::SubscriptionImpl::GetContentAndQueueRetryIfAppropriate_::_1_::dtor$2 @ 0x18005BCF5 (_ContentManagement--TargetedContent--SubscriptionImpl--GetContentAndQueueRetryIfApp_ea_18005BCF5.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800416F0 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0E.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::GetSubscribedContentActivity::~GetSubscribedContentActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::GetSubscribedContentActivity *this)
{
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::GetSubscribedContentActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
