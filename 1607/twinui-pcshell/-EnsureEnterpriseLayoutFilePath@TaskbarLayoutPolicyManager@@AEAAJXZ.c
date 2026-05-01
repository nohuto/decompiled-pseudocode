/*
 * XREFs of ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x180007480
 * Callers:
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180006188 (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180006AA4 (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800084B0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180008F78 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::EnsureEnterpriseLayoutFilePath(TaskbarLayoutPolicyManager *this)
{
  __int64 v2; // rbx
  LSTATUS ValueW; // eax
  unsigned int v4; // ebx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  int v8; // eax
  DWORD pcbData[4]; // [rsp+40h] [rbp-238h] BYREF
  _WORD pvData[264]; // [rsp+50h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  v2 = -2147483647LL;
  if ( (int)SHRegGetBOOL(
              HKEY_CURRENT_USER,
              L"SOFTWARE\\Policies\\Microsoft\\Windows\\Explorer",
              L"LockedStartLayout",
              (int *)pcbData) < 0
    || !pcbData[0] )
  {
    v2 = -2147483646LL;
    if ( (int)SHRegGetBOOL(
                HKEY_LOCAL_MACHINE,
                L"SOFTWARE\\Policies\\Microsoft\\Windows\\Explorer",
                L"LockedStartLayout",
                (int *)pcbData) < 0
      || !pcbData[0] )
    {
      return 2147943568LL;
    }
  }
  pcbData[0] = 520;
  ValueW = RegGetValueW(
             (HKEY)v2,
             L"SOFTWARE\\Policies\\Microsoft\\Windows\\Explorer",
             L"StartLayoutFile",
             2u,
             0LL,
             pvData,
             pcbData);
  if ( ValueW )
    pvData[0] = 0;
  v4 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v4 = ValueW;
  if ( (v4 & 0x80000000) != 0 )
  {
    v5 = v4;
    v6 = 424LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)v5);
    return v4;
  }
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (char *)this + 16,
         pvData,
         -1LL);
  v4 = v8;
  if ( v8 < 0 )
  {
    v5 = (unsigned int)v8;
    v6 = 425LL;
    goto LABEL_11;
  }
  return 0LL;
}
