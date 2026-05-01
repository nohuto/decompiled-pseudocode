/*
 * XREFs of ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180013BD4
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAUITileInfo@@@Z @ 0x180013A64 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x180004218 (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004DCC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x180005154 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x18001E49C (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ??$GetSimpleDataMetaProperty@_N@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEA_N@Z @ 0x1800249A4 (--$GetSimpleDataMetaProperty@_N@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEA_N@Z.c)
 *     __security_check_cookie @ 0x180026090 (__security_check_cookie.c)
 *     atexit @ 0x180026778 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  unsigned __int64 v2; // rdi
  HRESULT v3; // eax
  HSTRING v4; // rbx
  IStream *v5; // rcx
  int ActivationFactory; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  IStream *v9; // rbx
  const WCHAR *v10; // rcx
  unsigned __int64 v11; // rax
  HRESULT v12; // eax
  __int64 v13; // rcx
  IStream *v14; // rcx
  IStream *v15; // rcx
  HRESULT v16; // ebx
  IStream *v17; // rcx
  char v18; // cl
  HRESULT v19; // eax
  HSTRING v20; // rbx
  IStream *v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  HRESULT v25; // eax
  HSTRING v26; // rbx
  IStream *v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  unsigned __int64 v31; // rax
  HRESULT StringReference; // eax
  HRESULT v33; // eax
  IStream *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  IStream *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  IStream *v40; // rcx
  __int64 v41; // rcx
  char v43[8]; // [rsp+48h] [rbp-79h] BYREF
  IStream *pstm; // [rsp+50h] [rbp-71h] BYREF
  __int64 v45; // [rsp+58h] [rbp-69h] BYREF
  __int64 v46; // [rsp+60h] [rbp-61h] BYREF
  IStream *v47; // [rsp+68h] [rbp-59h] BYREF
  _QWORD v48[3]; // [rsp+70h] [rbp-51h] BYREF
  _BYTE v49[72]; // [rsp+88h] [rbp-39h] BYREF
  __int64 v50; // [rsp+D0h] [rbp+Fh]
  HSTRING_HEADER hstringHeader; // [rsp+D8h] [rbp+17h] BYREF
  HSTRING string; // [rsp+F0h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v48[1] = -2LL;
  v48[0] = 0LL;
  TileDataLayerItemWrappers::TDLTileInfoHelper::TDLTileInfoHelper(
    (TileDataLayerItemWrappers::TDLTileInfoHelper *)v49,
    *((struct ITileInfo **)this + 24));
  v43[0] = 0;
  TileDataLayerItemWrappers::TDLTileInfoHelper::GetSimpleDataMetaProperty<bool>(
    v49,
    L"AppResolver_IsDesktopAppTile",
    v43);
  v2 = -1LL;
  if ( !v43[0] )
  {
    pstm = 0LL;
    string = 0LL;
    v3 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Application", 0x2Cu, &hstringHeader, &string);
    if ( v3 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    v4 = string;
    v5 = pstm;
    if ( pstm )
    {
      pstm = 0LL;
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    ActivationFactory = RoGetActivationFactory(v4, &GUID_825b9666_dacf_4ef9_86b9_71a68cbfc214, &pstm);
    v7 = ActivationFactory;
    string = 0LL;
    if ( ActivationFactory < 0 )
    {
      v8 = 130LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)ActivationFactory);
      v14 = pstm;
      if ( !pstm )
        goto LABEL_89;
      pstm = 0LL;
LABEL_77:
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v14 + 16LL))(v14);
      goto LABEL_89;
    }
    v9 = pstm;
    string = 0LL;
    v10 = (const WCHAR *)*((_QWORD *)this + 14);
    v11 = -1LL;
    do
      ++v11;
    while ( v10[v11] );
    if ( v11 > 0xFFFFFFFF )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
      __debugbreak();
    }
    v12 = WindowsCreateStringReference(v10, v11, &hstringHeader, &string);
    if ( v12 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
    v13 = v48[0];
    if ( v48[0] )
    {
      v48[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    ActivationFactory = (*(__int64 (__fastcall **)(IStream *, _QWORD, HSTRING, _QWORD *))(*(_QWORD *)v9 + 240LL))(
                          v9,
                          0LL,
                          string,
                          v48);
    v7 = ActivationFactory;
    string = 0LL;
    if ( ActivationFactory < 0 )
    {
      v8 = 133LL;
      goto LABEL_18;
    }
    v15 = pstm;
    if ( pstm )
    {
      pstm = 0LL;
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  pstm = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, IStream **))(*(_QWORD *)v50 + 96LL))(
          v50,
          L"Windows.Gaming.AppCategory",
          &pstm);
  v17 = pstm;
  if ( v16 < 0 )
    goto LABEL_23;
  if ( !pstm )
    goto LABEL_33;
  v16 = IStream_Read(pstm, (char *)this + 104, 4u);
  v17 = pstm;
  if ( v16 < 0 )
  {
LABEL_23:
    if ( v17 )
    {
      pstm = 0LL;
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  else
  {
    if ( pstm )
    {
      pstm = 0LL;
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v16 = 0;
  }
  if ( v16 != -2147023728 )
  {
    if ( (int)wil::details::in1diag3::Log_IfFailedMsg(
                retaddr,
                (void *)0xB5,
                (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                (const char *)(unsigned int)v16,
                (int)"%ls",
                *((const char **)this + 14)) < 0 )
      *((_DWORD *)this + 26) = 0;
    goto LABEL_88;
  }
LABEL_33:
  if ( !v43[0] )
  {
    v47 = 0LL;
    string = 0LL;
    v19 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.User", 0x25u, &hstringHeader, &string);
    if ( v19 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v19);
    v20 = string;
    v21 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v22 = RoGetActivationFactory(v20, &GUID_de8a0e16_eaea_47c9_9c95_c46c2f2ff0a5, &v47);
    v7 = v22;
    string = 0LL;
    if ( v22 >= 0 )
    {
      v46 = 0LL;
      v23 = (*(__int64 (__fastcall **)(IStream *, __int64 *))(*(_QWORD *)v47 + 112LL))(v47, &v46);
      v7 = v23;
      if ( v23 >= 0 )
      {
        v45 = 0LL;
        v24 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v48[0] + 96LL))(v48[0], &v45);
        v7 = v24;
        if ( v24 >= 0 )
        {
          pstm = 0LL;
          string = 0LL;
          v25 = WindowsCreateStringReference(
                  L"Windows.Internal.StateRepository.PackagePolicy",
                  0x2Eu,
                  &hstringHeader,
                  &string);
          if ( v25 < 0 )
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v25);
          v26 = string;
          v27 = pstm;
          if ( pstm )
          {
            pstm = 0LL;
            (*(void (__fastcall **)(IStream *))(*(_QWORD *)v27 + 16LL))(v27);
          }
          v28 = RoGetActivationFactory(v26, &GUID_f7a88ec3_6f33_46bf_83b8_78aaf94ac396, &pstm);
          v7 = v28;
          string = 0LL;
          if ( v28 >= 0 )
          {
            v30 = dword_180038A98;
            if ( (dword_180038A98 & 1) == 0 )
            {
              dword_180038A98 |= 1u;
              ::string = 0LL;
              v31 = -1LL;
              do
                ++v31;
              while ( aAppcategory[v31] );
              if ( v31 > 0xFFFFFFFF )
              {
                Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
                __debugbreak();
              }
              StringReference = WindowsCreateStringReference(L"AppCategory", v31, &::hstringHeader, &::string);
              if ( StringReference < 0 )
              {
                Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference);
                __debugbreak();
              }
              atexit(Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory_::_27_::_dynamic_atexit_destructor_for__appCategoryString__);
              v30 = dword_180038A98;
            }
            if ( (v30 & 2) == 0 )
            {
              dword_180038A98 = v30 | 2;
              qword_180038AD8 = 0LL;
              do
                ++v2;
              while ( aGame[v2] );
              if ( v2 > 0xFFFFFFFF )
              {
                Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
                __debugbreak();
              }
              v33 = WindowsCreateStringReference(L"game", v2, &stru_180038AC0, &qword_180038AD8);
              if ( v33 < 0 )
              {
                Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v33);
                __debugbreak();
              }
              atexit(Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory_::_27_::_dynamic_atexit_destructor_for__gameString__);
            }
            v28 = (*(__int64 (__fastcall **)(IStream *, __int64, __int64, HSTRING, HSTRING, char *))(*(_QWORD *)pstm + 264LL))(
                    pstm,
                    v46,
                    v45,
                    ::string,
                    qword_180038AD8,
                    v43);
            v7 = v28;
            if ( v28 >= 0 )
            {
              v37 = pstm;
              if ( pstm )
              {
                pstm = 0LL;
                (*(void (__fastcall **)(IStream *))(*(_QWORD *)v37 + 16LL))(v37);
              }
              v38 = v45;
              if ( v45 )
              {
                v45 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
              }
              v39 = v46;
              if ( v46 )
              {
                v46 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
              }
              v40 = v47;
              if ( v47 )
              {
                v47 = 0LL;
                (*(void (__fastcall **)(IStream *))(*(_QWORD *)v40 + 16LL))(v40);
              }
              v18 = v43[0];
              goto LABEL_87;
            }
            v29 = 176LL;
          }
          else
          {
            v29 = 170LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v29,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v28);
          v34 = pstm;
          if ( pstm )
          {
            pstm = 0LL;
            (*(void (__fastcall **)(IStream *))(*(_QWORD *)v34 + 16LL))(v34);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA5,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v24);
        }
        v35 = v45;
        if ( v45 )
        {
          v45 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA2,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v23);
      }
      v36 = v46;
      if ( v46 )
      {
        v46 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9F,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v22);
    }
    v14 = v47;
    if ( !v47 )
      goto LABEL_89;
    v47 = 0LL;
    goto LABEL_77;
  }
  v18 = 0;
LABEL_87:
  *((_DWORD *)this + 26) = v18 != 0;
LABEL_88:
  v7 = 0;
LABEL_89:
  TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)v49);
  v41 = v48[0];
  if ( v48[0] )
  {
    v48[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  }
  return v7;
}
