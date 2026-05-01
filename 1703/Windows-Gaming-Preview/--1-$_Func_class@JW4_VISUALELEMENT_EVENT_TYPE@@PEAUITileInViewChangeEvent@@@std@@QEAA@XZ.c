/*
 * XREFs of ??1?$_Func_class@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@std@@QEAA@XZ @ 0x18000BFE4
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18002A883 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassIni_ea_18002A883.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18002A88F (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassIni_ea_18002A88F.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::dtor$2 @ 0x18002A89B (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassIni_ea_18002A89B.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x18002AFD4 (_Windows--Gaming--Preview--GamesEnumeration--TileNotificationSink--_scalar_deleting_ea_18002AFD4.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x18002AFE4 (_Windows--Gaming--Preview--GamesEnumeration--TileNotificationSink--_scalar_deleting_ea_18002AFE4.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::_scalar_deleting_destructor__::_1_::dtor$4 @ 0x18002AFF4 (_Windows--Gaming--Preview--GamesEnumeration--TileNotificationSink--_scalar_deleting_ea_18002AFF4.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::SetViewContentsChangedHandler_::_1_::dtor$1 @ 0x18002B007 (_Windows--Gaming--Preview--GamesEnumeration--TileNotificationSink--SetViewContentsChangedHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Func_class<long,enum _VISUALELEMENT_EVENT_TYPE,ITileInViewChangeEvent *>::~_Func_class<long,enum _VISUALELEMENT_EVENT_TYPE,ITileInViewChangeEvent *>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
