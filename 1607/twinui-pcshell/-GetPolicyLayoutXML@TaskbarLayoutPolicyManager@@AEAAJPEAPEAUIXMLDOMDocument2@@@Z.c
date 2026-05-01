/*
 * XREFs of ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180006AA4
 * Callers:
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180006E7C (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x180007480 (-EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x1800075D8 (-LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Mi.c)
 *     ?SetPolicyLayoutTimestamp@TaskbarLayoutPolicyManager@@AEAAJPEAU_FILETIME@@@Z @ 0x180007900 (-SetPolicyLayoutTimestamp@TaskbarLayoutPolicyManager@@AEAAJPEAU_FILETIME@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180008DD8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskbarLayoutPolicyManager::GetPolicyLayoutXML(const WCHAR **this, struct IXMLDOMDocument2 **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  HRESULT v7; // eax
  int v8; // edx
  unsigned int v9; // r8d
  int ActivationFactory; // eax
  unsigned int v11; // r8d
  const WCHAR *v12; // rcx
  unsigned __int64 v13; // rax
  HRESULT v14; // eax
  int v15; // edx
  TaskbarLayoutPolicyManager *v16; // rcx
  unsigned int v17; // r8d
  int v18; // eax
  __int64 v19; // rdx
  TaskbarLayoutPolicyManager *v20; // rcx
  __int64 v21; // rcx
  struct IXMLDOMDocument2 *v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // [rsp+28h] [rbp-29h] BYREF
  struct IXMLDOMDocument2 *v25; // [rsp+30h] [rbp-21h] BYREF
  struct _FILETIME v26; // [rsp+38h] [rbp-19h] BYREF
  struct _FILETIME v27; // [rsp+40h] [rbp-11h] BYREF
  __int64 v28; // [rsp+48h] [rbp-9h]
  HSTRING_HEADER v29; // [rsp+50h] [rbp-1h] BYREF
  HSTRING v30; // [rsp+68h] [rbp+17h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+1Fh] BYREF
  HSTRING string; // [rsp+88h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v28 = -2LL;
  *a2 = 0LL;
  if ( !(unsigned int)SHWindowsPolicy(&POLID_LockedStartLayout) )
    return 2147500037LL;
  v4 = TaskbarLayoutPolicyManager::EnsureEnterpriseLayoutFilePath((TaskbarLayoutPolicyManager *)this);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12E,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v24 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(
         L"SharedStartModel.StartLayoutInitializationStatics",
         0x31u,
         &hstringHeader,
         &string);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7, v8, v9);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_af581601_f71a_4a31_8f8d_91f7df79371f, &v24);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x130,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)ActivationFactory);
LABEL_22:
    v21 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    return v5;
  }
  v30 = 0LL;
  v12 = this[2];
  v13 = -1LL;
  do
    ++v13;
  while ( v12[v13] );
  if ( v13 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, -1, v11);
    __debugbreak();
  }
  v14 = WindowsCreateStringReference(v12, v13, &v29, &v30);
  if ( v14 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14, v15, v17);
  v25 = 0LL;
  v18 = TaskbarLayoutPolicyManager::LoadLayoutXMLFromFilePath(
          v16,
          (struct Microsoft::WRL::Wrappers::HStringReference *)&v29,
          &v25);
  v5 = v18;
  if ( v18 < 0 )
  {
    v19 = 308LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)v18);
    if ( v25 )
      ((void (__fastcall *)(struct IXMLDOMDocument2 *))v25->lpVtbl->Release)(v25);
    v30 = 0LL;
    goto LABEL_22;
  }
  v18 = (*(__int64 (__fastcall **)(__int64, HSTRING, struct _FILETIME *))(*(_QWORD *)v24 + 64LL))(v24, v30, &v26);
  v5 = v18;
  if ( v18 < 0 )
  {
    v19 = 311LL;
    goto LABEL_19;
  }
  v27 = v26;
  TaskbarLayoutPolicyManager::SetPolicyLayoutTimestamp(v20, &v27);
  v22 = v25;
  if ( v25 )
    ((void (__fastcall *)(struct IXMLDOMDocument2 *))v25->lpVtbl->AddRef)(v25);
  *a2 = v22;
  if ( v22 )
    ((void (__fastcall *)(struct IXMLDOMDocument2 *))v22->lpVtbl->Release)(v22);
  v30 = 0LL;
  v23 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return 0LL;
}
