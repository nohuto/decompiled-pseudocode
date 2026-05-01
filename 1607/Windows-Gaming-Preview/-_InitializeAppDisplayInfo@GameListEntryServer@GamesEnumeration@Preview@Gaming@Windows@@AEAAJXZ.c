/*
 * XREFs of ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18001429C
 * Callers:
 *     ?get_DisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDisplayInfo@ApplicationModel@5@@Z @ 0x180014890 (-get_DisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x180004218 (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180004D30 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004DCC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x180005154 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIAppDisplayInfo@ApplicationModel@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001DEA0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIAppDisplayInfo@ApplicationModel@W_ea_18001DEA0.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIAppDisplayInfo@ApplicationModel@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E030 (-Release@-$RuntimeClass@U-$InterfaceList@UIAppDisplayInfo@ApplicationModel@Windows@_ea_18001E030.c)
 *     ??$GetSimpleDataMetaProperty@_N@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEA_N@Z @ 0x1800249A4 (--$GetSimpleDataMetaProperty@_N@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEA_N@Z.c)
 *     __security_check_cookie @ 0x180026090 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800267CC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  int Interface; // edi
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // rax
  HRESULT v9; // eax
  HSTRING v10; // r13
  _QWORD *v11; // r12
  __int64 v12; // rcx
  char *v13; // rax
  char *v14; // rbx
  HSTRING *v15; // rdi
  HRESULT v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  char *v20; // rcx
  HRESULT v21; // eax
  HSTRING v22; // rdi
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rdi
  unsigned __int64 v26; // rax
  HRESULT v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v39; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v40; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v43[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v44[80]; // [rsp+68h] [rbp-A0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+B8h] [rbp-50h] BYREF
  HSTRING string; // [rsp+D0h] [rbp-38h] BYREF
  HSTRING_HEADER v47; // [rsp+D8h] [rbp-30h] BYREF
  HSTRING v48; // [rsp+F0h] [rbp-18h] BYREF
  HSTRING_HEADER v49; // [rsp+F8h] [rbp-10h] BYREF
  HSTRING v50; // [rsp+110h] [rbp+8h] BYREF
  HSTRING_HEADER v51; // [rsp+118h] [rbp+10h] BYREF
  HSTRING v52; // [rsp+130h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v43[1] = -2LL;
  v42 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.ApplicationModel.AppDisplayInfo", 0x27u, &hstringHeader, &string);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
  ActivationFactory = RoGetActivationFactory(string, &GUID_98dfe39f_65f6_4cae_b979_e7095b630a52, &v42);
  Interface = ActivationFactory;
  string = 0LL;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_75;
  }
  TileDataLayerItemWrappers::TDLTileInfoHelper::TDLTileInfoHelper(
    (TileDataLayerItemWrappers::TDLTileInfoHelper *)v44,
    *((struct ITileInfo **)this + 24));
  LOBYTE(v39) = 0;
  TileDataLayerItemWrappers::TDLTileInfoHelper::GetSimpleDataMetaProperty<bool>(
    v44,
    L"AppResolver_IsDesktopAppTile",
    &v39);
  if ( !(_BYTE)v39 )
  {
    v41 = 0LL;
    v50 = 0LL;
    v21 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Application", 0x2Cu, &v49, &v50);
    if ( v21 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21);
    v22 = v50;
    v23 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = RoGetActivationFactory(v22, &GUID_825b9666_dacf_4ef9_86b9_71a68cbfc214, &v41);
    Interface = v24;
    v50 = 0LL;
    if ( v24 >= 0 )
    {
      v40 = 0LL;
      v25 = v41;
      v52 = 0LL;
      v26 = -1LL;
      do
        ++v26;
      while ( *(_WORD *)(*((_QWORD *)this + 14) + 2 * v26) );
      if ( v26 > 0xFFFFFFFF )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
        __debugbreak();
      }
      v27 = WindowsCreateStringReference(*((PCWSTR *)this + 14), v26, &v51, &v52);
      if ( v27 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v27);
      v28 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, __int64 *))(*(_QWORD *)v25 + 240LL))(
              v25,
              0LL,
              v52,
              &v40);
      Interface = v29;
      v52 = 0LL;
      if ( v29 >= 0 )
      {
        v29 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v40 + 48LL))(v40, v43);
        Interface = v29;
        if ( v29 >= 0 )
        {
          v31 = v42;
          v32 = *((_QWORD *)this + 25);
          if ( v32 )
          {
            *((_QWORD *)this + 25) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
          }
          v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v31 + 48LL))(
                  v31,
                  v43[0],
                  (char *)this + 200);
          Interface = v29;
          if ( v29 >= 0 )
          {
            v35 = v40;
            if ( v40 )
            {
              v40 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
            }
            v36 = v41;
            if ( v41 )
            {
              v41 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
            }
            goto LABEL_73;
          }
          v30 = 229LL;
        }
        else
        {
          v30 = 223LL;
        }
      }
      else
      {
        v30 = 220LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v30,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v29);
      v33 = v40;
      if ( v40 )
      {
        v40 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD8,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v24);
    }
    v34 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    goto LABEL_74;
  }
  v5 = *((_QWORD *)this + 24);
  v6 = *((_QWORD *)this + 23);
  v7 = *((_QWORD *)this + 22);
  v48 = 0LL;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(*((_QWORD *)this + 14) + 2 * v8) );
  if ( v8 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    __debugbreak();
  }
  v9 = WindowsCreateStringReference(*((PCWSTR *)this + 14), v8, &v47, &v48);
  if ( v9 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
  v10 = v48;
  v11 = (_QWORD *)((char *)this + 200);
  v12 = *((_QWORD *)this + 25);
  if ( v12 )
  {
    *v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  *v11 = 0LL;
  v13 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v13;
  if ( v13 )
  {
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v13 + 16));
    *((_QWORD *)v14 + 6) = 1LL;
    *(_QWORD *)v14 = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    *((_QWORD *)v14 + 1) = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v14 + 2) = &Microsoft::WRL::RuntimeClass<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v14 = &Windows::Gaming::Preview::GamesEnumeration::DesktopAppDisplayInfoServer::`vftable';
    *((_QWORD *)v14 + 1) = &Windows::Gaming::Preview::GamesEnumeration::DesktopAppDisplayInfoServer::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v14 + 2) = &Windows::Gaming::Preview::GamesEnumeration::DesktopAppDisplayInfoServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *((_QWORD *)v14 + 7) = 0LL;
    *((_QWORD *)v14 + 8) = 0LL;
    *((_QWORD *)v14 + 9) = 0LL;
    v15 = (HSTRING *)(v14 + 80);
    *((_QWORD *)v14 + 10) = 0LL;
    if ( v10 && v10 == *v15
      || (WindowsDeleteString(*v15),
          *v15 = 0LL,
          v16 = WindowsDuplicateString(v10, (HSTRING *)v14 + 10),
          Interface = v16,
          v16 >= 0) )
    {
      if ( *((_QWORD *)v14 + 7) != v7 )
      {
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        v17 = *((_QWORD *)v14 + 7);
        *((_QWORD *)v14 + 7) = v7;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      if ( *((_QWORD *)v14 + 8) != v6 )
      {
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        v18 = *((_QWORD *)v14 + 8);
        *((_QWORD *)v14 + 8) = v6;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      if ( *((_QWORD *)v14 + 9) != v5 )
      {
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
        v19 = *((_QWORD *)v14 + 9);
        *((_QWORD *)v14 + 9) = v5;
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      Interface = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\desktopappdisplayinfo.cpp",
        (const char *)(unsigned int)v16);
    }
    v20 = v14;
    if ( Interface >= 0 )
    {
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::QueryInterface(
                    v14,
                    &GUID_1aeb1103_e4d4_41aa_a4f6_c4a276e79eac,
                    v11);
      v20 = v14;
    }
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(v20);
  }
  else
  {
    Interface = -2147024882;
  }
  v48 = 0LL;
  if ( Interface >= 0 )
  {
LABEL_73:
    Interface = 0;
    goto LABEL_74;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCE,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)Interface);
LABEL_74:
  TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)v44);
LABEL_75:
  v37 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  return (unsigned int)Interface;
}
