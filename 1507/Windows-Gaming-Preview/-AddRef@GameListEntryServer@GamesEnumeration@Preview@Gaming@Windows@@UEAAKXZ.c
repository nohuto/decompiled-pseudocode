/*
 * XREFs of ?AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x180007440
 * Callers:
 *     ?AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x180006370 (-AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ.c)
 *     ?AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ @ 0x180006470 (-AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ.c)
 *     ?AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAKXZ @ 0x180006580 (-AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAKXZ.c)
 *     ?AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAKXZ @ 0x180006680 (-AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAKXZ.c)
 *     ?AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WEA@EAAKXZ @ 0x1800066C0 (-AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::AddRef(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(this);
}
