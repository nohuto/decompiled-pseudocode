/*
 * XREFs of ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180003484
 * Callers:
 *     ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800033D0 (--$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCr.c)
 * Callees:
 *     ??0?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180003558 (--0-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemor.c)
 *     ?AddRef@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180003F40 (-AddRef@CMemoryManager@System@Windows@@UEAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180004290 (-Release@CMemoryManager@System@Windows@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180008F4C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CMemoryManager,Windows::System::CMemoryManager>(
        Windows::System::CMemoryManager **a1)
{
  unsigned int v1; // edi
  Windows::System::CMemoryManager *v3; // rax
  Windows::System::CMemoryManager *v4; // rbx
  unsigned int (__fastcall *v5)(Windows::System::CMemoryManager *__hidden); // rsi
  unsigned int (__fastcall *v6)(Windows::System::CMemoryManager *__hidden); // rsi

  v1 = 0;
  *a1 = 0LL;
  v3 = (Windows::System::CMemoryManager *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,0>::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,0>(v3);
    *(_QWORD *)v4 = &Windows::System::CMemoryManager::`vftable'{for `IActivationFactory'};
    *((_QWORD *)v4 + 1) = &Windows::System::CMemoryManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics3,Microsoft::WRL::Details::Nil>>>,1,0>'};
    *((_QWORD *)v4 + 2) = &Windows::System::CMemoryManager::`vftable'{for `Windows::System::IMemoryManagerStatics2'};
    *((_QWORD *)v4 + 3) = &Windows::System::CMemoryManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics3,Microsoft::WRL::Details::Nil>,1,0>'};
    v5 = *(unsigned int (__fastcall **)(Windows::System::CMemoryManager *__hidden))(*(_QWORD *)v4 + 8LL);
    if ( v5 == Windows::System::CMemoryManager::AddRef )
      Windows::System::CMemoryManager::AddRef(v4);
    else
      v5(v4);
    *a1 = v4;
    if ( v4 )
    {
      v6 = *(unsigned int (__fastcall **)(Windows::System::CMemoryManager *__hidden))(*(_QWORD *)v4 + 16LL);
      if ( v6 == Windows::System::CMemoryManager::Release )
        Windows::System::CMemoryManager::Release(v4);
      else
        v6(v4);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
