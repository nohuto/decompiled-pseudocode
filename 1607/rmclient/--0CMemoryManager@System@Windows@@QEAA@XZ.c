/*
 * XREFs of ??0CMemoryManager@System@Windows@@QEAA@XZ @ 0x180003C0C
 * Callers:
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180001FE0 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMem.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x180004440 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 */

Windows::System::CMemoryManager *__fastcall Windows::System::CMemoryManager::CMemoryManager(
        Windows::System::CMemoryManager *this)
{
  void (*v2)(void); // rax

  *((_QWORD *)this + 6) = 0LL;
  *(_QWORD *)this = &Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,0>::`vftable'{for `IActivationFactory'};
  *((_DWORD *)this + 9) = 1;
  *((_QWORD *)this + 1) = &Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,0>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics3,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,0>::`vftable'{for `Windows::System::IMemoryManagerStatics2'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,0>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics3,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_DWORD *)this + 14) = 4;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    v2 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
    if ( (char *)v2 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
    else
      v2();
  }
  *(_QWORD *)this = &Windows::System::CMemoryManager::`vftable'{for `IActivationFactory'};
  *((_QWORD *)this + 1) = &Windows::System::CMemoryManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics3,Microsoft::WRL::Details::Nil>>>,1,0>'};
  *((_QWORD *)this + 2) = &Windows::System::CMemoryManager::`vftable'{for `Windows::System::IMemoryManagerStatics2'};
  *((_QWORD *)this + 3) = &Windows::System::CMemoryManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics3,Microsoft::WRL::Details::Nil>,1,0>'};
  return this;
}
