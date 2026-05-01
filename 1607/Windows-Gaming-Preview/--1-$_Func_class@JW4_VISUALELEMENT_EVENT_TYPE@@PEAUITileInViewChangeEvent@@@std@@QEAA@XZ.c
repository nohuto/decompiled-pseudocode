/*
 * XREFs of ??1?$_Func_class@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@std@@QEAA@XZ @ 0x18000C574
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::dtor$0 @ 0x180027F4A (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassIni_ea_180027F4A.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::dtor$1 @ 0x180027F56 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassIni_ea_180027F56.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::dtor$2 @ 0x180027F62 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassIni_ea_180027F62.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x1800287D9 (_Windows--Gaming--Preview--GamesEnumeration--TileNotificationSink--_scalar_deleting_ea_1800287D9.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x1800287E9 (_Windows--Gaming--Preview--GamesEnumeration--TileNotificationSink--_scalar_deleting_ea_1800287E9.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::_scalar_deleting_destructor__::_1_::dtor$4 @ 0x1800287F9 (_Windows--Gaming--Preview--GamesEnumeration--TileNotificationSink--_scalar_deleting_ea_1800287F9.c)
 *     _std::function_long___cdecl(enum__VISUALELEMENT_EVENT_TYPE_ITileInViewChangeEvent_____ptr64)_::operator__::_1_::dtor$1 @ 0x180028812 (_std--function_long___cdecl(enum__VISUALELEMENT_EVENT_TYPE_ITileInViewChangeEvent_____ptr64)_--o.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
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
