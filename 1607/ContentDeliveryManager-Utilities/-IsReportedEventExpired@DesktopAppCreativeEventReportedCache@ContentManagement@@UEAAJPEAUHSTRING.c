/*
 * XREFs of ?IsReportedEventExpired@DesktopAppCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x180023210
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@Z @ 0x18001E18C (-GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z @ 0x18001E340 (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z.c)
 *     ?DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x18001E46C (-DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z.c)
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18001EED0 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJW4CreativeEventType@1@PEAUHSTRING__@@PEAPEAG@Z @ 0x18002141C (-GetCreativeEventString@ContentManagement@@YAJW4CreativeEventType@1@PEAUHSTRING__@@PEAPEAG@Z.c)
 *     ?GetCreativeEventCacheRegPath@DesktopAppCreativeEventReportedCache@ContentManagement@@AEAAJPEBGPEAPEAG@Z @ 0x180022B34 (-GetCreativeEventCacheRegPath@DesktopAppCreativeEventReportedCache@ContentManagement@@AEAAJPEBGP.c)
 *     ?GetCreativeEventCacheEventReportedCacheRegPath@DesktopAppCreativeEventReportedCache@ContentManagement@@AEAAJPEBGPEAPEAG@Z @ 0x180022BC0 (-GetCreativeEventCacheEventReportedCacheRegPath@DesktopAppCreativeEventReportedCache@ContentMana.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ContentManagement::DesktopAppCreativeEventReportedCache::IsReportedEventExpired(
        const unsigned __int16 **a1,
        HSTRING a2,
        int a3,
        HSTRING a4,
        struct _FILETIME SystemTimeAsFileTime)
{
  bool *v8; // r12
  int CreativeEventCacheRegPath; // eax
  bool *v10; // r9
  unsigned int v11; // ebx
  WCHAR *v12; // r14
  __int64 v13; // rdx
  int StringSetting; // eax
  WCHAR *v15; // r15
  const WCHAR *StringRawBuffer; // rax
  int CreativeEventString; // eax
  ContentManagement::DesktopAppCreativeEventReportedCache *v18; // rcx
  WCHAR *v19; // rsi
  int CreativeEventCacheEventReportedCacheRegPath; // eax
  bool *v21; // r9
  WCHAR *v22; // rdi
  __int64 v23; // rdx
  __int64 v25; // rbx
  WCHAR *v26; // rax
  unsigned __int64 ImpressionEventExpirationTime; // rbx
  CreativeFramework::ContentDeliveryManagerSettings *v28[3]; // [rsp+38h] [rbp-41h] BYREF
  LPCWCH lpString1[3]; // [rsp+50h] [rbp-29h] BYREF
  LPCWSTR lpValue[3]; // [rsp+68h] [rbp-11h] BYREF
  LPVOID pv[5]; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]
  unsigned __int16 v33; // [rsp+E8h] [rbp+6Fh] BYREF

  pv[3] = (LPVOID)-2LL;
  v8 = (bool *)SystemTimeAsFileTime;
  *(_BYTE *)SystemTimeAsFileTime.dwLowDateTime = 0;
  if ( a3 )
    return 0LL;
  v28[0] = 0LL;
  v28[1] = (CreativeFramework::ContentDeliveryManagerSettings *)-1LL;
  v28[2] = (CreativeFramework::ContentDeliveryManagerSettings *)-1LL;
  CreativeEventCacheRegPath = ContentManagement::DesktopAppCreativeEventReportedCache::GetCreativeEventCacheRegPath(
                                (ContentManagement::DesktopAppCreativeEventReportedCache *)a1,
                                a1[3],
                                (unsigned __int16 **)v28);
  v11 = CreativeEventCacheRegPath;
  v12 = (WCHAR *)v28[0];
  if ( CreativeEventCacheRegPath >= 0 )
  {
    CreativeEventCacheRegPath = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                                  (const WCHAR *)v28[0],
                                  L"LastCreativeId",
                                  &v33,
                                  v10);
    v11 = CreativeEventCacheRegPath;
    if ( CreativeEventCacheRegPath < 0 )
    {
      v13 = 934LL;
      goto LABEL_6;
    }
    if ( (_BYTE)v33 )
    {
      lpString1[0] = 0LL;
      lpString1[1] = (LPCWCH)-1LL;
      lpString1[2] = (LPCWCH)-1LL;
      StringSetting = CreativeFramework::ContentDeliveryManagerSettings::GetStringSetting(
                        v12,
                        L"LastCreativeId",
                        0LL,
                        lpString1);
      v11 = StringSetting;
      v15 = (WCHAR *)lpString1[0];
      if ( StringSetting < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3AA,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)StringSetting);
LABEL_24:
        if ( v15 )
          CoTaskMemFree(v15);
        goto LABEL_26;
      }
      StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
      if ( CompareStringOrdinal(v15, -1, StringRawBuffer, -1, 1) == 2 )
      {
        lpValue[0] = 0LL;
        lpValue[1] = (LPCWSTR)-1LL;
        lpValue[2] = (LPCWSTR)-1LL;
        CreativeEventString = ContentManagement::GetCreativeEventString(0, a4, lpValue);
        v11 = CreativeEventString;
        v19 = (WCHAR *)lpValue[0];
        if ( CreativeEventString < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3AE,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
            (const char *)(unsigned int)CreativeEventString);
LABEL_22:
          if ( v19 )
            CoTaskMemFree(v19);
          goto LABEL_24;
        }
        pv[0] = 0LL;
        pv[1] = (LPVOID)-1LL;
        pv[2] = (LPVOID)-1LL;
        CreativeEventCacheEventReportedCacheRegPath = ContentManagement::DesktopAppCreativeEventReportedCache::GetCreativeEventCacheEventReportedCacheRegPath(
                                                        v18,
                                                        a1[3],
                                                        (unsigned __int16 **)pv);
        v11 = CreativeEventCacheEventReportedCacheRegPath;
        v22 = (WCHAR *)pv[0];
        if ( CreativeEventCacheEventReportedCacheRegPath < 0 )
        {
          v23 = 945LL;
          goto LABEL_20;
        }
        CreativeEventCacheEventReportedCacheRegPath = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                                                        (const WCHAR *)pv[0],
                                                        v19,
                                                        &v33,
                                                        v21);
        v11 = CreativeEventCacheEventReportedCacheRegPath;
        if ( CreativeEventCacheEventReportedCacheRegPath < 0 )
        {
          v23 = 949LL;
          goto LABEL_20;
        }
        if ( (_BYTE)v33 )
        {
          CreativeEventCacheEventReportedCacheRegPath = CreativeFramework::ContentDeliveryManagerSettings::GetFileTimeSetting(
                                                          v22,
                                                          v19,
                                                          0LL,
                                                          &SystemTimeAsFileTime);
          v11 = CreativeEventCacheEventReportedCacheRegPath;
          if ( CreativeEventCacheEventReportedCacheRegPath < 0 )
          {
            v23 = 955LL;
LABEL_20:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v23,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
              (const char *)(unsigned int)CreativeEventCacheEventReportedCacheRegPath);
            if ( v22 )
              CoTaskMemFree(v22);
            goto LABEL_22;
          }
          v25 = SystemTimeAsFileTime.dwLowDateTime + ((unsigned __int64)SystemTimeAsFileTime.dwHighDateTime << 32);
          v26 = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
          ImpressionEventExpirationTime = anonymous_namespace_::GetImpressionEventExpirationTime(0LL, v26, v25);
          GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
          *v8 = SystemTimeAsFileTime.dwLowDateTime + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32) >= ImpressionEventExpirationTime;
        }
        if ( v22 )
          CoTaskMemFree(v22);
        if ( v19 )
          CoTaskMemFree(v19);
      }
      if ( v15 )
        CoTaskMemFree(v15);
    }
    if ( v12 )
      CoTaskMemFree(v12);
    return 0LL;
  }
  v13 = 931LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)CreativeEventCacheRegPath);
LABEL_26:
  if ( v12 )
    CoTaskMemFree(v12);
  return v11;
}
