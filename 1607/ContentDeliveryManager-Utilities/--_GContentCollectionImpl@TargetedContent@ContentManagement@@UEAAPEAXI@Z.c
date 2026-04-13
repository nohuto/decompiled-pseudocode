/*
 * XREFs of ??_GContentCollectionImpl@TargetedContent@ContentManagement@@UEAAPEAXI@Z @ 0x180044540
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C5F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

ContentManagement::TargetedContent::ContentCollectionImpl *__fastcall ContentManagement::TargetedContent::ContentCollectionImpl::`scalar deleting destructor'(
        ContentManagement::TargetedContent::ContentCollectionImpl *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  HSTRING v6; // rcx
  HSTRING v7; // rcx
  HSTRING v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (HSTRING)*((_QWORD *)this + 11);
  if ( v6 )
    WindowsDeleteString(v6);
  v7 = (HSTRING)*((_QWORD *)this + 10);
  if ( v7 )
    WindowsDeleteString(v7);
  v8 = (HSTRING)*((_QWORD *)this + 9);
  if ( v8 )
    WindowsDeleteString(v8);
  v9 = *((_QWORD *)this + 8);
  if ( v9 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v9));
  v10 = *((_QWORD *)this + 3);
  if ( v10 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
