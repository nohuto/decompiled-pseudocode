/*
 * XREFs of ?_GetLogoFromDesktopTile@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x180011FB0
 * Callers:
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180012280 (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180010DF0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     __security_check_cookie @ 0x180025A00 (__security_check_cookie.c)
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
  __int64 v11; // rdi
  int v12; // eax
  HRESULT v13; // eax
  HSTRING v14; // rsi
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v22; // [rsp+20h] [rbp-50h] BYREF
  __int64 v23; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v24[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v24[1] = -2LL;
  v22 = 0LL;
  string = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.Internal.Shell.StartUI.TileImageHelpers", 0x2Fu, &hstringHeader, &string);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_580b9e9c_02c6_452d_97e3_d61f4f189deb, &v22);
  v6 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      206LL,
      (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_28;
  }
  v24[0] = 0LL;
  v7 = v22;
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
  v11 = v24[0];
  if ( v24[0] )
  {
    v24[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING, _QWORD *))(*(_QWORD *)v7 + 56LL))(
          v7,
          0x4316000043160000LL,
          string,
          v24);
  v6 = v12;
  if ( v12 >= 0 )
  {
    v23 = 0LL;
    string = 0LL;
    v13 = WindowsCreateStringReference(
            L"Windows.Storage.Streams.RandomAccessStreamReference",
            0x33u,
            &hstringHeader,
            &string);
    if ( v13 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
      __debugbreak();
    }
    v14 = string;
    v15 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = RoGetActivationFactory(v14, &GUID_857309dc_3fbf_4e7d_986f_ef3b1a07a964, &v23);
    v6 = v16;
    if ( v16 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Storage::Streams::IRandomAccessStreamReference **))(*(_QWORD *)v23 + 64LL))(
              v23,
              v24[0],
              a2);
      v6 = v16;
      if ( v16 >= 0 )
        goto LABEL_24;
      v17 = 222LL;
    }
    else
    {
      v17 = 220LL;
    }
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v17,
      (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v16);
LABEL_24:
    v18 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    211LL,
    (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)v12);
LABEL_26:
  v19 = v24[0];
  if ( v24[0] )
  {
    v24[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
LABEL_28:
  v20 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return v6;
}
