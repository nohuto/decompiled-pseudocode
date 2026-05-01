/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIVisualElementEventSink@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180004920
 * Callers:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180004B40 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IAsyncOperationCompletedHandler@PEAUIRandomAccessStr.c)
 *     ??_EGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18000ADA0 (--_EGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 *     ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x18000AEB8 (-RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ.c)
 *     ??1?$ComPtr@VTileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18000C550 (--1-$ComPtr@VTileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAA@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IVisualElementEventSink,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        volatile signed __int32 *a1)
{
  signed __int32 i; // r8d
  unsigned __int32 v2; // ebx

  for ( i = *((_DWORD *)a1 + 9);
        i != 0x7FFFFFFF && i != _InterlockedCompareExchange(a1 + 9, i - 1, i);
        i = *((_DWORD *)a1 + 9) )
  {
    ;
  }
  v2 = i - 1;
  if ( i == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  return v2;
}
