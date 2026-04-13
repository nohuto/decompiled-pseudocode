/*
 * XREFs of ??1?$MakeAllocator@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180013624
 * Callers:
 *     _ContentManagement::ContentManagementBrokerServer::get_AppManager_::_1_::dtor$2 @ 0x180059DDF (_ContentManagement--ContentManagementBrokerServer--get_AppManager_--_1_--dtor$2.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_ContextualSuggestionsManager_::_1_::dtor$2 @ 0x180059E09 (_ContentManagement--ContentManagementBrokerServer--get_ContextualSuggestionsManager_ea_180059E09.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_ThumbnailCacheHelper_::_1_::dtor$2 @ 0x180059E33 (_ContentManagement--ContentManagementBrokerServer--get_ThumbnailCacheHelper_--_1_--dtor$2.c)
 *     _ContentManagement::ContentManagementBrokerServer::get_NotificationManager_::_1_::dtor$2 @ 0x180059E5D (_ContentManagement--ContentManagementBrokerServer--get_NotificationManager_--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl_ContentManagement::TargetedContent::Internal::ISubscriptionManager__::_1_::dtor$1 @ 0x18005B871 (_Microsoft--WRL--Details--MakeAndInitialize_ContentManagement--TargetedContent--Int_ea_18005B871.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ContentManagement::TargetedContent::ContentCollectionImpl_ContentManagement::TargetedContent::ITargetedContentCollection_HSTRING_______ptr64_HSTRING_______ptr64_Windows::Data::Json::IJsonObject_____ptr64_unsigned_int_____ptr64__::_1_::dtor$1 @ 0x18005C044 (_Microsoft--WRL--Details--MakeAndInitialize_ContentManagement--TargetedContent--Con_ea_18005C044.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ContentManagement::TargetedContent::ContentItemImpl_ContentManagement::TargetedContent::ITargetedContentItem_HSTRING_______ptr64_&___ptr64_HSTRING_______ptr64_&___ptr64_Windows::Data::Json::IJsonObject_____ptr64_unsigned_int_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x18005C732 (_Microsoft--WRL--Details--MakeAndInitialize_ContentManagement--TargetedContent--Con_ea_18005C732.c)
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
