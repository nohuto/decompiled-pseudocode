/*
 * XREFs of ?SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z @ 0x180025844
 * Callers:
 *     ?SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x18002A2B0 (-SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEv.c)
 *     ?RefreshSubscriptionLastAccessed@SubscribedContentStore@CreativeFramework@@YAXPEBG@Z @ 0x180038F3C (-RefreshSubscriptionLastAccessed@SubscribedContentStore@CreativeFramework@@YAXPEBG@Z.c)
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180039970 (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x180022CC8 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::SetFileTimeSetting(
        const WCHAR *this,
        LPCWSTR lpValueName,
        unsigned __int64 a3,
        struct _FILETIME a4)
{
  const char *v6; // r9
  __int64 result; // rax
  const WCHAR *v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = (unsigned int)a3 + (HIDWORD(a3) << 32);
  v6 = (const char *)(unsigned int)RegSetKeyValueW(HKEY_CURRENT_USER, this, lpValueName, 0xBu, &v10, 8u);
  result = 0LL;
  if ( (_DWORD)v6 )
  {
    v8 = &word_180091F08;
    if ( lpValueName )
      v8 = lpValueName;
    return wil::details::in1diag3::Return_Win32Msg(
             retaddr,
             (void *)0x60,
             (__int64)"internal\\shell\\inc\\contentdeliverymanagersettings.h",
             v6,
             (__int64)"RegKey: %ws %ws",
             (const char *)this,
             v8);
  }
  return result;
}
