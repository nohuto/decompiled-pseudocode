/*
 * XREFs of ?AddRef@LaunchOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x180007770
 * Callers:
 *     ?AddRef@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x1800093A0 (-AddRef@DesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIInspectable@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180009480 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIInspectable@@U-$InterfaceList@VFtmBase@WRL@Microsoft@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::LaunchOperation::AddRef(
        Windows::Gaming::Preview::GamesEnumeration::LaunchOperation *this)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)this + 6);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 6, v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}
