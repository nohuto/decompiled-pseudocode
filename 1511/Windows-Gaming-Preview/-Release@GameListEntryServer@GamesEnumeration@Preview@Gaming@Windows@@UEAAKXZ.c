/*
 * XREFs of ?Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x180007610
 * Callers:
 *     ?Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ @ 0x180006330 (-Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ.c)
 *     ?Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAKXZ @ 0x180006420 (-Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAKXZ.c)
 *     ?Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAKXZ @ 0x180006510 (-Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAKXZ.c)
 *     ?Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WEA@EAAKXZ @ 0x180006550 (-Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WEA@EAAKXZ.c)
 *     ?Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x180006600 (-Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::Release(
        volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}
