/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D800
 * Callers:
 *     ??_GCProcessMemoryReport@System@Windows@@UEAAPEAXI@Z @ 0x180003C50 (--_GCProcessMemoryReport@System@Windows@@UEAAPEAXI@Z.c)
 *     ??_ECAppMemoryReport@System@Windows@@UEAAPEAXI@Z @ 0x180003F70 (--_ECAppMemoryReport@System@Windows@@UEAAPEAXI@Z.c)
 *     ??1?$RuntimeClass@U?$InterfaceList@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18000C784 (--1-$RuntimeClass@U-$InterfaceList@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@U-$Int.c)
 *     ??_E?$RuntimeClass@UIProcessMemoryReport@System@Windows@@UIInspectable@@VNil@Details@WRL@Microsoft@@V5678@V5678@V5678@V5678@V5678@V5678@V5678@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000C940 (--_E-$RuntimeClass@UIProcessMemoryReport@System@Windows@@UIInspectable@@VNil@Details@WRL@Microso.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000BCE4 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v3; // esi

  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
  if ( !v3 )
  {
    if ( a1 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
