/*
 * XREFs of ??1?$MakeAllocator@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180015EBC
 * Callers:
 *     _ContentManagement::ContentManagementBrokerServer::get_ContextualSuggestionsManager_::_1_::dtor$2 @ 0x180070A37 (_ContentManagement--ContentManagementBrokerServer--get_ContextualSuggestionsManager_ea_180070A37.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_ThumbnailCacheHelper_::_1_::dtor$2 @ 0x180070A5B (_ContentManagement--ContentManagementBrokerServer--get_ThumbnailCacheHelper_--_1_--dtor$2.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_FeatureManager_::_1_::dtor$2 @ 0x180070A97 (_ContentManagement--ContentManagementBrokerServer--get_FeatureManager_--_1_--dtor$2.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_IdentityManager_::_1_::dtor$1 @ 0x180070AAF (_ContentManagement--ContentManagementBrokerServer--get_IdentityManager_--_1_--dtor$1.c)
 *     _ContentDeliveryManager::Background::CorrelationVectorWrapper::CorrelationVectorWrapper_::_1_::dtor$0 @ 0x18007109D (_ContentDeliveryManager--Background--CorrelationVectorWrapper--CorrelationVectorWrapper_--_1_--d.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl_ContentManagement::TargetedContent::Internal::ISubscriptionManager__::_1_::dtor$1 @ 0x1800722DB (_Microsoft--WRL--Details--MakeAndInitialize_ContentManagement--TargetedContent--Int_ea_1800722DB.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::CreateAction_::_1_::dtor$3 @ 0x18007259D (_Windows--Services--TargetedContent--Internal--TargetedContentActionStatics--Create_ea_18007259D.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl>::~MakeAllocator<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
