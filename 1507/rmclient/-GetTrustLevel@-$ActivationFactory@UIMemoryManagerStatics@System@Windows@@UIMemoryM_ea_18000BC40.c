/*
 * XREFs of ?GetTrustLevel@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@VNil@Details@WRL@Microsoft@@$0A@@WRL@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18000BC40
 * Callers:
 *     ?GetTrustLevel@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@VNil@Details@WRL@Microsoft@@$0A@@WRL@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x180008EB0 (-GetTrustLevel@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics.c)
 *     ?GetTrustLevel@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@VNil@Details@WRL@Microsoft@@$0A@@WRL@Microsoft@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x180008EC0 (-GetTrustLevel@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryM_ea_180008EC0.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::Nil,0>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    *a2 = (*(__int64 (__fastcall **)(_QWORD))(v2 + 16))(*(_QWORD *)(v2 + 16));
  else
    *a2 = 2;
  return 0LL;
}
