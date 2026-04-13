/*
 * XREFs of ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x180004170
 * Callers:
 *     _CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList_::_1_::dtor$0 @ 0x180028706 (_CreativeFramework--LockScreenCategoryConfig--IsCallerInAllowedAppList_--_1_--dtor$0.c)
 *     _CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList_::_1_::dtor$1 @ 0x180028712 (_CreativeFramework--LockScreenCategoryConfig--IsCallerInAllowedAppList_--_1_--dtor$1.c)
 *     _ContentManagement::AppContainerCreativeEventReportedCache::IsEventReported_::_1_::dtor$4 @ 0x180028E73 (_ContentManagement--AppContainerCreativeEventReportedCache--IsEventReported_--_1_--dtor$4.c)
 *     _ContentManagement::AppContainerCreativeEventReportedCache::SetEventReported_::_1_::dtor$5 @ 0x180028EC1 (_ContentManagement--AppContainerCreativeEventReportedCache--SetEventReported_--_1_--dtor$5.c)
 *     _ContentManagement::AppContainerCreativeEventReportedCache::IsReportedEventExpired_::_1_::dtor$4 @ 0x180028F03 (_ContentManagement--AppContainerCreativeEventReportedCache--IsReportedEventExpired_--_1_--dtor$4.c)
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
