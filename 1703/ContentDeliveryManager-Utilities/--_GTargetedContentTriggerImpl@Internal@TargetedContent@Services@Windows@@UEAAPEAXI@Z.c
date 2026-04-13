/*
 * XREFs of ??_GTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAPEAXI@Z @ 0x180022380
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180011AB0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

HSTRING *__fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::`scalar deleting destructor'(
        HSTRING *this,
        char a2)
{
  __int64 v4; // rcx
  HSTRING v5; // rcx

  WindowsDeleteString(this[17]);
  this[17] = 0LL;
  WindowsDeleteString(this[16]);
  this[16] = 0LL;
  WindowsDeleteString(this[15]);
  this[15] = 0LL;
  WindowsDeleteString(this[14]);
  this[14] = 0LL;
  WindowsDeleteString(this[13]);
  this[13] = 0LL;
  WindowsDeleteString(this[12]);
  this[12] = 0LL;
  WindowsDeleteString(this[11]);
  this[11] = 0LL;
  WindowsDeleteString(this[10]);
  this[10] = 0LL;
  WindowsDeleteString(this[9]);
  this[9] = 0LL;
  WindowsDeleteString(this[8]);
  this[8] = 0LL;
  v4 = (__int64)this[6];
  if ( v4 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v4));
  v5 = this[4];
  if ( v5 )
  {
    this[4] = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
