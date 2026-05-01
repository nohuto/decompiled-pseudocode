/*
 * XREFs of ??1?$ComPtr@VTileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18000C550
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::dtor$3 @ 0x180027F32 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassInitialize_--_1_.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIVisualElementEventSink@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180004920 (-Release@-$RuntimeClass@U-$InterfaceList@UIVisualElementEventSink@@U-$InterfaceList@VFtmBase@WRL.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink>::~ComPtr<Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IVisualElementEventSink,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}
