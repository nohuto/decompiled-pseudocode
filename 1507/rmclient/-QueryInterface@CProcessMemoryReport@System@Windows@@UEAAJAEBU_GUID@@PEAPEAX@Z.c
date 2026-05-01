/*
 * XREFs of ?QueryInterface@CProcessMemoryReport@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003B90
 * Callers:
 *     ??$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIProcessMemoryReport@System@Windows@@AEA_K1@Z @ 0x180002EF0 (--$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@D.c)
 *     ?QueryInterface@CProcessMemoryReport@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800090F0 (-QueryInterface@CProcessMemoryReport@System@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CProcessMemoryReport@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180009100 (-QueryInterface@CProcessMemoryReport@System@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180003B60 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIAppMemoryReport@System@Windows@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180003CB0 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIAppMemoryReport@System@Windows@@U-$InterfaceList@UIIns.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18000CCDC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@U-$InterfaceList@UIWeakRef.c)
 */

__int64 __fastcall Windows::System::CProcessMemoryReport::QueryInterface(
        Windows::System::CProcessMemoryReport *this,
        const struct _GUID *a2,
        void **a3)
{
  const struct _GUID *v4; // rcx
  _QWORD *v5; // r8
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  int CanCastTo; // ebx
  void (__fastcall *v10)(_QWORD); // rsi

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v5 = this;
    (*(void (__fastcall **)(Windows::System::CProcessMemoryReport *))(*(_QWORD *)this + 8LL))(this);
    return 0;
  }
  if ( InlineIsEqualGUID(v6, &GUID_087305a8_9b70_4782_8741_3a982b6ce5e4) )
  {
    *v7 = this;
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,1,0>::CanCastTo(
                  (char *)this + 8,
                  v8);
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
  }
  v10 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL);
  if ( (char *)v10 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::System::IAppMemoryReport,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::AddRef )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::System::IAppMemoryReport,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::AddRef(*v7);
  else
    v10(*v7);
  return (unsigned int)CanCastTo;
}
