/*
 * XREFs of ?GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180006700
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180005D20 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18000706C (-PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskba.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x1800075D8 (-LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Mi.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800084B0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180008DD8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutPolicyManager::GetOEMLayoutXML(
        TaskbarLayoutPolicyManager *this,
        struct IXMLDOMDocument2 **a2)
{
  LSTATUS ValueW; // eax
  signed int LayoutXMLFromFilePath; // ebx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  HRESULT v10; // eax
  int v11; // edx
  unsigned int v12; // r8d
  int ActivationFactory; // eax
  int v14; // edx
  unsigned int v15; // r8d
  const WCHAR *v16; // rcx
  HRESULT v17; // eax
  int v18; // edx
  TaskbarLayoutPolicyManager *v19; // rcx
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v23; // [rsp+48h] [rbp-C0h] BYREF
  DWORD pcbData[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h]
  HSTRING_HEADER v26; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING v27; // [rsp+78h] [rbp-90h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-88h] BYREF
  HSTRING string; // [rsp+98h] [rbp-70h] BYREF
  _WORD pvData[264]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F0h] [rbp+1E8h]

  v25 = -2LL;
  *a2 = 0LL;
  pcbData[0] = 520;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer",
             L"LayoutXMLPath",
             2u,
             0LL,
             pvData,
             pcbData);
  if ( ValueW )
    pvData[0] = 0;
  LayoutXMLFromFilePath = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    LayoutXMLFromFilePath = ValueW;
  v6 = -1LL;
  if ( LayoutXMLFromFilePath < 0 )
  {
    v7 = (unsigned int)LayoutXMLFromFilePath;
    v8 = 432LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)v7);
    goto LABEL_11;
  }
  v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
         (char *)this + 40,
         pvData,
         -1LL);
  LayoutXMLFromFilePath = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 433LL;
    goto LABEL_7;
  }
  LayoutXMLFromFilePath = 0;
LABEL_11:
  if ( LayoutXMLFromFilePath >= 0 )
  {
    v23 = 0LL;
    string = 0LL;
    v10 = WindowsCreateStringReference(
            L"SharedStartModel.StartLayoutInitializationStatics",
            0x31u,
            &hstringHeader,
            &string);
    if ( v10 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10, v11, v12);
      __debugbreak();
    }
    ActivationFactory = RoGetActivationFactory(string, &GUID_af581601_f71a_4a31_8f8d_91f7df79371f, &v23);
    LayoutXMLFromFilePath = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      v27 = 0LL;
      v16 = (const WCHAR *)*((_QWORD *)this + 5);
      do
        ++v6;
      while ( v16[v6] );
      if ( v6 > 0xFFFFFFFF )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v14, v15);
        __debugbreak();
      }
      v17 = WindowsCreateStringReference(v16, v6, &v26, &v27);
      if ( v17 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17, v18, v20);
      LayoutXMLFromFilePath = TaskbarLayoutPolicyManager::LoadLayoutXMLFromFilePath(
                                v19,
                                (struct Microsoft::WRL::Wrappers::HStringReference *)&v26,
                                a2);
      v27 = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x112,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)ActivationFactory);
    }
    v21 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)LayoutXMLFromFilePath);
  }
  return (unsigned int)LayoutXMLFromFilePath;
}
