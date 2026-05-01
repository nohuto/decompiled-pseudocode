/*
 * XREFs of ??$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIProcessMemoryReport@System@Windows@@AEA_K1@Z @ 0x180002EF0
 * Callers:
 *     ?GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z @ 0x1800036B0 (-GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z.c)
 * Callees:
 *     ?QueryInterface@CProcessMemoryReport@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003B90 (-QueryInterface@CProcessMemoryReport@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RuntimeClassInitialize@CProcessMemoryReport@System@Windows@@UEAAJ_K0@Z @ 0x180003C30 (-RuntimeClassInitialize@CProcessMemoryReport@System@Windows@@UEAAJ_K0@Z.c)
 *     ?Release@CProcessMemoryReport@System@Windows@@UEAAKXZ @ 0x180003D00 (-Release@CProcessMemoryReport@System@Windows@@UEAAKXZ.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x1800040C0 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000887C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CProcessMemoryReport,Windows::System::IProcessMemoryReport,unsigned __int64 &,unsigned __int64 &>(
        void **a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  Windows::System::CProcessMemoryReport *v3; // rbx
  Windows::System::CProcessMemoryReport *v7; // rax
  Windows::System::CProcessMemoryReport *v8; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v9; // rsi
  void (__fastcall *v10)(struct Microsoft::WRL::Details::ModuleBase *); // rbp
  __int64 (__fastcall *v11)(Windows::System::CProcessMemoryReport *__hidden, unsigned __int64, unsigned __int64); // rbp
  int v12; // eax
  unsigned int v13; // edi
  int (*v14)(Windows::System::CProcessMemoryReport *__hidden, const struct _GUID *, void **); // rdi
  int Interface; // eax
  unsigned int (__fastcall *v16)(Windows::System::CProcessMemoryReport *__hidden); // rsi

  v3 = 0LL;
  *a1 = 0LL;
  v7 = (Windows::System::CProcessMemoryReport *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v9 = Microsoft::WRL::Details::ModuleBase::module_;
    *((_QWORD *)v7 + 4) = 1LL;
    *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Windows::System::IProcessMemoryReport,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    *((_QWORD *)v7 + 1) = &Microsoft::WRL::RuntimeClass<Windows::System::IProcessMemoryReport,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v7 + 2) = &Microsoft::WRL::RuntimeClass<Windows::System::IProcessMemoryReport,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
    if ( v9 )
    {
      v10 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v9 + 8LL);
      if ( (char *)v10 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(v9);
      else
        v10(v9);
    }
    *((_QWORD *)v8 + 5) = 0LL;
    *(_QWORD *)v8 = &Windows::System::CProcessMemoryReport::`vftable';
    *((_QWORD *)v8 + 1) = &Windows::System::CProcessMemoryReport::`vftable'{for `IWeakReferenceSource'};
    *((_QWORD *)v8 + 6) = 0LL;
    v3 = v8;
    *((_QWORD *)v8 + 2) = &Windows::System::CProcessMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
    v11 = *(__int64 (__fastcall **)(Windows::System::CProcessMemoryReport *__hidden, unsigned __int64, unsigned __int64))(*(_QWORD *)v8 + 72LL);
    if ( v11 == Windows::System::CProcessMemoryReport::RuntimeClassInitialize )
      v12 = Windows::System::CProcessMemoryReport::RuntimeClassInitialize(v8, *a2, *a3);
    else
      v12 = v11(v8, *a2, *a3);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v14 = **(int (***)(Windows::System::CProcessMemoryReport *__hidden, const struct _GUID *, void **))v3;
      if ( v14 == Windows::System::CProcessMemoryReport::QueryInterface )
        Interface = Windows::System::CProcessMemoryReport::QueryInterface(
                      v3,
                      &GUID_087305a8_9b70_4782_8741_3a982b6ce5e4,
                      a1);
      else
        Interface = ((__int64 (__fastcall *)(Windows::System::CProcessMemoryReport *, GUID *, void **))v14)(
                      v3,
                      &GUID_087305a8_9b70_4782_8741_3a982b6ce5e4,
                      a1);
      v13 = Interface;
    }
  }
  else
  {
    v13 = -2147024882;
  }
  if ( v3 )
  {
    v16 = *(unsigned int (__fastcall **)(Windows::System::CProcessMemoryReport *__hidden))(*(_QWORD *)v3 + 16LL);
    if ( v16 == Windows::System::CProcessMemoryReport::Release )
      Windows::System::CProcessMemoryReport::Release(v3);
    else
      v16(v3);
  }
  return v13;
}
