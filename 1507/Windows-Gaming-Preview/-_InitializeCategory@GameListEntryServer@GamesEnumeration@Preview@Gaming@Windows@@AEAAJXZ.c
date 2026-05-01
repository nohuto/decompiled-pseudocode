/*
 * XREFs of ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180011D40
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAUITileInfo@@@Z @ 0x180011B9C (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIT.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800112B0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x180012360 (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x18001D524 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x18001D774 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ?GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileBoolProperty@2@PEA_N@Z @ 0x180021F8C (-GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileBoolProperty@2@PEA_N@Z.c)
 *     __security_check_cookie @ 0x180025B30 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  __int64 v2; // rdx
  HRESULT v3; // edi
  IStream *v4; // rsi
  IStream *v5; // rdi
  char v6; // cl
  HRESULT v7; // eax
  HSTRING v8; // rsi
  __int64 v9; // rdi
  int ActivationFactory; // eax
  unsigned int v11; // edi
  int v12; // eax
  HRESULT v13; // eax
  HSTRING v14; // rsi
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rsi
  const WCHAR *v18; // rcx
  unsigned __int64 v19; // rax
  HRESULT v20; // eax
  __int64 v21; // rdi
  int v22; // eax
  HRESULT v23; // eax
  HSTRING v24; // rsi
  IStream *v25; // rdi
  int v26; // eax
  __int64 v27; // rdx
  IStream *v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // rsi
  IStream *v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  char v39; // [rsp+38h] [rbp-79h] BYREF
  _BYTE v40[7]; // [rsp+39h] [rbp-78h] BYREF
  IStream *pstm; // [rsp+40h] [rbp-71h] BYREF
  __int64 v42; // [rsp+48h] [rbp-69h] BYREF
  __int64 v43; // [rsp+50h] [rbp-61h] BYREF
  __int64 v44; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v45[3]; // [rsp+60h] [rbp-51h] BYREF
  _BYTE v46[72]; // [rsp+78h] [rbp-39h] BYREF
  __int64 v47; // [rsp+C0h] [rbp+Fh]
  HSTRING_HEADER hstringHeader; // [rsp+C8h] [rbp+17h] BYREF
  HSTRING string; // [rsp+E0h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v45[1] = -2LL;
  TileDataLayerItemWrappers::TDLTileInfoHelper::TDLTileInfoHelper(
    (TileDataLayerItemWrappers::TDLTileInfoHelper *)v46,
    *((struct ITileInfo **)this + 25));
  pstm = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, IStream **))(*(_QWORD *)v47 + 96LL))(
         v47,
         L"Windows.Gaming.AppCategory",
         &pstm);
  if ( v3 < 0 )
    goto LABEL_2;
  if ( !pstm )
    goto LABEL_12;
  v3 = IStream_Read(pstm, (char *)this + 104, 4u);
  if ( v3 < 0 )
  {
LABEL_2:
    v4 = pstm;
    if ( pstm )
    {
      pstm = 0LL;
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  else
  {
    v5 = pstm;
    if ( pstm )
    {
      pstm = 0LL;
      (*(void (__fastcall **)(IStream *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v3 = 0;
  }
  if ( v3 != -2147023728 )
  {
    if ( (int)wil::details::in1diag3::Log_IfFailedMsg(
                retaddr,
                (void *)0xAD,
                (unsigned int)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                (const char *)(unsigned int)v3,
                (int)"%ls",
                *((const char **)this + 14)) < 0 )
      *((_DWORD *)this + 26) = 0;
    goto LABEL_68;
  }
LABEL_12:
  v40[0] = 0;
  TileDataLayerItemWrappers::TDLTileInfoHelper::GetShellProperty(v46, v2, v40);
  if ( v40[0] )
  {
    v6 = 0;
LABEL_67:
    *((_DWORD *)this + 26) = v6 != 0;
LABEL_68:
    v11 = 0;
    goto LABEL_69;
  }
  v43 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.User", 0x25u, &hstringHeader, &string);
  if ( v7 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
  v8 = string;
  v9 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  ActivationFactory = RoGetActivationFactory(v8, &GUID_79199dcc_083c_4fd0_9bf7_248da1d4fafb, &v43);
  v11 = ActivationFactory;
  string = 0LL;
  if ( ActivationFactory >= 0 )
  {
    v44 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v43 + 112LL))(v43, &v44);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v42 = 0LL;
      string = 0LL;
      v13 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, &string);
      if ( v13 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
      v14 = string;
      v15 = v42;
      if ( v42 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v16 = RoGetActivationFactory(v14, &GUID_866d8ab1_f714_4bb9_bf47_068f4c8ea4dd, &v42);
      v11 = v16;
      string = 0LL;
      if ( v16 >= 0 )
      {
        v45[0] = 0LL;
        v17 = v42;
        string = 0LL;
        v18 = (const WCHAR *)*((_QWORD *)this + 14);
        v19 = -1LL;
        do
          ++v19;
        while ( v18[v19] );
        if ( v19 > 0xFFFFFFFF )
        {
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
          __debugbreak();
        }
        v20 = WindowsCreateStringReference(v18, v19, &hstringHeader, &string);
        if ( v20 < 0 )
          Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20);
        v21 = v45[0];
        if ( v45[0] )
        {
          v45[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, _QWORD *))(*(_QWORD *)v17 + 384LL))(
                v17,
                0LL,
                string,
                v45);
        v11 = v22;
        string = 0LL;
        if ( v22 >= 0 )
        {
          pstm = 0LL;
          string = 0LL;
          v23 = WindowsCreateStringReference(
                  L"Windows.Internal.StateRepository.PackagePolicy",
                  0x2Eu,
                  &hstringHeader,
                  &string);
          if ( v23 < 0 )
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23);
          v24 = string;
          v25 = pstm;
          if ( pstm )
          {
            pstm = 0LL;
            (*(void (__fastcall **)(IStream *))(*(_QWORD *)v25 + 16LL))(v25);
          }
          v26 = RoGetActivationFactory(v24, &GUID_d52a59bd_3267_436c_8388_c0d4ecbc7c9b, &pstm);
          v11 = v26;
          string = 0LL;
          if ( v26 >= 0 )
          {
            v26 = (*(__int64 (__fastcall **)(IStream *, __int64, _QWORD, HSTRING, HSTRING, char *))(*(_QWORD *)pstm
                                                                                                  + 264LL))(
                    pstm,
                    v44,
                    v45[0],
                    ::string,
                    qword_180037A18,
                    &v39);
            v11 = v26;
            if ( v26 >= 0 )
            {
              v33 = pstm;
              if ( pstm )
              {
                pstm = 0LL;
                (*(void (__fastcall **)(IStream *))(*(_QWORD *)v33 + 16LL))(v33);
              }
              v34 = v45[0];
              if ( v45[0] )
              {
                v45[0] = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
              }
              v35 = v42;
              if ( v42 )
              {
                v42 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
              }
              v36 = v44;
              if ( v44 )
              {
                v44 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
              }
              v37 = v43;
              if ( v43 )
              {
                v43 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
              }
              v6 = v39;
              goto LABEL_67;
            }
            v27 = 168LL;
          }
          else
          {
            v27 = 165LL;
          }
          wil::details::in1diag3::Return_HrPreRelease(
            retaddr,
            v27,
            (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v26);
          v28 = pstm;
          if ( pstm )
          {
            pstm = 0LL;
            (*(void (__fastcall **)(IStream *))(*(_QWORD *)v28 + 16LL))(v28);
          }
        }
        else
        {
          wil::details::in1diag3::Return_HrPreRelease(
            retaddr,
            160LL,
            (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v22);
        }
        v29 = v45[0];
        if ( v45[0] )
        {
          v45[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
      else
      {
        wil::details::in1diag3::Return_HrPreRelease(
          retaddr,
          156LL,
          (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v16);
      }
      v30 = v42;
      if ( v42 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
    }
    else
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        152LL,
        (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v12);
    }
    v31 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
  }
  else
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      149LL,
      (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)ActivationFactory);
  }
  v32 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
LABEL_69:
  TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)v46);
  return v11;
}
