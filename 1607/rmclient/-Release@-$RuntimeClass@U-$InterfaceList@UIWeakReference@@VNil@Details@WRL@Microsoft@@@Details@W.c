/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180009550
 * Callers:
 *     ??_EAppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAPEAXI@Z @ 0x180002200 (--_EAppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAPEAXI@Z.c)
 *     ??_ECAppMemoryReport@System@Windows@@UEAAPEAXI@Z @ 0x180004280 (--_ECAppMemoryReport@System@Windows@@UEAAPEAXI@Z.c)
 *     ?Release@CAppMemoryReport@System@Windows@@UEAAKXZ @ 0x180004320 (-Release@CAppMemoryReport@System@Windows@@UEAAKXZ.c)
 *     ??1?$RuntimeClass@U?$InterfaceList@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800078F8 (--1-$RuntimeClass@U-$InterfaceList@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@U-$Int.c)
 *     ??1?$RuntimeClass@U?$InterfaceList@UIAppMemoryReport@System@Windows@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180007AA0 (--1-$RuntimeClass@U-$InterfaceList@UIAppMemoryReport@System@Windows@@U-$InterfaceList@UIInspecta.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800082E4 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r10

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 32LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
