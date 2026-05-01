/*
 * XREFs of ?_GetLogoFromDesktopTile@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x1800127E0
 * Callers:
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180012AC8 (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800112B0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_InvertDesktopPixelData@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIRandomAccessStream@Streams@Storage@5@@Z @ 0x180012414 (-_InvertDesktopPixelData@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUI.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     __security_check_cookie @ 0x180025B30 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetLogoFromDesktopTile(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct Windows::Storage::Streams::IRandomAccessStreamReference **a2)
{
  HRESULT v4; // eax
  int ActivationFactory; // eax
  unsigned int v6; // edi
  __int64 v7; // rsi
  const WCHAR *v8; // rcx
  unsigned __int64 v9; // rax
  HRESULT v10; // eax
  int v11; // eax
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v12; // rcx
  __int64 v13; // rdx
  HRESULT v14; // eax
  HSTRING v15; // rsi
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rsi
  struct Windows::Storage::Streams::IRandomAccessStream *v20; // rsi
  __int64 v21; // rsi
  struct Windows::Storage::Streams::IRandomAccessStream *v23; // [rsp+20h] [rbp-50h] BYREF
  __int64 v24; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v25[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v25[1] = -2LL;
  v24 = 0LL;
  string = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.Internal.Shell.StartUI.TileImageHelpers", 0x2Fu, &hstringHeader, &string);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_580b9e9c_02c6_452d_97e3_d61f4f189deb, &v24);
  v6 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      260LL,
      (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_29;
  }
  v23 = 0LL;
  v7 = v24;
  string = 0LL;
  v8 = (const WCHAR *)*((_QWORD *)this + 14);
  v9 = -1LL;
  do
    ++v9;
  while ( v8[v9] );
  if ( v9 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    __debugbreak();
  }
  v10 = WindowsCreateStringReference(v8, v9, &hstringHeader, &string);
  if ( v10 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING, struct Windows::Storage::Streams::IRandomAccessStream **))(*(_QWORD *)v7 + 56LL))(
          v7,
          0x4316000043160000LL,
          string,
          &v23);
  v6 = v11;
  if ( v11 >= 0 )
  {
    v11 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InvertDesktopPixelData(v12, v23);
    v6 = v11;
    if ( v11 < 0 )
    {
      v13 = 270LL;
      goto LABEL_15;
    }
    v25[0] = 0LL;
    string = 0LL;
    v14 = WindowsCreateStringReference(
            L"Windows.Storage.Streams.RandomAccessStreamReference",
            0x33u,
            &hstringHeader,
            &string);
    if ( v14 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v14);
      __debugbreak();
    }
    v15 = string;
    v16 = v25[0];
    if ( v25[0] )
    {
      v25[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = RoGetActivationFactory(v15, &GUID_857309dc_3fbf_4e7d_986f_ef3b1a07a964, v25);
    v6 = v17;
    if ( v17 >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD, struct Windows::Storage::Streams::IRandomAccessStream *, struct Windows::Storage::Streams::IRandomAccessStreamReference **))(*(_QWORD *)v25[0] + 64LL))(
              v25[0],
              v23,
              a2);
      v6 = v17;
      if ( v17 >= 0 )
        goto LABEL_25;
      v18 = 281LL;
    }
    else
    {
      v18 = 279LL;
    }
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v18,
      (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v17);
LABEL_25:
    v19 = v25[0];
    if ( v25[0] )
    {
      v25[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    goto LABEL_27;
  }
  v13 = 264LL;
LABEL_15:
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    v13,
    (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)v11);
LABEL_27:
  v20 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(struct Windows::Storage::Streams::IRandomAccessStream *))(*(_QWORD *)v20 + 16LL))(v20);
  }
LABEL_29:
  v21 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return v6;
}
