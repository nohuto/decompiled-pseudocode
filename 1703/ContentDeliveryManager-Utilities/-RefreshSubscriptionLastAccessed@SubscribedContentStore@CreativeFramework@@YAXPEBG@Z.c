/*
 * XREFs of ?RefreshSubscriptionLastAccessed@SubscribedContentStore@CreativeFramework@@YAXPEBG@Z @ 0x180038F3C
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180039970 (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z @ 0x180025844 (-SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x18002BE9C (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::SubscribedContentStore::RefreshSubscriptionLastAccessed(
        CreativeFramework::SubscribedContentStore *this,
        const unsigned __int16 *a2)
{
  int v2; // eax
  WCHAR *v3; // rbx
  struct _FILETIME v4; // r9
  int v5; // eax
  LPVOID pv[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+60h] [rbp+18h] BYREF

  memset(pv, 0, 24);
  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)pv,
         L"%s\\%s",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
         this,
         -2LL);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x8B,
      (__int64)"internal\\shell\\inc\\subscribedcontentstore.h",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = (WCHAR *)pv[0];
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v5 = CreativeFramework::ContentDeliveryManagerSettings::SetFileTimeSetting(
         v3,
         L"LastAccessed",
         *(_QWORD *)&SystemTimeAsFileTime,
         v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xB9,
      (__int64)"internal\\shell\\inc\\subscribedcontentstore.h",
      (const char *)(unsigned int)v5);
  if ( v3 )
    CoTaskMemFree(v3);
}
