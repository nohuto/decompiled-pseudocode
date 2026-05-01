/*
 * XREFs of ?GetAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001DCC8
 * Callers:
 *     ?_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@Z @ 0x18000997C (-_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_V.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAUITileInfo@@@Z @ 0x18001161C (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIT.c)
 *     ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001D4D0 (-RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4Gam.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x180011EBC (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x18001CE38 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ?SynthesizeLegacyPhoneAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIApplicationIdentifier@@PEAPEAG@Z @ 0x18001DF68 (-SynthesizeLegacyPhoneAppUserModelId@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIApplicatio.c)
 *     ?GetAppUserModelId@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z @ 0x180022A1C (-GetAppUserModelId@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z.c)
 *     ?GetAppIdentifierFromTile@OneCoreDataHelpers@@YAJPEAUITileInfo@@PEAPEAUIApplicationIdentifier@@@Z @ 0x180024CD8 (-GetAppIdentifierFromTile@OneCoreDataHelpers@@YAJPEAUITileInfo@@PEAPEAUIApplicationIdentifier@@@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GetAppUserModelId(
        Windows::Gaming::Preview::GamesEnumeration *this,
        struct ITileInfo *a2,
        unsigned __int16 **a3)
{
  int AppUserModelId; // eax
  struct IApplicationIdentifier **v6; // r8
  unsigned int v7; // edi
  LPVOID v8; // rax
  int AppIdentifierFromTile; // eax
  unsigned __int16 **v10; // r8
  __int64 v11; // rdx
  Windows::Gaming::Preview::GamesEnumeration *v12; // rsi
  void *v13; // rcx
  Windows::Gaming::Preview::GamesEnumeration *v14; // rdi
  LPVOID pv; // [rsp+30h] [rbp-21h] BYREF
  __int64 v17; // [rsp+38h] [rbp-19h]
  __int64 v18; // [rsp+40h] [rbp-11h]
  _BYTE v19[80]; // [rsp+48h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  Windows::Gaming::Preview::GamesEnumeration *v21; // [rsp+C0h] [rbp+6Fh] BYREF

  *(_QWORD *)a2 = 0LL;
  TileDataLayerItemWrappers::TDLTileInfoHelper::TDLTileInfoHelper(
    (TileDataLayerItemWrappers::TDLTileInfoHelper *)v19,
    this);
  pv = 0LL;
  v17 = -1LL;
  v18 = -1LL;
  AppUserModelId = TileDataLayerItemWrappers::TDLTileInfoHelper::GetAppUserModelId(
                     (TileDataLayerItemWrappers::TDLTileInfoHelper *)v19,
                     (unsigned __int16 **)&pv);
  v7 = AppUserModelId;
  if ( AppUserModelId < 0 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      24LL,
      (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\tdlutility.cpp",
      (const char *)(unsigned int)AppUserModelId);
LABEL_13:
    v13 = pv;
    goto LABEL_18;
  }
  v8 = pv;
  if ( !pv || !*(_WORD *)pv )
  {
    v21 = 0LL;
    AppIdentifierFromTile = OneCoreDataHelpers::GetAppIdentifierFromTile(this, (struct ITileInfo *)&v21, v6);
    v7 = AppIdentifierFromTile;
    if ( AppIdentifierFromTile < 0 )
    {
      v11 = 33LL;
      goto LABEL_11;
    }
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v17 = -1LL;
    v18 = -1LL;
    AppIdentifierFromTile = Windows::Gaming::Preview::GamesEnumeration::SynthesizeLegacyPhoneAppUserModelId(
                              v21,
                              (struct IApplicationIdentifier *)&pv,
                              v10);
    v7 = AppIdentifierFromTile;
    if ( AppIdentifierFromTile < 0 )
    {
      v11 = 34LL;
LABEL_11:
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        v11,
        (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\tdlutility.cpp",
        (const char *)(unsigned int)AppIdentifierFromTile);
      v12 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v12 + 16LL))(v12);
      }
      goto LABEL_13;
    }
    v14 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v8 = pv;
  }
  v13 = 0LL;
  pv = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  *(_QWORD *)a2 = v8;
  v7 = 0;
LABEL_18:
  if ( v13 )
  {
    CoTaskMemFree(v13);
    pv = 0LL;
  }
  v17 = 0LL;
  v18 = 0LL;
  TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)v19);
  return v7;
}
