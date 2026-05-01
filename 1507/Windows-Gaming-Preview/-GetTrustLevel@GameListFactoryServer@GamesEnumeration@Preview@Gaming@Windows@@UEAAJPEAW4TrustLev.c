/*
 * XREFs of ?GetTrustLevel@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x18000E650
 * Callers:
 *     ?GetTrustLevel@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x18000E4B0 (-GetTrustLevel@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAJPEAW4Trust.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::GetTrustLevel(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *this,
        enum TrustLevel *a2)
{
  *a2 = PartialTrust;
  return 0LL;
}
