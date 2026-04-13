/*
 * XREFs of ??1QueueContentUpdateRetryActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18003C65C
 * Callers:
 *     _ContentManagement::TargetedContent::SubscriptionImpl::QueueContentUpdateRetryNoLock_::_1_::dtor$0 @ 0x18005BDAB (_ContentManagement--TargetedContent--SubscriptionImpl--QueueContentUpdateRetryNoLock_--_1_--dtor.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800416F0 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0E.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::QueueContentUpdateRetryActivity::~QueueContentUpdateRetryActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::QueueContentUpdateRetryActivity *this)
{
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::QueueContentUpdateRetryActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
