/*
 * XREFs of ??1?$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z@std@@QEAA@XZ @ 0x18000A400
 * Callers:
 *     ?RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x180008E3C (-RuntimeClassInitialize@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ.c)
 *     ??_GTileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18001E690 (--_GTileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18002771B (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassIni_ea_18002771B.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::dtor$1 @ 0x180027733 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassIni_ea_180027733.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::dtor$2 @ 0x18002774B (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassIni_ea_18002774B.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::_scalar_deleting_destructor__::_1_::dtor$2 @ 0x180027F98 (_Windows--Gaming--Preview--GamesEnumeration--TileNotificationSink--_scalar_deleting_ea_180027F98.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x180027FA8 (_Windows--Gaming--Preview--GamesEnumeration--TileNotificationSink--_scalar_deleting_ea_180027FA8.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::_scalar_deleting_destructor__::_1_::dtor$4 @ 0x180027FB8 (_Windows--Gaming--Preview--GamesEnumeration--TileNotificationSink--_scalar_deleting_ea_180027FB8.c)
 * Callees:
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??3@YAXPEAX@Z @ 0x180025E28 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::function<long (enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *)>::~function<long (enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *)>(
        _QWORD *a1)
{
  _QWORD *v1; // r14
  bool v3; // di
  _QWORD *v4; // r14

  v1 = (_QWORD *)a1[3];
  if ( v1 )
  {
    v3 = v1 != a1;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*v1 + 40LL))(a1[3], 0LL);
    if ( v3 )
      operator delete(v1);
    a1[3] = 0LL;
  }
  v4 = (_QWORD *)a1[3];
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*v4 + 40LL))(a1[3], 0LL);
    if ( v4 != a1 )
      operator delete(v4);
    a1[3] = 0LL;
  }
}
