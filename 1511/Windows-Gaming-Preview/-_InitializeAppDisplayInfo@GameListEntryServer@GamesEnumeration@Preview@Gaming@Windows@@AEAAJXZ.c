/*
 * XREFs of ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180012280
 * Callers:
 *     ?get_DisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDisplayInfo@ApplicationModel@5@@Z @ 0x180012880 (-get_DisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDi.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180010DF0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x180011EBC (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     ?_GetLogoFromDesktopTile@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x180011FB0 (-_GetLogoFromDesktopTile@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x18001CE38 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ?GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileBoolProperty@2@PEA_N@Z @ 0x180021C7C (-GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileBoolProperty@2@PEA_N@Z.c)
 *     ?GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAG@Z @ 0x1800225EC (-GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualE.c)
 *     __security_check_cookie @ 0x180025A00 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo(
        struct ITileInfo **this)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  int DisplayName; // eax
  PVOID Reserved1; // r14
  int LogoFromDesktopTile; // eax
  __int64 v10; // rdx
  __int64 v11; // r12
  HRESULT v12; // eax
  HRESULT v13; // eax
  __int64 *v14; // r15
  __int64 v15; // rdi
  struct Windows::Storage::Streams::IRandomAccessStreamReference *v16; // rsi
  struct Windows::Storage::Streams::IRandomAccessStreamReference *v17; // rdi
  HRESULT v18; // eax
  HSTRING v19; // rsi
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // r14
  const WCHAR *v23; // rcx
  unsigned __int64 v24; // rsi
  HRESULT v25; // eax
  struct Windows::Storage::Streams::IRandomAccessStreamReference *v26; // rdi
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rsi
  struct ITileInfo *v30; // rdi
  struct Windows::Storage::Streams::IRandomAccessStreamReference *v31; // rsi
  __int64 v32; // rsi
  struct Windows::Storage::Streams::IRandomAccessStreamReference *v33; // rdi
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v37; // [rsp+38h] [rbp-D0h] BYREF
  struct Windows::Storage::Streams::IRandomAccessStreamReference *v38; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v41[2]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v42[80]; // [rsp+68h] [rbp-A0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+B8h] [rbp-50h] BYREF
  HSTRING string; // [rsp+D0h] [rbp-38h] BYREF
  HSTRING_HEADER v45; // [rsp+D8h] [rbp-30h] BYREF
  HSTRING v46; // [rsp+F0h] [rbp-18h] BYREF
  HSTRING_HEADER v47; // [rsp+F8h] [rbp-10h] BYREF
  HSTRING v48; // [rsp+110h] [rbp+8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v41[1] = -2LL;
  v40 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.ApplicationModel.AppDisplayInfo", 0x27u, &hstringHeader, &string);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
  ActivationFactory = RoGetActivationFactory(string, &GUID_98dfe39f_65f6_4cae_b979_e7095b630a52, &v40);
  v4 = ActivationFactory;
  string = 0LL;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      230LL,
      (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_64;
  }
  TileDataLayerItemWrappers::TDLTileInfoHelper::TDLTileInfoHelper(
    (TileDataLayerItemWrappers::TDLTileInfoHelper *)v42,
    this[24]);
  LOBYTE(v37) = 0;
  TileDataLayerItemWrappers::TDLTileInfoHelper::GetShellProperty(v42, v5, &v37);
  if ( !(_BYTE)v37 )
  {
    v39 = 0LL;
    v46 = 0LL;
    v18 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Application", 0x2Cu, &v45, &v46);
    if ( v18 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18);
    v19 = v46;
    v20 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = RoGetActivationFactory(v19, &GUID_4ea5d922_2fab_4731_9c4a_568d77bd3ea0, &v39);
    v4 = v21;
    v46 = 0LL;
    if ( v21 >= 0 )
    {
      v38 = 0LL;
      v22 = v39;
      v46 = 0LL;
      v23 = (const WCHAR *)this[14];
      v24 = -1LL;
      do
        ++v24;
      while ( v23[v24] );
      if ( v24 > 0xFFFFFFFF )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
        __debugbreak();
      }
      v25 = WindowsCreateStringReference(v23, v24, &v45, &v46);
      if ( v25 < 0 )
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v25);
      v26 = v38;
      if ( v38 )
      {
        v38 = 0LL;
        (*(void (__fastcall **)(struct Windows::Storage::Streams::IRandomAccessStreamReference *))(*(_QWORD *)v26 + 16LL))(v26);
      }
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING, struct Windows::Storage::Streams::IRandomAccessStreamReference **))(*(_QWORD *)v22 + 200LL))(
              v22,
              0LL,
              v46,
              &v38);
      v4 = v27;
      v46 = 0LL;
      if ( v27 >= 0 )
      {
        v27 = (*(__int64 (__fastcall **)(struct Windows::Storage::Streams::IRandomAccessStreamReference *, _QWORD *))(*(_QWORD *)v38 + 48LL))(
                v38,
                v41);
        v4 = v27;
        if ( v27 >= 0 )
        {
          v29 = v40;
          v30 = this[25];
          if ( v30 )
          {
            this[25] = 0LL;
            (*(void (__fastcall **)(struct ITileInfo *))(*(_QWORD *)v30 + 16LL))(v30);
          }
          v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v29 + 48LL))(
                  v29,
                  v41[0],
                  (char *)this + 200);
          v4 = v27;
          if ( v27 >= 0 )
          {
            v33 = v38;
            if ( v38 )
            {
              v38 = 0LL;
              (*(void (__fastcall **)(struct Windows::Storage::Streams::IRandomAccessStreamReference *))(*(_QWORD *)v33 + 16LL))(v33);
            }
            v34 = v39;
            if ( v39 )
            {
              v39 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
            }
            goto LABEL_62;
          }
          v28 = 278LL;
        }
        else
        {
          v28 = 272LL;
        }
      }
      else
      {
        v28 = 269LL;
      }
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        v28,
        (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v27);
      v31 = v38;
      if ( v38 )
      {
        v38 = 0LL;
        (*(void (__fastcall **)(struct Windows::Storage::Streams::IRandomAccessStreamReference *))(*(_QWORD *)v31 + 16LL))(v31);
      }
    }
    else
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        265LL,
        (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v21);
    }
    v32 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    goto LABEL_63;
  }
  hstringHeader.Reserved.Reserved1 = 0LL;
  v6 = -1LL;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = -1LL;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = -1LL;
  DisplayName = TileDataLayerItemWrappers::TDLTileInfoHelper::GetDisplayName(
                  (TileDataLayerItemWrappers::TDLTileInfoHelper *)v42,
                  this[22],
                  this[23],
                  (unsigned __int16 **)&hstringHeader);
  v4 = DisplayName;
  Reserved1 = hstringHeader.Reserved.Reserved1;
  if ( DisplayName < 0 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      241LL,
      (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)DisplayName);
LABEL_24:
    if ( Reserved1 )
    {
      CoTaskMemFree(Reserved1);
      hstringHeader.Reserved.Reserved1 = 0LL;
    }
    *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = 0uLL;
    goto LABEL_63;
  }
  v38 = 0LL;
  LogoFromDesktopTile = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetLogoFromDesktopTile(
                          (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)this,
                          &v38);
  v4 = LogoFromDesktopTile;
  if ( LogoFromDesktopTile < 0 )
  {
    v10 = 248LL;
    goto LABEL_22;
  }
  v11 = v40;
  v46 = 0LL;
  v12 = WindowsCreateStringReference(&word_18002E84C, 0, &v45, &v46);
  if ( v12 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
  v48 = 0LL;
  do
    ++v6;
  while ( *((_WORD *)Reserved1 + v6) );
  if ( v6 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    __debugbreak();
  }
  v13 = WindowsCreateStringReference((PCWSTR)Reserved1, v6, &v47, &v48);
  if ( v13 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
  v14 = (__int64 *)(this + 25);
  v15 = *v14;
  if ( *v14 )
  {
    *v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  LogoFromDesktopTile = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, struct Windows::Storage::Streams::IRandomAccessStreamReference *, __int64 *))(*(_QWORD *)v11 + 56LL))(
                          v11,
                          v48,
                          v46,
                          v38,
                          v14);
  v4 = LogoFromDesktopTile;
  v48 = 0LL;
  v46 = 0LL;
  if ( LogoFromDesktopTile < 0 )
  {
    v10 = 255LL;
LABEL_22:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v10,
      (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)LogoFromDesktopTile);
    v16 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(struct Windows::Storage::Streams::IRandomAccessStreamReference *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    goto LABEL_24;
  }
  v17 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(struct Windows::Storage::Streams::IRandomAccessStreamReference *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( Reserved1 )
  {
    CoTaskMemFree(Reserved1);
    hstringHeader.Reserved.Reserved1 = 0LL;
  }
  *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = 0uLL;
LABEL_62:
  v4 = 0;
LABEL_63:
  TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)v42);
LABEL_64:
  v35 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  return v4;
}
