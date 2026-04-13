/*
 * XREFs of ??1NotifySubscriptionListenersActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18003D79C
 * Callers:
 *     _ContentManagement::TargetedContent::SubscriptionImpl::NotifySubscribersIfNecessary_::_1_::dtor$0 @ 0x18005BEE5 (_ContentManagement--TargetedContent--SubscriptionImpl--NotifySubscribersIfNecessary_--_1_--dtor$.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800365A4 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0C.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::NotifySubscriptionListenersActivity::~NotifySubscriptionListenersActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::NotifySubscriptionListenersActivity *this)
{
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::NotifySubscriptionListenersActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
