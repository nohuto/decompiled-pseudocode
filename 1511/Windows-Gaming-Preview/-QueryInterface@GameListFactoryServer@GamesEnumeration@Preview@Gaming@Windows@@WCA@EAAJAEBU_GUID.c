/*
 * XREFs of ?QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000E020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::QueryInterface(
           (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *)(a1 - 32),
           a2,
           a3);
}
