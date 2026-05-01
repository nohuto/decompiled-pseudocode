/*
 * XREFs of ?AddRef@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18000BDC0
 * Callers:
 *     ?AddRef@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x180009620 (-AddRef@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UI.c)
 *     ?AddRef@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@WBA@EAAKXZ @ 0x180009630 (-AddRef@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerS_ea_180009630.c)
 *     ?AddRef@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@WBI@EAAKXZ @ 0x180009640 (-AddRef@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerS_ea_180009640.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,0>::AddRef(
        __int64 a1)
{
  unsigned __int32 v1; // esi

  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 36));
  if ( (*(_BYTE *)(a1 + 56) & 4) == 0 && v1 == 2 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return v1;
}
