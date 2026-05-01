/*
 * XREFs of ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001E0A0
 * Callers:
 *     ?_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@Z @ 0x180009E10 (-_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_V.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAUITileInfo@@@Z @ 0x180011B9C (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIT.c)
 *     ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001D8A8 (-RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4Gam.c)
 * Callees:
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x1800020F0 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007B70 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x180012360 (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x18001D774 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ?Return_Win32PreRelease@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001E66C (-Return_Win32PreRelease@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileStringProperty@2@PEAPEAG@Z @ 0x180021E9C (-GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileStringProperty@2@PEAPE.c)
 *     ?GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileBoolProperty@2@PEA_N@Z @ 0x180021F8C (-GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileBoolProperty@2@PEA_N@Z.c)
 *     ?GetLegacyPhoneProductId@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAU_GUID@@@Z @ 0x180022EA0 (-GetLegacyPhoneProductId@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAU_GUID@@@Z.c)
 *     ?GetAppIdentifierFromTile@OneCoreDataHelpers@@YAJPEAUITileInfo@@PEAPEAUIApplicationIdentifier@@@Z @ 0x180024DE4 (-GetAppIdentifierFromTile@OneCoreDataHelpers@@YAJPEAUITileInfo@@PEAPEAUIApplicationIdentifier@@@.c)
 *     __security_check_cookie @ 0x180025B30 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId(
        Windows::Gaming::Preview::GamesEnumeration *this,
        struct ITileInfo *a2,
        unsigned __int16 **a3)
{
  __int64 v4; // rdx
  struct IApplicationIdentifier **v5; // r8
  int ShellProperty; // eax
  int v7; // edi
  int AppIdentifierFromTile; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  LPVOID v15; // rax
  int LegacyPhoneProductId; // eax
  unsigned int v17; // eax
  unsigned int v18; // r8d
  unsigned int v20[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+30h] [rbp-D8h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C8h]
  __int64 v24; // [rsp+48h] [rbp-C0h]
  __int64 v25; // [rsp+50h] [rbp-B8h]
  _BYTE v26[72]; // [rsp+58h] [rbp-B0h] BYREF
  OneCoreDataHelpers *v27; // [rsp+A0h] [rbp-68h]
  struct _GUID v28; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v29[272]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v25 = -2LL;
  *(_QWORD *)a2 = 0LL;
  TileDataLayerItemWrappers::TDLTileInfoHelper::TDLTileInfoHelper(
    (TileDataLayerItemWrappers::TDLTileInfoHelper *)v26,
    this);
  v23 = -1LL;
  v24 = -1LL;
  pv = 0LL;
  LOBYTE(v20[0]) = 0;
  TileDataLayerItemWrappers::TDLTileInfoHelper::GetShellProperty(v26, v4, v20);
  if ( LOBYTE(v20[0]) )
  {
    ShellProperty = TileDataLayerItemWrappers::TDLTileInfoHelper::GetShellProperty(v26, 5LL, &pv);
    v7 = ShellProperty;
    if ( ShellProperty < 0 )
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        662LL,
        (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)ShellProperty);
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v21 = 0LL;
  AppIdentifierFromTile = OneCoreDataHelpers::GetAppIdentifierFromTile(v27, (struct ITileInfo *)&v21, v5);
  if ( AppIdentifierFromTile < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x29B,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)AppIdentifierFromTile);
    v9 = TileDataLayerItemWrappers::TDLTileInfoHelper::GetShellProperty(v26, 2LL, &pv);
    v7 = v9;
    if ( v9 < 0 )
    {
      v10 = 676LL;
      goto LABEL_9;
    }
LABEL_11:
    v12 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
LABEL_13:
    v7 = 0;
    goto LABEL_14;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v21 + 80LL))(v21, &pv);
  v7 = v9;
  if ( v9 >= 0 )
    goto LABEL_11;
  v10 = 669LL;
LABEL_9:
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    v10,
    (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
    (const char *)(unsigned int)v9);
  v11 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
LABEL_14:
  if ( v7 < 0 )
  {
    v13 = (unsigned int)v7;
    v14 = 24LL;
LABEL_25:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v14,
      (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\tdlutility.cpp",
      (const char *)v13);
    goto LABEL_28;
  }
  v15 = pv;
  if ( !pv || !*(_WORD *)pv )
  {
    LegacyPhoneProductId = TileDataLayerItemWrappers::TDLTileInfoHelper::GetLegacyPhoneProductId(
                             (TileDataLayerItemWrappers::TDLTileInfoHelper *)v26,
                             &v28);
    v7 = LegacyPhoneProductId;
    if ( LegacyPhoneProductId < 0 )
    {
      v14 = 33LL;
LABEL_24:
      v13 = (unsigned int)LegacyPhoneProductId;
      goto LABEL_25;
    }
    LODWORD(v21) = 131;
    v17 = ApplicationUserModelIdFromProductId(&v28, &v21, v29);
    if ( v17 )
    {
      v7 = wil::details::in1diag3::Return_Win32PreRelease(retaddr, (void *)0x26, v18, (const char *)v17, v20[0]);
      goto LABEL_28;
    }
    LegacyPhoneProductId = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
                             (__int64)&pv,
                             (__int64)v29);
    v7 = LegacyPhoneProductId;
    if ( LegacyPhoneProductId < 0 )
    {
      v14 = 40LL;
      goto LABEL_24;
    }
    v15 = pv;
  }
  pv = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  *(_QWORD *)a2 = v15;
  v7 = 0;
LABEL_28:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v23 = 0LL;
  v24 = 0LL;
  TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)v26);
  return (unsigned int)v7;
}
