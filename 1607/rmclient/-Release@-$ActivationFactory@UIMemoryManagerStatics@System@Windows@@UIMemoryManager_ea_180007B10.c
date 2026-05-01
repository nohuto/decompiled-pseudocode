/*
 * XREFs of ?Release@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180007B10
 * Callers:
 *     ?Release@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x180006900 (-Release@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@U.c)
 *     ?Release@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@WBA@EAAKXZ @ 0x180006910 (-Release@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManager_ea_180006910.c)
 *     ?Release@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@WBI@EAAKXZ @ 0x180006920 (-Release@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManager_ea_180006920.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800082E4 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,0>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // eax
  _BYTE *v3; // r10
  unsigned int v4; // edi
  char v5; // bl
  struct Microsoft::WRL::Details::ModuleBase *v6; // rcx

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 36), a2);
  v4 = v2;
  if ( v2 )
  {
    if ( (v3[56] & 4) == 0 && v2 == 1 )
    {
      v6 = Microsoft::WRL::Details::ModuleBase::module_;
LABEL_8:
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  else
  {
    v5 = v3[56] >> 2;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v3 + 56LL))(v3, 1LL);
    if ( (v5 & 1) != 0 )
    {
      v6 = Microsoft::WRL::Details::ModuleBase::module_;
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        goto LABEL_8;
    }
  }
  return v4;
}
