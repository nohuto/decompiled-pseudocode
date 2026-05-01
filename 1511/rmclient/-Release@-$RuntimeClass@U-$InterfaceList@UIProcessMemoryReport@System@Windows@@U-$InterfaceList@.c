/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIProcessMemoryReport@System@Windows@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180003110
 * Callers:
 *     ?Release@CProcessMemoryReport@System@Windows@@UEAAKXZ @ 0x180003100 (-Release@CProcessMemoryReport@System@Windows@@UEAAKXZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIProcessMemoryReport@System@Windows@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180009A90 (-Release@-$RuntimeClass@U-$InterfaceList@UIProcessMemoryReport@System@Windows@@U-$I_ea_180009A90.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIProcessMemoryReport@System@Windows@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180009AA0 (-Release@-$RuntimeClass@U-$InterfaceList@UIProcessMemoryReport@System@Windows@@U-$I_ea_180009AA0.c)
 * Callees:
 *     ??_GCProcessMemoryReport@System@Windows@@UEAAPEAXI@Z @ 0x180003070 (--_GCProcessMemoryReport@System@Windows@@UEAAPEAXI@Z.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x1800044E0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::System::IProcessMemoryReport,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // edi
  signed __int64 v3; // rtt
  Windows::System::CProcessMemoryReport *(__fastcall *v4)(Windows::System::CProcessMemoryReport *, char); // rsi
  void (__fastcall *v5)(struct Microsoft::WRL::Details::ModuleBase *); // rsi

  v1 = *((_QWORD *)a1 + 4);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64(a1 + 4, v1 - 1, v1);
    if ( v3 == v1 )
      goto LABEL_4;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_4:
  if ( !v2 )
  {
    if ( a1 )
    {
      v4 = *(Windows::System::CProcessMemoryReport *(__fastcall **)(Windows::System::CProcessMemoryReport *, char))(*a1 + 64);
      if ( v4 == Windows::System::CProcessMemoryReport::`scalar deleting destructor' )
        Windows::System::CProcessMemoryReport::`scalar deleting destructor'(
          (Windows::System::CProcessMemoryReport *)a1,
          1);
      else
        v4((Windows::System::CProcessMemoryReport *)a1, 1);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v5 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL);
      if ( (char *)v5 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
      else
        v5(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v2;
}
