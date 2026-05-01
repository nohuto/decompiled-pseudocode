/*
 * XREFs of ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001F18C
 * Callers:
 *     ?_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@Z @ 0x18000BDC0 (-_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_V.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAUITileInfo@@@Z @ 0x180013A64 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIT.c)
 *     ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001EA34 (-RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4Gam.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x180004218 (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x180005154 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC44 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SynthesizeLegacyPhoneAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIApplicationIdentifier@@PEAPEAG@Z @ 0x18001F584 (-SynthesizeLegacyPhoneAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIApplicatio.c)
 *     ?GetStringMetaProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEAPEAG@Z @ 0x1800237E4 (-GetStringMetaProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEAPEAG@Z.c)
 *     ??$GetSimpleDataMetaProperty@_N@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEA_N@Z @ 0x1800249A4 (--$GetSimpleDataMetaProperty@_N@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEA_N@Z.c)
 *     ?GetAppIdentifierFromTile@OneCoreDataHelpers@@YAJPEAUITileInfo@@PEAPEAUIApplicationIdentifier@@@Z @ 0x1800253F8 (-GetAppIdentifierFromTile@OneCoreDataHelpers@@YAJPEAUITileInfo@@PEAPEAUIApplicationIdentifier@@@.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId(
        Windows::Gaming::Preview::GamesEnumeration *this,
        struct ITileInfo *a2,
        unsigned __int16 **a3)
{
  int StringMetaProperty; // eax
  struct IApplicationIdentifier **v6; // r8
  int v7; // ebx
  int v8; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  Windows::Gaming::Preview::GamesEnumeration *v11; // rcx
  int v12; // eax
  int v13; // eax
  Windows::Gaming::Preview::GamesEnumeration *v14; // rcx
  int AppIdentifierFromTile; // eax
  unsigned __int16 **v16; // r8
  __int64 v17; // rdx
  Windows::Gaming::Preview::GamesEnumeration *v18; // rcx
  Windows::Gaming::Preview::GamesEnumeration *v19; // rcx
  LPVOID v20; // rax
  LPVOID pv; // [rsp+30h] [rbp-21h] BYREF
  __int64 v23; // [rsp+38h] [rbp-19h]
  __int64 v24; // [rsp+40h] [rbp-11h]
  _BYTE v25[72]; // [rsp+48h] [rbp-9h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, Windows::Gaming::Preview::GamesEnumeration **); // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  Windows::Gaming::Preview::GamesEnumeration *v28; // [rsp+C0h] [rbp+6Fh] BYREF

  *(_QWORD *)a2 = 0LL;
  TileDataLayerItemWrappers::TDLTileInfoHelper::TDLTileInfoHelper(
    (TileDataLayerItemWrappers::TDLTileInfoHelper *)v25,
    this);
  v23 = -1LL;
  v24 = -1LL;
  pv = 0LL;
  LOBYTE(v28) = 0;
  TileDataLayerItemWrappers::TDLTileInfoHelper::GetSimpleDataMetaProperty<bool>(
    v25,
    L"AppResolver_IsDesktopAppTile",
    &v28);
  if ( (_BYTE)v28 )
  {
    pv = 0LL;
    StringMetaProperty = TileDataLayerItemWrappers::TDLTileInfoHelper::GetStringMetaProperty(
                           (TileDataLayerItemWrappers::TDLTileInfoHelper *)v25,
                           L"AppResolver_AppUserModelID",
                           (unsigned __int16 **)&pv);
    v7 = 0;
    if ( StringMetaProperty < 0 )
      v7 = StringMetaProperty;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x349,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  v28 = 0LL;
  v8 = (**v26)(v26, &GUID_66b7d702_1591_4c2e_adfc_5997d695119f, &v28);
  v7 = v8;
  if ( v8 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *, LPVOID *))(*(_QWORD *)v28 + 24LL))(
            v28,
            &pv);
    if ( v12 >= 0 )
      goto LABEL_15;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x34F,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v12);
    pv = 0LL;
    v13 = TileDataLayerItemWrappers::TDLTileInfoHelper::GetStringMetaProperty(
            (TileDataLayerItemWrappers::TDLTileInfoHelper *)v25,
            L"AppResolver_HackedInAppId",
            (unsigned __int16 **)&pv);
    v7 = 0;
    if ( v13 < 0 )
      v7 = v13;
    if ( v7 >= 0 )
    {
LABEL_15:
      v14 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v14 + 16LL))(v14);
      }
LABEL_17:
      v7 = 0;
      goto LABEL_18;
    }
    v9 = (unsigned int)v7;
    v10 = 852LL;
  }
  else
  {
    v9 = (unsigned int)v8;
    v10 = 846LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
    (const char *)v9);
  v11 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v11 + 16LL))(v11);
  }
LABEL_18:
  if ( v7 != -2147023728 )
  {
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tdlutility.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_32;
    }
    goto LABEL_31;
  }
  v28 = 0LL;
  AppIdentifierFromTile = OneCoreDataHelpers::GetAppIdentifierFromTile(this, (struct ITileInfo *)&v28, v6);
  v7 = AppIdentifierFromTile;
  if ( AppIdentifierFromTile < 0 )
  {
    v17 = 33LL;
    goto LABEL_25;
  }
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v23 = -1LL;
  v24 = -1LL;
  AppIdentifierFromTile = Windows::Gaming::Preview::GamesEnumeration::SynthesizeLegacyPhoneAppUserModelId(
                            v28,
                            (struct IApplicationIdentifier *)&pv,
                            v16);
  v7 = AppIdentifierFromTile;
  if ( AppIdentifierFromTile >= 0 )
  {
    v19 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v19 + 16LL))(v19);
    }
LABEL_31:
    v20 = pv;
    pv = 0LL;
    v24 = 0LL;
    v23 = 0LL;
    *(_QWORD *)a2 = v20;
    v7 = 0;
    goto LABEL_32;
  }
  v17 = 34LL;
LABEL_25:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tdlutility.cpp",
    (const char *)(unsigned int)AppIdentifierFromTile);
  v18 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v18 + 16LL))(v18);
  }
LABEL_32:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v23 = 0LL;
  v24 = 0LL;
  TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)v25);
  return (unsigned int)v7;
}
