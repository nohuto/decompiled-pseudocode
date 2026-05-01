/*
 * XREFs of ??_GTileNotificationSink@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18001E690
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007B70 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z@std@@QEAA@XZ @ 0x18000A400 (--1-$function@$$A6AJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z@std@@QEAA@XZ.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ??3@YAXPEAX@Z @ 0x180025E28 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=5
Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink *__fastcall Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::`scalar deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink *this,
        char a2)
{
  unsigned int v4; // ebp
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_QWORD *)this = &Windows::Gaming::Preview::GamesEnumeration::TileNotificationSink::`vftable'{for `IVisualElementEventSink'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IVisualElementEventSink,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
  v4 = *((_DWORD *)this + 10);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 6) + 32LL))(*((_QWORD *)this + 6), v4);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x15,
        (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\tilenotificationsink.cpp",
        (const char *)(unsigned int)v5);
  }
  std::function<long (enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *)>::~function<long (enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *)>((_QWORD *)this + 15);
  std::function<long (enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *)>::~function<long (enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *)>((_QWORD *)this + 11);
  std::function<long (enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *)>::~function<long (enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *)>((_QWORD *)this + 7);
  v6 = *((_QWORD *)this + 6);
  if ( v6 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_DWORD *)this + 9) = -1073741823;
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
