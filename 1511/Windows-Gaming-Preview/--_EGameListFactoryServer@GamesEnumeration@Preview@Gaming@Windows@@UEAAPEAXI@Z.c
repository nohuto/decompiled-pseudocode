/*
 * XREFs of ??_EGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x180008C00
 * Callers:
 *     <none>
 * Callees:
 *     ??1GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x180008C38 (--1GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180025CF8 (--3@YAXPEAX@Z.c)
 */

Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::`vector deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::~GameListFactoryServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
