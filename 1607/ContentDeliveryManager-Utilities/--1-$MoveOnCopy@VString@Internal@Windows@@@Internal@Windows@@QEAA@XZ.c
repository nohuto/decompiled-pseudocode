/*
 * XREFs of ??1?$MoveOnCopy@VString@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x180003D48
 * Callers:
 *     _ContentManagement::ThumbnailCacheHelper::AddThumbnailToCacheAsync_::_1_::dtor$0 @ 0x180059D67 (_ContentManagement--ThumbnailCacheHelper--AddThumbnailToCacheAsync_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$0 @ 0x18005A49A (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$0.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$1 @ 0x18005A4A6 (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$1.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$2 @ 0x18005A4B2 (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$2.c)
 *     _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$3 @ 0x18005A4BE (_ContentManagement--ContentManagementService--ProcessCreativeEventAsync_--_1_--dtor$3.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$8 @ 0x18005B1DE (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$8.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$9 @ 0x18005B1EA (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$9.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$4 @ 0x18005B292 (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$4.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$5 @ 0x18005B29E (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$5.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$4 @ 0x18005B432 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_18005B432.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$5 @ 0x18005B43E (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_18005B43E.c)
 *     _ContentManagement::TargetedContent::CollectionFromAppServiceResponse_::_1_::dtor$3 @ 0x18005BBD6 (_ContentManagement--TargetedContent--CollectionFromAppServiceResponse_--_1_--dtor$3.c)
 *     _ContentManagement::TargetedContent::CollectionFromAppServiceResponse_::_1_::dtor$4 @ 0x18005BBE2 (_ContentManagement--TargetedContent--CollectionFromAppServiceResponse_--_1_--dtor$4.c)
 *     _ContentManagement::TargetedContent::CollectionFromAppServiceResponse_::_1_::dtor$5 @ 0x18005BBEE (_ContentManagement--TargetedContent--CollectionFromAppServiceResponse_--_1_--dtor$5.c)
 *     _ContentManagement::TargetedContent::SubscriptionImpl::_SubscriptionImpl_::_1_::dtor$1 @ 0x18005BC24 (_ContentManagement--TargetedContent--SubscriptionImpl--_SubscriptionImpl_--_1_--dtor$1.c)
 *     _ContentManagement::TargetedContent::SubscriptionStaticsImpl::GetSubscriptionAsync_::_1_::dtor$0 @ 0x18005BF0F (_ContentManagement--TargetedContent--SubscriptionStaticsImpl--GetSubscriptionAsync_--_1_--dtor$0.c)
 *     _ContentManagement::TargetedContent::TryGetMatchingEventTokenForInteractionName_::_1_::dtor$5 @ 0x18005C330 (_ContentManagement--TargetedContent--TryGetMatchingEventTokenForInteractionName_--_1_--dtor$5.c)
 *     _ContentManagement::TargetedContent::TryReportInteraction_::_1_::dtor$2 @ 0x18005C366 (_ContentManagement--TargetedContent--TryReportInteraction_--_1_--dtor$2.c)
 *     _ContentManagement::TargetedContent::ContentItemImpl::RuntimeClassInitialize_::_1_::dtor$5 @ 0x18005C431 (_ContentManagement--TargetedContent--ContentItemImpl--RuntimeClassInitialize_--_1_--dtor$5.c)
 *     _ContentManagement::TargetedContent::ContentItemImpl::RuntimeClassInitialize_::_1_::dtor$10 @ 0x18005C4A6 (_ContentManagement--TargetedContent--ContentItemImpl--RuntimeClassInitialize_--_1_--dtor$10.c)
 *     _ContentManagement::TargetedContent::StringContentValueFromJson_::_1_::dtor$0 @ 0x18005C4E2 (_ContentManagement--TargetedContent--StringContentValueFromJson_--_1_--dtor$0.c)
 *     _ContentManagement::TargetedContent::UriContentValueFromJson_::_1_::dtor$0 @ 0x18005C546 (_ContentManagement--TargetedContent--UriContentValueFromJson_--_1_--dtor$0.c)
 *     _ContentManagement::TargetedContent::GetStreamRefFromJson_::_1_::dtor$0 @ 0x18005C5C2 (_ContentManagement--TargetedContent--GetStreamRefFromJson_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::MoveOnCopy<Windows::Internal::String>::~MoveOnCopy<Windows::Internal::String>(
        HSTRING *a1)
{
  HSTRING v1; // rcx
  HRESULT result; // eax

  v1 = *a1;
  if ( v1 )
    return WindowsDeleteString(v1);
  return result;
}
