/*
 * XREFs of ??0CMemoryManager@System@Windows@@QEAA@XZ @ 0x1800038E8
 * Callers:
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180002998 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMem.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x1800040C0 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

Windows::System::CMemoryManager *__fastcall Windows::System::CMemoryManager::CMemoryManager(
        Windows::System::CMemoryManager *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v1; // rdi
  void (__fastcall *v3)(struct Microsoft::WRL::Details::ModuleBase *); // rsi

  *((_QWORD *)this + 5) = 0LL;
  v1 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::Nil,0>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Windows::System::IMemoryManagerStatics'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_DWORD *)this + 7) = 1;
  *((_DWORD *)this + 12) = 4;
  if ( v1 )
  {
    v3 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v1 + 8LL);
    if ( (char *)v3 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(v1);
    else
      v3(v1);
  }
  *(_QWORD *)this = &Windows::System::CMemoryManager::`vftable';
  *((_QWORD *)this + 1) = &Windows::System::CMemoryManager::`vftable'{for `Windows::System::IMemoryManagerStatics'};
  *((_QWORD *)this + 2) = &Windows::System::CMemoryManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::Nil>,1,0>'};
  return this;
}
