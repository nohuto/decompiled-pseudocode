/*
 * XREFs of ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180010DF0
 * Callers:
 *     ?_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z @ 0x18000978C (-_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z.c)
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800117A8 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_GetLogoFromDesktopTile@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x180011FB0 (-_GetLogoFromDesktopTile@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     ?_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180012280 (-_InitializeAppDisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180012CB0 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileInfo@@@Z @ 0x18001CF6C (-RuntimeClassInitialize@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUITileI.c)
 *     ?RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4GameListCategory@2345@0PEAUITileManager@@PEAUITileInfo@@@Z @ 0x18001D4D0 (-RuntimeClassInitialize@SetCategoryOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJW4Gam.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::RaiseException(Microsoft::WRL::Details *this)
{
  RaiseException((DWORD)this, 1u, 0, 0LL);
}
