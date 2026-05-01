/*
 * XREFs of ?Release@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18000BD10
 * Callers:
 *     ?Release@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x1800097E0 (-Release@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@U.c)
 *     ?Release@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800097F0 (-Release@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManager_ea_1800097F0.c)
 *     ?Release@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@WBI@EAAKXZ @ 0x180009800 (-Release@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManager_ea_180009800.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,0>::Release(
        __int64 a1)
{
  unsigned __int32 v1; // esi
  char v2; // di

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 36));
  if ( v1 )
  {
    if ( (*(_BYTE *)(a1 + 56) & 4) == 0 && v1 == 1 )
      goto LABEL_7;
  }
  else
  {
    v2 = *(_BYTE *)(a1 + 56) >> 2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, 1LL);
    if ( (v2 & 1) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_7:
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
