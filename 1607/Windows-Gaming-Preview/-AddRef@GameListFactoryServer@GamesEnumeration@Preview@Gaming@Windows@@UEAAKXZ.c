/*
 * XREFs of ?AddRef@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x180013460
 * Callers:
 *     ?AddRef@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x180010240 (-AddRef@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ.c)
 *     ?AddRef@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumeration@Preview@Gaming@Windows@@VNil@Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@V9Details@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCA@EAAKXZ @ 0x180010600 (-AddRef@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIGameListStatics@GamesEnumera.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::AddRef(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *this)
{
  signed __int32 v1; // r9d
  unsigned int v2; // r8d

  v1 = *((_DWORD *)this + 11);
  v2 = 0x7FFFFFFF;
  if ( v1 != 0x7FFFFFFF )
  {
    do
    {
      if ( v1 == _InterlockedCompareExchange((volatile signed __int32 *)this + 11, v1 + 1, v1) )
        break;
      v1 = *((_DWORD *)this + 11);
    }
    while ( v1 != 0x7FFFFFFF );
    if ( v1 != 0x7FFFFFFF )
      v2 = v1 + 1;
  }
  if ( (*((_BYTE *)this + 64) & 4) == 0 && v2 == 2 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  return v2;
}
