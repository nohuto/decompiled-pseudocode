/*
 * XREFs of ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x180006188
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180005D20 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180006E7C (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x180007480 (-EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x1800075D8 (-LoadLayoutXMLFromFilePath@TaskbarLayoutPolicyManager@@AEAAJPEAVHStringReference@Wrappers@WRL@Mi.c)
 *     ?SetPolicyLayoutTimestamp@TaskbarLayoutPolicyManager@@AEAAJPEAU_FILETIME@@@Z @ 0x180007900 (-SetPolicyLayoutTimestamp@TaskbarLayoutPolicyManager@@AEAAJPEAU_FILETIME@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180007A88 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x180007D78 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180008DD8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TaskbarLayoutPolicyManager::CanApplyGroupPolicyLayout(
        TaskbarLayoutPolicyManager *this,
        int *a2,
        int *a3)
{
  TaskbarLayoutPolicyManager *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  HRESULT v11; // eax
  int v12; // edx
  unsigned int v13; // r8d
  int ActivationFactory; // eax
  int v15; // edx
  unsigned int v16; // r8d
  unsigned int v17; // edi
  unsigned __int64 v18; // rax
  HRESULT v19; // eax
  int v20; // edx
  unsigned int v21; // r8d
  int v22; // eax
  LSTATUS ValueW; // eax
  signed int v24; // ecx
  TaskbarLayoutPolicyManager *v25; // rcx
  int v26; // eax
  TaskbarLayoutPolicyManager *v27; // rcx
  struct IXMLDOMDocument2 *v28; // rbx
  int v29; // eax
  struct IXMLDOMNode *v30; // rcx
  __int64 v31; // rdx
  struct IXMLDOMNode *v32; // rcx
  int v33; // eax
  struct IXMLDOMNode *v34; // rcx
  __int64 v35; // rcx
  DWORD pcbData[2]; // [rsp+40h] [rbp-69h] BYREF
  __int64 v37; // [rsp+48h] [rbp-61h] BYREF
  FILETIME FileTime1; // [rsp+50h] [rbp-59h] BYREF
  FILETIME v39; // [rsp+58h] [rbp-51h] BYREF
  struct IXMLDOMDocument2 *v40; // [rsp+60h] [rbp-49h] BYREF
  FILETIME v41; // [rsp+68h] [rbp-41h] BYREF
  FILETIME FileTime2; // [rsp+70h] [rbp-39h] BYREF
  __int64 v43; // [rsp+78h] [rbp-31h]
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-29h] BYREF
  HSTRING string; // [rsp+98h] [rbp-11h] BYREF
  HSTRING_HEADER v46; // [rsp+A0h] [rbp-9h] BYREF
  HSTRING v47; // [rsp+B8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v43 = -2LL;
  *a2 = 0;
  *a3 = 0;
  if ( !(unsigned int)SHWindowsPolicy(&POLID_LockedStartLayout) )
  {
    v39 = 0LL;
    v7 = TaskbarLayoutPolicyManager::SetPolicyLayoutTimestamp(v6, &v39);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 247LL;
      goto LABEL_4;
    }
    return 0LL;
  }
  v7 = TaskbarLayoutPolicyManager::EnsureEnterpriseLayoutFilePath(this);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 207LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
  v37 = 0LL;
  string = 0LL;
  v11 = WindowsCreateStringReference(
          L"SharedStartModel.StartLayoutInitializationStatics",
          0x31u,
          &hstringHeader,
          &string);
  if ( v11 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11, v12, v13);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_af581601_f71a_4a31_8f8d_91f7df79371f, &v37);
  v17 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v47 = 0LL;
    v18 = -1LL;
    do
      ++v18;
    while ( *(_WORD *)(*((_QWORD *)this + 2) + 2 * v18) );
    if ( v18 > 0xFFFFFFFF )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v15, v16);
      __debugbreak();
    }
    v19 = WindowsCreateStringReference(*((PCWSTR *)this + 2), v18, &v46, &v47);
    if ( v19 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19, v20, v21);
    v22 = (*(__int64 (__fastcall **)(__int64, HSTRING, FILETIME *))(*(_QWORD *)v37 + 64LL))(v37, v47, &v41);
    v17 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD7,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
        (const char *)(unsigned int)v22);
LABEL_34:
      v47 = 0LL;
      goto LABEL_35;
    }
    v39 = v41;
    FileTime1 = 0LL;
    pcbData[0] = 8;
    ValueW = RegGetValueW(
               HKEY_CURRENT_USER,
               L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Taskband",
               L"LayoutXMLLastModified",
               8u,
               0LL,
               &FileTime1,
               pcbData);
    v24 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v24 = ValueW;
    if ( v24 < 0 )
      goto LABEL_23;
    if ( pcbData[0] != 8 )
      v24 = -2147467259;
    if ( v24 < 0 )
LABEL_23:
      FileTime1 = 0LL;
    FileTime2 = 0LL;
    if ( !CompareFileTime(&FileTime1, &FileTime2) || CompareFileTime(&FileTime1, &v39) )
    {
      v40 = 0LL;
      v26 = TaskbarLayoutPolicyManager::LoadLayoutXMLFromFilePath(
              v25,
              (struct Microsoft::WRL::Wrappers::HStringReference *)&v46,
              &v40);
      v17 = v26;
      v28 = v40;
      if ( v26 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE4,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v26);
LABEL_32:
        if ( v28 )
          ((void (__fastcall *)(struct IXMLDOMDocument2 *))v28->lpVtbl->Release)(v28);
        goto LABEL_34;
      }
      if ( (int)TaskbarLayoutPolicyManager::ValidateLayoutModificationXML(v27, v40) >= 0 )
      {
        *(_QWORD *)pcbData = 0LL;
        hstringHeader = *(HSTRING_HEADER *)((char *)this + 64);
        v29 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, HSTRING_HEADER *))v28->lpVtbl->setProperty)(
                v28,
                *((_QWORD *)this + 11),
                &hstringHeader);
        v17 = v29;
        if ( v29 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xEA,
            (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
            (const char *)(unsigned int)v29);
          v30 = *(struct IXMLDOMNode **)pcbData;
          if ( *(_QWORD *)pcbData )
          {
            *(_QWORD *)pcbData = 0LL;
            ((void (__fastcall *)(struct IXMLDOMNode *))v30->lpVtbl->Release)(v30);
          }
          goto LABEL_32;
        }
        v32 = *(struct IXMLDOMNode **)pcbData;
        if ( *(_QWORD *)pcbData )
        {
          *(_QWORD *)pcbData = 0LL;
          ((void (__fastcall *)(struct IXMLDOMNode *))v32->lpVtbl->Release)(v32);
        }
        v33 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, DWORD *))v28->lpVtbl->selectSingleNode)(
                v28,
                *((_QWORD *)this + 13),
                pcbData);
        v34 = *(struct IXMLDOMNode **)pcbData;
        if ( v33 >= 0 && *(_QWORD *)pcbData )
        {
          *a3 = TaskbarLayoutPolicyManager::IsOverrideLayout(this, *(struct IXMLDOMNode **)pcbData);
          *a2 = 1;
          v34 = *(struct IXMLDOMNode **)pcbData;
        }
        if ( v34 )
        {
          *(_QWORD *)pcbData = 0LL;
          ((void (__fastcall *)(struct IXMLDOMNode *))v34->lpVtbl->Release)(v34);
        }
      }
      if ( v28 )
        ((void (__fastcall *)(struct IXMLDOMDocument2 *))v28->lpVtbl->Release)(v28);
    }
    v47 = 0LL;
    v35 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD3,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_35:
  v31 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  return v17;
}
