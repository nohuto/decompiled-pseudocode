/*
 * XREFs of ??_EDesktopAppCreativeEventReportedCache@ContentManagement@@UEAAPEAXI@Z @ 0x18002A550
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C5F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

ContentManagement::DesktopAppCreativeEventReportedCache *__fastcall ContentManagement::DesktopAppCreativeEventReportedCache::`vector deleting destructor'(
        ContentManagement::DesktopAppCreativeEventReportedCache *this,
        char a2)
{
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v4 = (void *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    CoTaskMemFree(v4);
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v5 = *((_QWORD *)this + 7);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v5));
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
