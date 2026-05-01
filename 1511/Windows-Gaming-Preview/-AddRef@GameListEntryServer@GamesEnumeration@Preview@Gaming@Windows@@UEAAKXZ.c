/*
 * XREFs of ?AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x1800072A0
 * Callers:
 *     ?AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x180006340 (-AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ.c)
 *     ?AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ @ 0x180006430 (-AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ.c)
 *     ?AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAKXZ @ 0x180006520 (-AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAKXZ.c)
 *     ?AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAKXZ @ 0x180006610 (-AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAKXZ.c)
 *     ?AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WEA@EAAKXZ @ 0x180006640 (-AddRef@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WEA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::AddRef(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)this + 12);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 12, v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
