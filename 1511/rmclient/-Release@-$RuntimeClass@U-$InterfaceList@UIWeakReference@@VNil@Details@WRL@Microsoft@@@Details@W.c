/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800093F0
 * Callers:
 *     ??_GCProcessMemoryReport@System@Windows@@UEAAPEAXI@Z @ 0x180003070 (--_GCProcessMemoryReport@System@Windows@@UEAAPEAXI@Z.c)
 *     ??_ECAppMemoryReport@System@Windows@@UEAAPEAXI@Z @ 0x180003A80 (--_ECAppMemoryReport@System@Windows@@UEAAPEAXI@Z.c)
 *     ?Release@CAppMemoryReport@System@Windows@@UEAAKXZ @ 0x180003B10 (-Release@CAppMemoryReport@System@Windows@@UEAAKXZ.c)
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180003FB0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     ??1?$RuntimeClass@U?$InterfaceList@UIAppMemoryReport@System@Windows@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18000BAA4 (--1-$RuntimeClass@U-$InterfaceList@UIAppMemoryReport@System@Windows@@U-$InterfaceList@UIInspecta.c)
 *     ??1?$RuntimeClass@U?$InterfaceList@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18000D2A4 (--1-$RuntimeClass@U-$InterfaceList@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@U-$Int.c)
 *     ??_E?$RuntimeClass@UIProcessMemoryReport@System@Windows@@UIInspectable@@VNil@Details@WRL@Microsoft@@V5678@V5678@V5678@V5678@V5678@V5678@V5678@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000D450 (--_E-$RuntimeClass@UIProcessMemoryReport@System@Windows@@UIInspectable@@VNil@Details@WRL@Microso.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v1; // edi

  v1 = _InterlockedDecrement(a1 + 3);
  if ( !v1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
