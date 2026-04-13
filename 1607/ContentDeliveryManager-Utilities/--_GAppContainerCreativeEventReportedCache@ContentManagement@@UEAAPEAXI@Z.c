/*
 * XREFs of ??_GAppContainerCreativeEventReportedCache@ContentManagement@@UEAAPEAXI@Z @ 0x18001AF30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C5F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIComPoolTask@Internal@Windows@@VNil@Details@WRL@Micros.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall ContentManagement::AppContainerCreativeEventReportedCache::`scalar deleting destructor'(
        void **this,
        char a2)
{
  __int64 v4; // rcx
  void *v5; // rcx

  if ( (unsigned __int64)this[11] >= 8 )
    operator delete(this[8]);
  this[11] = (void *)7;
  this[10] = 0LL;
  *((_WORD *)this + 32) = 0;
  v4 = (__int64)this[7];
  if ( v4 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v4));
  v5 = this[3];
  if ( v5 )
  {
    this[3] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
