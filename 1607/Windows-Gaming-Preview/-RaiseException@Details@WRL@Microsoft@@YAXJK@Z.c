/*
 * XREFs of ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004DCC
 * Callers:
 *     ?GetLogo@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foundation@5@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x180004330 (-GetLogo@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foundat.c)
 *     ?_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z @ 0x18000BBEC (-_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z.c)
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180013BD4 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18001429C (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180014C40 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileInfo@@@Z @ 0x18001E574 (-RuntimeClassInitialize@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileI.c)
 *     ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001EA34 (-RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4Gam.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::RaiseException(Microsoft::WRL::Details *this)
{
  RaiseException((DWORD)this, 1u, 0, 0LL);
}
