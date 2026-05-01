/*
 * XREFs of ??_GGameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x1800170F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800079E0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 *     ??1CFTMCrossProcClientImpl@@QEAA@XZ @ 0x18001D1B8 (--1CFTMCrossProcClientImpl@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180025E28 (--3@YAXPEAX@Z.c)
 */

Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::`scalar deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 13);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v4));
  CFTMCrossProcClientImpl::~CFTMCrossProcClientImpl((Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *)((char *)this + 24));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
