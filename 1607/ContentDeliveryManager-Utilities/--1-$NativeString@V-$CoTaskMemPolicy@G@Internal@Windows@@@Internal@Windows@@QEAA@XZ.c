/*
 * XREFs of ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18000C350
 * Callers:
 *     _CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList_::_1_::dtor$0 @ 0x180059BB7 (_CreativeFramework--LockScreenCategoryConfig--IsCallerInAllowedAppList_--_1_--dtor$0.c)
 *     _CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList_::_1_::dtor$1 @ 0x180059BC3 (_CreativeFramework--LockScreenCategoryConfig--IsCallerInAllowedAppList_--_1_--dtor$1.c)
 *     _ContentManagement::AppContainerCreativeEventReportedCache::IsEventReported_::_1_::dtor$4 @ 0x18005A7BE (_ContentManagement--AppContainerCreativeEventReportedCache--IsEventReported_--_1_--dtor$4.c)
 *     _ContentManagement::AppContainerCreativeEventReportedCache::SetEventReported_::_1_::dtor$5 @ 0x18005A80C (_ContentManagement--AppContainerCreativeEventReportedCache--SetEventReported_--_1_--dtor$5.c)
 *     _ContentManagement::AppContainerCreativeEventReportedCache::IsReportedEventExpired_::_1_::dtor$4 @ 0x18005A84E (_ContentManagement--AppContainerCreativeEventReportedCache--IsReportedEventExpired_--_1_--dtor$4.c)
 *     _ContentManagement::DesktopAppCreativeEventReportedCache::IsReportedEventExpired_::_1_::dtor$0 @ 0x18005A860 (_ContentManagement--DesktopAppCreativeEventReportedCache--IsReportedEventExpired_--_1_--dtor$0.c)
 *     _ContentManagement::DesktopAppCreativeEventReportedCache::IsReportedEventExpired_::_1_::dtor$1 @ 0x18005A86C (_ContentManagement--DesktopAppCreativeEventReportedCache--IsReportedEventExpired_--_1_--dtor$1.c)
 *     _ContentManagement::DesktopAppCreativeEventReportedCache::IsReportedEventExpired_::_1_::dtor$2 @ 0x18005A878 (_ContentManagement--DesktopAppCreativeEventReportedCache--IsReportedEventExpired_--_1_--dtor$2.c)
 *     _ContentManagement::DesktopAppCreativeEventReportedCache::IsReportedEventExpired_::_1_::dtor$3 @ 0x18005A884 (_ContentManagement--DesktopAppCreativeEventReportedCache--IsReportedEventExpired_--_1_--dtor$3.c)
 *     _CreativeFramework::SubscribedContentStore::RefreshSubscriptionLastAccessed_::_1_::dtor$1 @ 0x18005B160 (_CreativeFramework--SubscribedContentStore--RefreshSubscriptionLastAccessed_--_1_--dtor$1.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$14 @ 0x18005B17E (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$14.c)
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$1 @ 0x18005B18A (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$1.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$11 @ 0x18005B256 (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$11.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$12 @ 0x18005B2B6 (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$12.c)
 *     _CreativeFramework::SubscribedContentStore::ActivateSubscriptionIfInactive_::_1_::dtor$14 @ 0x18005B2DA (_CreativeFramework--SubscribedContentStore--ActivateSubscriptionIfInactive_--_1_--dtor$14.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::OnContentUpdated_::_1_::dtor$6 @ 0x18005B5DB (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--OnContentUp_ea_18005B5DB.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    CoTaskMemFree(v2);
    *a1 = 0LL;
  }
  a1[1] = 0LL;
  a1[2] = 0LL;
}
