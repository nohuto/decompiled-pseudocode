/*
 * XREFs of ?GetTrustLevel@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x1800107C0
 * Callers:
 *     ?GetTrustLevel@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x1800102D0 (-GetTrustLevel@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAJPEAW4Trust.c)
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
