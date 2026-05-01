/*
 * XREFs of ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x18000A9AC
 * Callers:
 *     ?ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18000A1E0 (-ParseTaskbarLayoutCollectionNode@TaskbarLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Micr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180008DD8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?push_back@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAXAEBW4LayoutSKU@SharedStartModel@@@Z @ 0x18000B788 (-push_back@-$vector@W4LayoutSKU@SharedStartModel@@V-$allocator@W4LayoutSKU@SharedStartModel@@@st.c)
 *     ?push_back@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAAXAEBQEAG@Z @ 0x18000B988 (-push_back@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAAXAEBQEAG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentRegionCode@RegionHelpers@StartLayout@@YAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@W4RegionLookupFallbackOptions@2@@Z @ 0x18001A288 (-GetCurrentRegionCode@RegionHelpers@StartLayout@@YAJAEAV-$NativeString@V-$CoTaskMemPolicy@G@Inte.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutParser::CalculateSelectionAttributes(TaskbarLayoutParser *this)
{
  int CurrentRegionCode; // eax
  PVOID Reserved1; // rdi
  DWORD v4; // eax
  HRESULT v5; // eax
  HSTRING v6; // rdi
  LPWSTR v7; // rcx
  int ActivationFactory; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  LPWSTR v11; // rcx
  LPWSTR v13; // rcx
  int pdwReturnedProductType; // [rsp+20h] [rbp-60h]
  LPWSTR ppwsz; // [rsp+30h] [rbp-50h] BYREF
  int v16; // [rsp+38h] [rbp-48h] BYREF
  int v17; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER psz; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v18 = -2LL;
  if ( *((_QWORD *)this + 14) )
  {
    ppwsz = 0LL;
    if ( SHStrDupW(*((LPCWSTR *)this + 14), &ppwsz) >= 0 )
    {
      std::vector<unsigned short *>::push_back((char *)this + 48, &ppwsz);
      *((_BYTE *)this + 40) = 1;
    }
  }
  else
  {
    memset(&psz, 0, sizeof(psz));
    CurrentRegionCode = StartLayout::RegionHelpers::GetCurrentRegionCode(&psz);
    if ( CurrentRegionCode < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x88,
        (unsigned int)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)CurrentRegionCode,
        pdwReturnedProductType);
    ppwsz = 0LL;
    Reserved1 = psz.Reserved.Reserved1;
    if ( SHStrDupW((LPCWSTR)psz.Reserved.Reserved1, &ppwsz) >= 0 )
    {
      std::vector<unsigned short *>::push_back((char *)this + 48, &ppwsz);
      *((_BYTE *)this + 40) = 1;
    }
    if ( Reserved1 )
      CoTaskMemFree(Reserved1);
  }
  v4 = `IsPPIEdition'::`2'::s_dwProductType;
  if ( !`IsPPIEdition'::`2'::s_dwProductType )
  {
    GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
    v4 = 0;
    `IsPPIEdition'::`2'::s_dwProductType = 0;
  }
  if ( v4 == 119 )
  {
    v16 = 9;
    std::vector<enum SharedStartModel::LayoutSKU>::push_back((char *)this + 72, &v16);
    *((_BYTE *)this + 43) = 1;
    return 0LL;
  }
  ppwsz = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(L"SharedStartModel.LayoutSelectionHelpers", 0x27u, &psz, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = string;
  v7 = ppwsz;
  if ( ppwsz )
  {
    ppwsz = 0LL;
    (*(void (__fastcall **)(LPWSTR))(*(_QWORD *)v7 + 16LL))(v7);
  }
  ActivationFactory = RoGetActivationFactory(v6, &GUID_539fe289_c0e0_4959_9a2f_bd846bc9b2c8, &ppwsz);
  v9 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    ActivationFactory = (*(__int64 (__fastcall **)(LPWSTR, int *))(*(_QWORD *)ppwsz + 56LL))(ppwsz, &v16);
    v9 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      if ( v16 )
      {
        v17 = v16;
        std::vector<enum SharedStartModel::LayoutSKU>::push_back((char *)this + 72, &v17);
        *((_BYTE *)this + 43) = 1;
      }
      v13 = ppwsz;
      if ( ppwsz )
      {
        ppwsz = 0LL;
        (*(void (__fastcall **)(LPWSTR))(*(_QWORD *)v13 + 16LL))(v13);
      }
      return 0LL;
    }
    v10 = 155LL;
  }
  else
  {
    v10 = 153LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
    (const char *)(unsigned int)ActivationFactory);
  v11 = ppwsz;
  if ( ppwsz )
  {
    ppwsz = 0LL;
    (*(void (__fastcall **)(LPWSTR))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v9;
}
