/*
 * XREFs of ??_EGameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18000ADA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIVisualElementEventSink@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180004920 (-Release@-$RuntimeClass@U-$InterfaceList@UIVisualElementEventSink@@U-$InterfaceList@VFtmBase@WRL.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800133F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002684C (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::`vector deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *this,
        char a2)
{
  volatile signed __int32 *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::`vftable';
  *((_QWORD *)this + 1) = &Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::`vftable'{for `Microsoft::WRL::FtmBase'};
  *((_QWORD *)this + 4) = &Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListStatics,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( *((_QWORD *)this + 9) )
    CoDecrementMTAUsage();
  if ( *((_QWORD *)this + 19) )
  {
    *((_QWORD *)this + 19) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release();
  }
  if ( *((_QWORD *)this + 16) )
  {
    *((_QWORD *)this + 16) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release();
  }
  if ( *((_QWORD *)this + 13) )
  {
    *((_QWORD *)this + 13) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release();
  }
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    *((_QWORD *)this + 12) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IVisualElementEventSink,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
  }
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 10);
  if ( v6 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_DWORD *)this + 11) = -1073741823;
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
