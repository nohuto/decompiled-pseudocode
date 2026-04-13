/*
 * XREFs of ??1OpenSubscribedContentFromAppServiceActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x18003BA9C
 * Callers:
 *     _ContentManagement::TargetedContent::CreateAppServiceConnection_::_1_::dtor$0 @ 0x18005BAE3 (_ContentManagement--TargetedContent--CreateAppServiceConnection_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800416F0 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0E.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::OpenSubscribedContentFromAppServiceActivity::~OpenSubscribedContentFromAppServiceActivity(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::OpenSubscribedContentFromAppServiceActivity *this)
{
  *(_QWORD *)this = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::OpenSubscribedContentFromAppServiceActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(this);
}
