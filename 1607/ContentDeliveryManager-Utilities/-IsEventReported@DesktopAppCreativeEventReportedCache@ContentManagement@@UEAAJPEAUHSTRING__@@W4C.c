/*
 * XREFs of ?IsEventReported@DesktopAppCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x180022C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z @ 0x18001E340 (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z.c)
 *     ?DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x18001E46C (-DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJW4CreativeEventType@1@PEAUHSTRING__@@PEAPEAG@Z @ 0x18002141C (-GetCreativeEventString@ContentManagement@@YAJW4CreativeEventType@1@PEAUHSTRING__@@PEAPEAG@Z.c)
 *     ?GetCreativeEventCacheRegPath@DesktopAppCreativeEventReportedCache@ContentManagement@@AEAAJPEBGPEAPEAG@Z @ 0x180022B34 (-GetCreativeEventCacheRegPath@DesktopAppCreativeEventReportedCache@ContentManagement@@AEAAJPEBGP.c)
 *     ?GetCreativeEventCacheEventReportedCacheRegPath@DesktopAppCreativeEventReportedCache@ContentManagement@@AEAAJPEBGPEAPEAG@Z @ 0x180022BC0 (-GetCreativeEventCacheEventReportedCacheRegPath@DesktopAppCreativeEventReportedCache@ContentMana.c)
 */

__int64 __fastcall ContentManagement::DesktopAppCreativeEventReportedCache::IsEventReported(
        const unsigned __int16 **a1,
        HSTRING a2,
        unsigned int a3,
        HSTRING a4,
        bool *a5)
{
  bool *v5; // r12
  int CreativeEventCacheRegPath; // eax
  bool *v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int StringSetting; // eax
  const WCHAR *StringRawBuffer; // rax
  ContentManagement::DesktopAppCreativeEventReportedCache *v15; // rcx
  const unsigned __int16 *v16; // rdx
  int CreativeEventCacheEventReportedCacheRegPath; // eax
  void *v18; // rsi
  int CreativeEventString; // eax
  bool *v20; // r9
  void *v21; // rdi
  __int64 v22; // rdx
  LPCWCH lpString1[3]; // [rsp+30h] [rbp-50h] BYREF
  CreativeFramework::ContentDeliveryManagerSettings *v25; // [rsp+48h] [rbp-38h] BYREF
  LPVOID pv[4]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v5 = a5;
  v25 = 0LL;
  *a5 = 0;
  CreativeEventCacheRegPath = ContentManagement::DesktopAppCreativeEventReportedCache::GetCreativeEventCacheRegPath(
                                (ContentManagement::DesktopAppCreativeEventReportedCache *)a1,
                                a1[3],
                                (unsigned __int16 **)&v25);
  v11 = CreativeEventCacheRegPath;
  if ( CreativeEventCacheRegPath < 0 )
  {
    v12 = 849LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)CreativeEventCacheRegPath);
    goto LABEL_29;
  }
  CreativeEventCacheRegPath = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                                (const WCHAR *)v25,
                                L"LastCreativeId",
                                (unsigned __int16 *)&a5,
                                v10);
  v11 = CreativeEventCacheRegPath;
  if ( CreativeEventCacheRegPath < 0 )
  {
    v12 = 852LL;
    goto LABEL_5;
  }
  if ( !(_BYTE)a5 )
    goto LABEL_28;
  lpString1[0] = 0LL;
  StringSetting = CreativeFramework::ContentDeliveryManagerSettings::GetStringSetting(
                    (const WCHAR *)v25,
                    L"LastCreativeId",
                    0LL,
                    lpString1);
  v11 = StringSetting;
  if ( StringSetting >= 0 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    if ( CompareStringOrdinal(lpString1[0], -1, StringRawBuffer, -1, 1) == 2 )
    {
      v16 = a1[3];
      pv[0] = 0LL;
      CreativeEventCacheEventReportedCacheRegPath = ContentManagement::DesktopAppCreativeEventReportedCache::GetCreativeEventCacheEventReportedCacheRegPath(
                                                      v15,
                                                      v16,
                                                      (unsigned __int16 **)pv);
      v18 = pv[0];
      v11 = CreativeEventCacheEventReportedCacheRegPath;
      if ( CreativeEventCacheEventReportedCacheRegPath < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x35C,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)CreativeEventCacheEventReportedCacheRegPath);
LABEL_18:
        if ( v18 )
          CoTaskMemFree(v18);
        goto LABEL_20;
      }
      pv[0] = 0LL;
      CreativeEventString = ContentManagement::GetCreativeEventString(a3, a4, pv);
      v21 = pv[0];
      v11 = CreativeEventString;
      if ( CreativeEventString < 0 )
      {
        v22 = 863LL;
        goto LABEL_16;
      }
      CreativeEventString = CreativeFramework::ContentDeliveryManagerSettings::DoesSettingExist(
                              (const WCHAR *)v18,
                              (LPCWSTR)pv[0],
                              (unsigned __int16 *)&a5,
                              v20);
      v11 = CreativeEventString;
      if ( CreativeEventString < 0 )
      {
        v22 = 867LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)CreativeEventString);
        if ( v21 )
          CoTaskMemFree(v21);
        goto LABEL_18;
      }
      *v5 = (_BYTE)a5 != 0;
      if ( v21 )
        CoTaskMemFree(v21);
      if ( v18 )
        CoTaskMemFree(v18);
    }
    if ( lpString1[0] )
      CoTaskMemFree((LPVOID)lpString1[0]);
LABEL_28:
    v11 = 0;
    goto LABEL_29;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x358,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)StringSetting);
LABEL_20:
  if ( lpString1[0] )
    CoTaskMemFree((LPVOID)lpString1[0]);
LABEL_29:
  if ( v25 )
    CoTaskMemFree(v25);
  return v11;
}
