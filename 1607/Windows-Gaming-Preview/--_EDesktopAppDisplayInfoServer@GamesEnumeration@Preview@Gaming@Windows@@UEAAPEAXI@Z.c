/*
 * XREFs of ??_EDesktopAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x180018490
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000AA50 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002684C (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

HSTRING *__fastcall Windows::Gaming::Preview::GamesEnumeration::DesktopAppDisplayInfoServer::`vector deleting destructor'(
        HSTRING *this,
        char a2)
{
  HSTRING v4; // rcx
  HSTRING v5; // rcx
  HSTRING v6; // rcx
  __int64 v7; // rcx
  HSTRING v8; // rcx

  WindowsDeleteString(this[10]);
  this[10] = 0LL;
  v4 = this[9];
  if ( v4 )
  {
    this[9] = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = this[8];
  if ( v5 )
  {
    this[8] = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = this[7];
  if ( v6 )
  {
    this[7] = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = (__int64)this[6];
  if ( v7 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v7));
  v8 = this[4];
  if ( v8 )
  {
    this[4] = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
