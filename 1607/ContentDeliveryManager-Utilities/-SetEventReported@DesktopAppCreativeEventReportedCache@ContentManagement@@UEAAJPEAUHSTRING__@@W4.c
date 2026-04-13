/*
 * XREFs of ?SetEventReported@DesktopAppCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x180022E90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180002C2C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x18001B708 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 *     ?SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z @ 0x18001E298 (-SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z @ 0x18001E340 (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z.c)
 *     ?DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x18001E46C (-DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJW4CreativeEventType@1@PEAUHSTRING__@@PEAPEAG@Z @ 0x18002141C (-GetCreativeEventString@ContentManagement@@YAJW4CreativeEventType@1@PEAUHSTRING__@@PEAPEAG@Z.c)
 *     ?GetCreativeEventCacheRegPath@DesktopAppCreativeEventReportedCache@ContentManagement@@AEAAJPEBGPEAPEAG@Z @ 0x180022B34 (-GetCreativeEventCacheRegPath@DesktopAppCreativeEventReportedCache@ContentManagement@@AEAAJPEBGP.c)
 *     ?GetCreativeEventCacheEventReportedCacheRegPath@DesktopAppCreativeEventReportedCache@ContentManagement@@AEAAJPEBGPEAPEAG@Z @ 0x180022BC0 (-GetCreativeEventCacheEventReportedCacheRegPath@DesktopAppCreativeEventReportedCache@ContentMana.c)
 */

__int64 __fastcall ContentManagement::DesktopAppCreativeEventReportedCache::SetEventReported(
        const unsigned __int16 **a1,
        HSTRING a2,
        unsigned int a3,
        HSTRING a4)
{
  const unsigned __int16 *v4; // rdx
  bool v5; // r12
  WCHAR *v7; // rdi
  int CreativeEventCacheRegPath; // eax
  ContentManagement::DesktopAppCreativeEventReportedCache *v9; // rcx
  WCHAR *v10; // r15
  int DoesSettingExist; // ebx
  int CreativeEventCacheEventReportedCacheRegPath; // eax
  bool *v13; // r9
  WCHAR *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rsi
  int StringSetting; // eax
  HSTRING v18; // rbx
  const WCHAR *StringRawBuffer; // rax
  int v20; // eax
  int CreativeEventString; // eax
  bool *v22; // r9
  WCHAR *v23; // rsi
  __int64 v24; // rdx
  PCWSTR v25; // rcx
  unsigned int v26; // eax
  LSTATUS v27; // eax
  struct _FILETIME v28; // r9
  LPCWSTR lpSubKey; // [rsp+40h] [rbp-30h] BYREF
  LPCWCH lpString1[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+B0h] [rbp+40h] BYREF
  HSTRING string; // [rsp+B8h] [rbp+48h]
  unsigned int v35; // [rsp+C0h] [rbp+50h]
  HSTRING v36; // [rsp+C8h] [rbp+58h]

  v36 = a4;
  v35 = a3;
  string = a2;
  v4 = a1[3];
  v5 = 0;
  lpString1[0] = 0LL;
  v7 = 0LL;
  lpSubKey = 0LL;
  CreativeEventCacheRegPath = ContentManagement::DesktopAppCreativeEventReportedCache::GetCreativeEventCacheRegPath(
                                (ContentManagement::DesktopAppCreativeEventReportedCache *)a1,
                                v4,
                                (unsigned __int16 **)lpString1);
  v10 = (WCHAR *)lpString1[0];
  DoesSettingExist = CreativeEventCacheRegPath;
  if ( CreativeEventCacheRegPath < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)CreativeEventCacheRegPath);
    goto LABEL_44;
  }
  CreativeEventCacheEventReportedCacheRegPath = ContentManagement::DesktopAppCreativeEventReportedCache::GetCreativeEventCacheEventReportedCacheRegPath(
                                                  v9,
                                                  a1[3],
                                                  (unsigned __int16 **)&lpSubKey);
  DoesSettingExist = CreativeEventCacheEventReportedCacheRegPath;
  if ( CreativeEventCacheEventReportedCacheRegPath < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x370,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)CreativeEventCacheEventReportedCacheRegPath);
    v7 = (WCHAR *)lpSubKey;
    goto LABEL_44;
  }
  v14 = 0LL;
  lpString1[0] = 0LL;
  DoesSettingExist = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                       v10,
                       L"LastCreativeId",
                       (unsigned __int16 *)&SystemTimeAsFileTime,
                       v13);
  if ( DoesSettingExist < 0 )
  {
    v15 = 886LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)DoesSettingExist);
    goto LABEL_22;
  }
  v7 = (WCHAR *)lpSubKey;
  v16 = -1LL;
  if ( LOBYTE(SystemTimeAsFileTime.dwLowDateTime) )
  {
    StringSetting = CreativeFramework::ContentDeliveryManagerSettings::GetStringSetting(
                      v10,
                      L"LastCreativeId",
                      0LL,
                      lpString1);
    DoesSettingExist = StringSetting;
    if ( StringSetting < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)StringSetting);
      v14 = (WCHAR *)lpString1[0];
LABEL_22:
      v7 = (WCHAR *)lpSubKey;
      goto LABEL_42;
    }
    v18 = string;
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v14 = (WCHAR *)lpString1[0];
    v20 = CompareStringOrdinal(lpString1[0], -1, StringRawBuffer, -1, 1);
    v5 = v20 != 2;
    if ( v20 == 2 )
      goto LABEL_11;
  }
  else
  {
    v18 = string;
  }
  v25 = WindowsGetStringRawBuffer(v18, 0LL);
  do
    ++v16;
  while ( v25[v16] );
  v26 = RegSetKeyValueW(HKEY_CURRENT_USER, v10, L"LastCreativeId", 1u, v25, 2 * v16 + 2);
  if ( v26 )
    DoesSettingExist = wil::details::in1diag3::Return_Win32Msg(
                         retaddr,
                         (void *)0xB7,
                         (__int64)"internal\\shell\\inc\\contentdeliverymanagersettings.h",
                         (const char *)v26,
                         (__int64)"RegKey: %ws %ws",
                         (const char *)v10,
                         L"LastCreativeId");
  else
    DoesSettingExist = 0;
  if ( DoesSettingExist < 0 )
  {
    v15 = 898LL;
    goto LABEL_21;
  }
  if ( !v5 || !LOBYTE(SystemTimeAsFileTime.dwLowDateTime) )
    goto LABEL_11;
  v27 = RegDeleteKeyW(HKEY_CURRENT_USER, v7);
  DoesSettingExist = (unsigned __int16)v27 | 0x80070000;
  if ( v27 <= 0 )
    DoesSettingExist = v27;
  if ( ((DoesSettingExist + 0x80000000) & 0x80000000) != 0 || DoesSettingExist == -2147024894 )
    DoesSettingExist = 0;
  else
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x108,
      (__int64)"internal\\shell\\inc\\contentdeliverymanagersettings.h",
      (const char *)(unsigned int)DoesSettingExist,
      (__int64)"RegKey: %ws",
      (const char *)v7);
  if ( DoesSettingExist >= 0 )
  {
LABEL_11:
    lpString1[0] = 0LL;
    CreativeEventString = ContentManagement::GetCreativeEventString(v35, v36, lpString1);
    v23 = (WCHAR *)lpString1[0];
    DoesSettingExist = CreativeEventString;
    if ( CreativeEventString >= 0 )
    {
      CreativeEventString = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                              v7,
                              lpString1[0],
                              (unsigned __int16 *)&SystemTimeAsFileTime,
                              v22);
      DoesSettingExist = CreativeEventString;
      if ( CreativeEventString >= 0 )
      {
        if ( LOBYTE(SystemTimeAsFileTime.dwLowDateTime)
          || (GetSystemTimeAsFileTime(&SystemTimeAsFileTime),
              GetSystemTimeAsFileTime(&SystemTimeAsFileTime),
              CreativeEventString = CreativeFramework::ContentDeliveryManagerSettings::SetFileTimeSetting(
                                      v7,
                                      v23,
                                      *(_QWORD *)&SystemTimeAsFileTime,
                                      v28),
              DoesSettingExist = CreativeEventString,
              CreativeEventString >= 0) )
        {
          DoesSettingExist = 0;
LABEL_40:
          if ( v23 )
            CoTaskMemFree(v23);
          goto LABEL_42;
        }
        v24 = 918LL;
      }
      else
      {
        v24 = 913LL;
      }
    }
    else
    {
      v24 = 909LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)CreativeEventString);
    goto LABEL_40;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x387,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)DoesSettingExist);
LABEL_42:
  if ( v14 )
    CoTaskMemFree(v14);
LABEL_44:
  if ( v7 )
    CoTaskMemFree(v7);
  if ( v10 )
    CoTaskMemFree(v10);
  return (unsigned int)DoesSettingExist;
}
