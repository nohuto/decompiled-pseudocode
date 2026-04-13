/*
 * XREFs of ?GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@Z @ 0x18001E18C
 * Callers:
 *     ?IsReportedEventExpired@DesktopAppCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x180023210 (-IsReportedEventExpired@DesktopAppCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING.c)
 *     ?GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA?AU_FILETIME@@PEBG@Z @ 0x180032D90 (-GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA-AU_FILETIME@@PEBG@Z.c)
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180033668 (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180002C2C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::GetFileTimeSetting(
        const WCHAR *this,
        LPCWSTR lpValue,
        const unsigned __int16 *a3,
        _QWORD *a4)
{
  __int64 v4; // rdi
  char v5; // bp
  LSTATUS ValueW; // eax
  signed int v10; // ebx
  const WCHAR *v11; // rax
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  DWORD v15; // [rsp+88h] [rbp+20h] BYREF

  v15 = 8;
  *a4 = 0LL;
  v4 = 0LL;
  v5 = (char)a3;
  ValueW = RegGetValueW(HKEY_CURRENT_USER, this, lpValue, 0x40u, 0LL, &v13, &v15);
  v10 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v10 = ValueW;
  if ( v10 >= 0 )
  {
    v4 = v13;
LABEL_10:
    v10 = 0;
    goto LABEL_11;
  }
  if ( v5 && v10 == -2147024894 )
    goto LABEL_10;
  v11 = &sourceString;
  if ( lpValue )
    v11 = lpValue;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x48,
    (__int64)"internal\\shell\\inc\\contentdeliverymanagersettings.h",
    (const char *)(unsigned int)v10,
    (__int64)"RegKey: %ws %ws",
    (const char *)this,
    v11);
LABEL_11:
  if ( v10 >= 0 )
  {
    *a4 = v4;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (__int64)"internal\\shell\\inc\\contentdeliverymanagersettings.h",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
}
