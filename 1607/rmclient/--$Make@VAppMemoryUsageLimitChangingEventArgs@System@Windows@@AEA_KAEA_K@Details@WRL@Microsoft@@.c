/*
 * XREFs of ??$Make@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@AEA_KAEA_K@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@@12@AEA_K0@Z @ 0x1800023E0
 * Callers:
 *     ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x180002120 (-OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800024F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180002E90 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x180004440 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180006064 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 */

Windows::System::AppMemoryUsageLimitChangingEventArgs **__fastcall Microsoft::WRL::Details::Make<Windows::System::AppMemoryUsageLimitChangingEventArgs,unsigned __int64 &,unsigned __int64 &>(
        Windows::System::AppMemoryUsageLimitChangingEventArgs **a1,
        __int64 *a2,
        __int64 *a3)
{
  _QWORD *v6; // rax
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rbp
  struct Microsoft::WRL::Details::ModuleBase *v10; // rcx
  void (*v11)(void); // rax

  *a1 = 0LL;
  v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = (Windows::System::AppMemoryUsageLimitChangingEventArgs *)v6;
  if ( v6 )
  {
    v8 = *a2;
    v9 = *a3;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 2));
    v10 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    *((_QWORD *)v7 + 1) = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v7 + 2) = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *((_QWORD *)v7 + 6) = 1LL;
    if ( v10 )
    {
      v11 = *(void (**)(void))(*(_QWORD *)v10 + 8LL);
      if ( (char *)v11 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
      else
        v11();
    }
    *((_QWORD *)v7 + 8) = v9;
    *(_QWORD *)v7 = &Windows::System::AppMemoryUsageLimitChangingEventArgs::`vftable';
    *((_QWORD *)v7 + 1) = &Windows::System::AppMemoryUsageLimitChangingEventArgs::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v7 + 2) = &Windows::System::AppMemoryUsageLimitChangingEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,1,1>'};
    *((_QWORD *)v7 + 7) = v8;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(*a1);
    *a1 = v7;
  }
  return a1;
}
