/*
 * XREFs of ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x180002FC8
 * Callers:
 *     ?get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z @ 0x180003B60 (-get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z.c)
 *     ?get_ContextualSuggestionsManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIContextualSuggestionsManager@2@@Z @ 0x180003D30 (-get_ContextualSuggestionsManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUI.c)
 *     ?ActivateInstance@?$SimpleActivationFactory@VContentManagementBrokerServer@ContentManagement@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180007650 (-ActivateInstance@-$SimpleActivationFactory@VContentManagementBrokerServer@ContentManagement@@$0.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800025A0 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800025D4 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z @ 0x180021A44 (-GetCallingProcessPackageFullName@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x180021B68 (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180021FA0 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?IsCallingProcessAppContainer@CallerIdentity@@YAJW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEA_N@Z @ 0x180022084 (-IsCallingProcessAppContainer@CallerIdentity@@YAJW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::LockScreenCategoryConfig::IsCallerInAllowedAppList(
        CreativeFramework::LockScreenCategoryConfig *this,
        const unsigned __int16 *const *a2)
{
  int IsCallingProcessAppContainer; // eax
  signed int CallingProcessHandle; // ebx
  void **v5; // r8
  signed int LastError; // eax
  char *v7; // rcx
  const WCHAR **v8; // rbx
  char *v9; // rsi
  __int64 v10; // rdx
  const WCHAR *v11; // r8
  const WCHAR *v12; // rcx
  unsigned __int16 **v13; // rdx
  char *v14; // rdi
  LPVOID pv; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-30h]
  __int64 v17; // [rsp+48h] [rbp-28h]
  char *v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  HANDLE hObject; // [rsp+A0h] [rbp+30h] BYREF
  int v23; // [rsp+A8h] [rbp+38h] BYREF
  PSID Sid; // [rsp+B0h] [rbp+40h] BYREF

  v23 = (int)a2;
  hObject = this;
  IsCallingProcessAppContainer = CallerIdentity::IsCallingProcessAppContainer(0LL, &v23);
  CallingProcessHandle = IsCallingProcessAppContainer;
  if ( IsCallingProcessAppContainer >= 0 )
  {
    if ( !(_BYTE)v23 )
      return 0LL;
    v16 = -1LL;
    v17 = -1LL;
    pv = 0LL;
    hObject = 0LL;
    CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(0LL, 0LL, &hObject);
    if ( CallingProcessHandle >= 0 )
    {
      pv = 0LL;
      CallingProcessHandle = CallerIdentity::GetPackageSidFromProcessHandle(hObject, &Sid, v5);
      if ( CallingProcessHandle >= 0 )
      {
        if ( ConvertSidToStringSidW(Sid, (LPWSTR *)&pv) )
        {
          CallingProcessHandle = 0;
        }
        else
        {
          LastError = GetLastError();
          CallingProcessHandle = (unsigned __int16)LastError | 0x80070000;
          if ( LastError <= 0 )
            CallingProcessHandle = LastError;
          if ( CallingProcessHandle >= 0 )
            CallingProcessHandle = -2147467259;
        }
        LocalFree(Sid);
      }
    }
    v7 = (char *)hObject;
    hObject = 0LL;
    if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v7);
    if ( CallingProcessHandle >= 0 )
    {
      v8 = (const WCHAR **)&off_18002DBC8;
      v9 = (char *)&unk_18002D640;
      do
      {
        LODWORD(v10) = v16;
        if ( v16 == -1 )
        {
          if ( pv )
          {
            v10 = -1LL;
            do
              ++v10;
            while ( *((_WORD *)pv + v10) );
          }
          else
          {
            LODWORD(v10) = 0;
          }
        }
        v11 = (const WCHAR *)&unk_18002D640;
        if ( *v8 )
          v11 = *v8;
        v12 = (const WCHAR *)&unk_18002D640;
        if ( pv )
          v12 = (const WCHAR *)pv;
        if ( CompareStringOrdinal(v12, v10, v11, -(*v8 != 0LL), 1) == 2 )
        {
          CallingProcessHandle = 0;
          goto LABEL_37;
        }
        ++v8;
      }
      while ( (__int64)v8 < (__int64)&GUID_a85c1ceb_0e8c_5422_b2ef_ad48ed338706 );
      v18 = 0LL;
      v19 = -1LL;
      v20 = -1LL;
      CallerIdentity::GetCallingProcessPackageFullName((CallerIdentity *)&v18, v13);
      v14 = v18;
      if ( v18 )
        v9 = v18;
      CallingProcessHandle = -2147024891;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x6C,
        (__int64)"shell\\contentdeliverymanager\\utils\\inc\\lockscreencategoryconfig.h",
        (const char *)0x80070005LL,
        (__int64)"%ls",
        v9);
      if ( v14 )
      {
        CoTaskMemFree(v14);
        v18 = 0LL;
      }
      v19 = 0LL;
      v20 = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        92LL,
        (__int64)"shell\\contentdeliverymanager\\utils\\inc\\lockscreencategoryconfig.h",
        (const char *)(unsigned int)CallingProcessHandle);
    }
LABEL_37:
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v16 = 0LL;
    v17 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      88LL,
      (__int64)"shell\\contentdeliverymanager\\utils\\inc\\lockscreencategoryconfig.h",
      (const char *)(unsigned int)IsCallingProcessAppContainer);
  }
  return (unsigned int)CallingProcessHandle;
}
