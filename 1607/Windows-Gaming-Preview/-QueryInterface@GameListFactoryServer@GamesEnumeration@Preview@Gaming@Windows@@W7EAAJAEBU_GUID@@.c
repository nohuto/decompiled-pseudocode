/*
 * XREFs of ?QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800106C0
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
           (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *)(a1 - 8),
           a2,
           a3);
}
