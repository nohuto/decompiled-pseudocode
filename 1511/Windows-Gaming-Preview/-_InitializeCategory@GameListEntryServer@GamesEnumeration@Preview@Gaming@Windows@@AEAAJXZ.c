/*
 * XREFs of ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800117A8
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAUITileInfo@@@Z @ 0x18001161C (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIT.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180010DF0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x180011EBC (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x18001CC24 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x18001CE38 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ?GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileUintProperty@2@PEAI@Z @ 0x180021BAC (-GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileUintProperty@2@PEAI@Z.c)
 *     ?GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileBoolProperty@2@PEA_N@Z @ 0x180021C7C (-GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileBoolProperty@2@PEA_N@Z.c)
 *     __security_check_cookie @ 0x180025A00 (__security_check_cookie.c)
 *     atexit @ 0x180025CCC (atexit.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  HRESULT v5; // eax
  HSTRING v6; // r15
  __int64 v7; // rdi
  int ActivationFactory; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r15
  const WCHAR *v12; // rcx
  unsigned __int64 v13; // rax
  HRESULT v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  _DWORD *v18; // r15
  unsigned int ShellProperty; // eax
  char v20; // cl
  HRESULT v21; // eax
  HSTRING v22; // r14
  __int64 v23; // rdi
  int v24; // eax
  int v25; // eax
  int v26; // eax
  HRESULT v27; // eax
  HSTRING v28; // r14
  __int64 v29; // rdi
  int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  unsigned __int64 v33; // rax
  HRESULT StringReference; // eax
  HRESULT v35; // eax
  __int64 v36; // rsi
  __int64 v37; // rsi
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v45; // [rsp+38h] [rbp-89h] BYREF
  __int64 v46; // [rsp+40h] [rbp-81h] BYREF
  __int64 v47; // [rsp+48h] [rbp-79h] BYREF
  __int64 v48; // [rsp+50h] [rbp-71h] BYREF
  __int64 v49; // [rsp+58h] [rbp-69h] BYREF
  _QWORD v50[3]; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v51[80]; // [rsp+78h] [rbp-49h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+C8h] [rbp+7h] BYREF
  HSTRING string; // [rsp+E0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v50[1] = -2LL;
  v50[0] = 0LL;
  TileDataLayerItemWrappers::TDLTileInfoHelper::TDLTileInfoHelper(
    (TileDataLayerItemWrappers::TDLTileInfoHelper *)v51,
    *((struct ITileInfo **)this + 24));
  LOBYTE(v45) = 0;
  TileDataLayerItemWrappers::TDLTileInfoHelper::GetShellProperty(v51, v2, &v45);
  v4 = -1LL;
  if ( !(_BYTE)v45 )
  {
    v46 = 0LL;
    string = 0LL;
    v5 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Application", 0x2Cu, &hstringHeader, &string);
    if ( v5 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    v6 = string;
    v7 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    ActivationFactory = RoGetActivationFactory(v6, &GUID_4ea5d922_2fab_4731_9c4a_568d77bd3ea0, &v46);
    v9 = ActivationFactory;
    string = 0LL;
    if ( ActivationFactory < 0 )
    {
      v10 = 130LL;
LABEL_18:
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        v10,
        (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)ActivationFactory);
      v16 = v46;
      if ( !v46 )
        goto LABEL_81;
      v46 = 0LL;
LABEL_67:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      goto LABEL_81;
    }
    v11 = v46;
    string = 0LL;
    v12 = (const WCHAR *)*((_QWORD *)this + 14);
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    if ( v13 > 0xFFFFFFFF )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
      __debugbreak();
    }
    v14 = WindowsCreateStringReference(v12, v13, &hstringHeader, &string);
    if ( v14 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
    v15 = v50[0];
    if ( v50[0] )
    {
      v50[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, _QWORD *))(*(_QWORD *)v11 + 200LL))(
                          v11,
                          0LL,
                          string,
                          v50);
    v9 = ActivationFactory;
    string = 0LL;
    if ( ActivationFactory < 0 )
    {
      v10 = 133LL;
      goto LABEL_18;
    }
    v17 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  v18 = (_DWORD *)((char *)this + 104);
  ShellProperty = TileDataLayerItemWrappers::TDLTileInfoHelper::GetShellProperty(v51, v3, (char *)this + 104);
  if ( ShellProperty != -2147023728 )
  {
    if ( (int)wil::details::in1diag3::Log_IfFailedMsg(
                retaddr,
                (void *)0xB5,
                (unsigned int)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                (const char *)ShellProperty,
                (int)"%ls",
                *((const char **)this + 14)) < 0 )
      *v18 = 0;
    goto LABEL_80;
  }
  if ( !(_BYTE)v45 )
  {
    v47 = 0LL;
    string = 0LL;
    v21 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.User", 0x25u, &hstringHeader, &string);
    if ( v21 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21);
    v22 = string;
    v23 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = RoGetActivationFactory(v22, &GUID_79199dcc_083c_4fd0_9bf7_248da1d4fafb, &v47);
    v9 = v24;
    string = 0LL;
    if ( v24 >= 0 )
    {
      v48 = 0LL;
      v25 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v47 + 112LL))(v47, &v48);
      v9 = v25;
      if ( v25 >= 0 )
      {
        v49 = 0LL;
        v26 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v50[0] + 96LL))(v50[0], &v49);
        v9 = v26;
        if ( v26 >= 0 )
        {
          v46 = 0LL;
          string = 0LL;
          v27 = WindowsCreateStringReference(
                  L"Windows.Internal.StateRepository.PackagePolicy",
                  0x2Eu,
                  &hstringHeader,
                  &string);
          if ( v27 < 0 )
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v27);
          v28 = string;
          v29 = v46;
          if ( v46 )
          {
            v46 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          }
          v30 = RoGetActivationFactory(v28, &GUID_d52a59bd_3267_436c_8388_c0d4ecbc7c9b, &v46);
          v9 = v30;
          string = 0LL;
          if ( v30 >= 0 )
          {
            v32 = dword_180037AC4;
            if ( (dword_180037AC4 & 1) == 0 )
            {
              dword_180037AC4 |= 1u;
              ::string = 0LL;
              v33 = -1LL;
              do
                ++v33;
              while ( aAppcategory[v33] );
              if ( v33 > 0xFFFFFFFF )
              {
                Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
                __debugbreak();
              }
              StringReference = WindowsCreateStringReference(L"AppCategory", v33, &::hstringHeader, &::string);
              if ( StringReference < 0 )
              {
                Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference);
                __debugbreak();
              }
              atexit(Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory_::_55_::_dynamic_atexit_destructor_for__appCategoryString__);
              v32 = dword_180037AC4;
            }
            if ( (v32 & 2) == 0 )
            {
              dword_180037AC4 = v32 | 2;
              qword_180037B00 = 0LL;
              do
                ++v4;
              while ( aGame[v4] );
              if ( v4 > 0xFFFFFFFF )
              {
                Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
                __debugbreak();
              }
              v35 = WindowsCreateStringReference(L"game", v4, &stru_180037AE8, &qword_180037B00);
              if ( v35 < 0 )
              {
                Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v35);
                __debugbreak();
              }
              atexit(Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory_::_55_::_dynamic_atexit_destructor_for__gameString__);
            }
            v30 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, HSTRING, HSTRING, __int64 *))(*(_QWORD *)v46 + 264LL))(
                    v46,
                    v48,
                    v49,
                    ::string,
                    qword_180037B00,
                    &v45);
            v9 = v30;
            if ( v30 >= 0 )
            {
              v39 = v46;
              if ( v46 )
              {
                v46 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
              }
              v40 = v49;
              if ( v49 )
              {
                v49 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
              }
              v41 = v48;
              if ( v48 )
              {
                v48 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
              }
              v42 = v47;
              if ( v47 )
              {
                v47 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
              }
              v20 = v45;
              goto LABEL_77;
            }
            v31 = 176LL;
          }
          else
          {
            v31 = 170LL;
          }
          wil::details::in1diag3::Return_HrPreRelease(
            retaddr,
            v31,
            (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v30);
          v36 = v46;
          if ( v46 )
          {
            v46 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
          }
        }
        else
        {
          wil::details::in1diag3::Return_HrPreRelease(
            retaddr,
            165LL,
            (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v26);
        }
        v37 = v49;
        if ( v49 )
        {
          v49 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
      else
      {
        wil::details::in1diag3::Return_HrPreRelease(
          retaddr,
          162LL,
          (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v25);
      }
      v38 = v48;
      if ( v48 )
      {
        v48 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      }
    }
    else
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        159LL,
        (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v24);
    }
    v16 = v47;
    if ( !v47 )
      goto LABEL_81;
    v47 = 0LL;
    goto LABEL_67;
  }
  v20 = 0;
LABEL_77:
  *v18 = v20 != 0;
LABEL_80:
  v9 = 0;
LABEL_81:
  TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)v51);
  v43 = v50[0];
  if ( v50[0] )
  {
    v50[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  }
  return v9;
}
