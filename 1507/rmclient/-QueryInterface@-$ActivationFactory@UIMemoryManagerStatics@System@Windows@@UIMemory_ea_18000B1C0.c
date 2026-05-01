/*
 * XREFs of ?QueryInterface@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@VNil@Details@WRL@Microsoft@@$0A@@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000B1C0
 * Callers:
 *     ?QueryInterface@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@VNil@Details@WRL@Microsoft@@$0A@@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180008F00 (-QueryInterface@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatic.c)
 *     ?QueryInterface@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@VNil@Details@WRL@Microsoft@@$0A@@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180008F10 (-QueryInterface@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemory_ea_180008F10.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@U?$InterfaceList@UIActivationFactory@@U?$InterfaceList@UIMemoryManagerStatics@System@Windows@@U?$InterfaceList@UIMemoryManagerStatics2@System@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$0A@$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180002A44 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@U-$InterfaceList@UIActiva.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180003B60 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::Nil,0>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v4; // rcx
  __int64 *v5; // r8
  const struct _GUID *v6; // r9
  int CanCastTo; // esi
  _QWORD *v8; // r8

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v5 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,Microsoft::WRL::Details::InterfaceList<IActivationFactory,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::Nil>>>,0,0>::CanCastTo(
                  a1,
                  v6);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  }
  return (unsigned int)CanCastTo;
}
