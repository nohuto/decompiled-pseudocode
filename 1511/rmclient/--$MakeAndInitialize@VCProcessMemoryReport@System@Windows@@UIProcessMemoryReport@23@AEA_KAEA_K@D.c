/*
 * XREFs of ??$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIProcessMemoryReport@System@Windows@@AEA_K1@Z @ 0x1800031A8
 * Callers:
 *     ?GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z @ 0x180001BD0 (-GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z.c)
 * Callees:
 *     ?QueryInterface@CProcessMemoryReport@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180002F30 (-QueryInterface@CProcessMemoryReport@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0CProcessMemoryReport@System@Windows@@QEAA@XZ @ 0x180002FC8 (--0CProcessMemoryReport@System@Windows@@QEAA@XZ.c)
 *     ?Release@CProcessMemoryReport@System@Windows@@UEAAKXZ @ 0x180003100 (-Release@CProcessMemoryReport@System@Windows@@UEAAKXZ.c)
 *     ?RuntimeClassInitialize@CProcessMemoryReport@System@Windows@@UEAAJ_K0@Z @ 0x180007380 (-RuntimeClassInitialize@CProcessMemoryReport@System@Windows@@UEAAJ_K0@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180008F4C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CProcessMemoryReport,Windows::System::IProcessMemoryReport,unsigned __int64 &,unsigned __int64 &>(
        void **a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  Windows::System::CProcessMemoryReport *v5; // rbx
  Windows::System::CProcessMemoryReport *v7; // rax
  Windows::System::CProcessMemoryReport *v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r14
  __int64 (__fastcall *v11)(Windows::System::CProcessMemoryReport *__hidden, unsigned __int64, unsigned __int64); // rdi
  int v12; // eax
  unsigned int v13; // edi
  __int64 (__fastcall *v14)(Windows::System::CProcessMemoryReport *, const struct _GUID *, void **); // rdi
  unsigned int Interface; // eax
  unsigned int (__fastcall *v16)(Windows::System::CProcessMemoryReport *); // rsi

  *a1 = 0LL;
  v5 = 0LL;
  v7 = (Windows::System::CProcessMemoryReport *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v8 = Windows::System::CProcessMemoryReport::CProcessMemoryReport(v7);
    v9 = *a3;
    v5 = v8;
    v10 = *a2;
    v11 = *(__int64 (__fastcall **)(Windows::System::CProcessMemoryReport *__hidden, unsigned __int64, unsigned __int64))(*(_QWORD *)v8 + 72LL);
    if ( v11 == Windows::System::CProcessMemoryReport::RuntimeClassInitialize )
      v12 = Windows::System::CProcessMemoryReport::RuntimeClassInitialize(v8, v10, v9);
    else
      v12 = v11(v8, v10, v9);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v14 = **(__int64 (__fastcall ***)(Windows::System::CProcessMemoryReport *, const struct _GUID *, void **))v5;
      if ( v14 == Windows::System::CProcessMemoryReport::QueryInterface )
        Interface = Windows::System::CProcessMemoryReport::QueryInterface(
                      v5,
                      &GUID_087305a8_9b70_4782_8741_3a982b6ce5e4,
                      a1);
      else
        Interface = v14(v5, &GUID_087305a8_9b70_4782_8741_3a982b6ce5e4, a1);
      v13 = Interface;
    }
  }
  else
  {
    v13 = -2147024882;
  }
  if ( v5 )
  {
    v16 = *(unsigned int (__fastcall **)(Windows::System::CProcessMemoryReport *))(*(_QWORD *)v5 + 16LL);
    if ( v16 == Windows::System::CProcessMemoryReport::Release )
      Windows::System::CProcessMemoryReport::Release(v5);
    else
      v16(v5);
  }
  return v13;
}
