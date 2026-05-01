/*
 * XREFs of ?Release@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@VNil@Details@WRL@Microsoft@@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x18000B260
 * Callers:
 *     ?Release@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@VNil@Details@WRL@Microsoft@@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x180008F40 (-Release@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@V.c)
 *     ?Release@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@VNil@Details@WRL@Microsoft@@$0A@@WRL@Microsoft@@WBA@EAAKXZ @ 0x180008F50 (-Release@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManager_ea_180008F50.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000BCE4 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::Nil,0>::Release(
        _BYTE *a1,
        volatile int *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // esi
  char v5; // di
  struct Microsoft::WRL::Details::ModuleBase *v6; // rdi

  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 28), a2);
  v4 = v3;
  if ( v3 )
  {
    if ( (a1[48] & 4) == 0 && v3 == 1 )
    {
      v6 = Microsoft::WRL::Details::ModuleBase::module_;
LABEL_8:
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  else
  {
    v5 = a1[48] >> 2;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 56LL))(a1, 1LL);
    if ( (v5 & 1) != 0 )
    {
      v6 = Microsoft::WRL::Details::ModuleBase::module_;
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        goto LABEL_8;
    }
  }
  return v4;
}
