/*
 * XREFs of ??$MakeAndInitialize@VCAppMemoryReport@System@Windows@@UIAppMemoryReport@23@AEA_KAEA_KAEA_KAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIAppMemoryReport@System@Windows@@AEA_K111@Z @ 0x180003060
 * Callers:
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180003790 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 * Callees:
 *     ?QueryInterface@CAppMemoryReport@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003DF0 (-QueryInterface@CAppMemoryReport@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RuntimeClassInitialize@CAppMemoryReport@System@Windows@@UEAAJ_K000@Z @ 0x180003E90 (-RuntimeClassInitialize@CAppMemoryReport@System@Windows@@UEAAJ_K000@Z.c)
 *     ??0CAppMemoryReport@System@Windows@@QEAA@XZ @ 0x180003EB0 (--0CAppMemoryReport@System@Windows@@QEAA@XZ.c)
 *     ?Release@CAppMemoryReport@System@Windows@@UEAAKXZ @ 0x180003FD0 (-Release@CAppMemoryReport@System@Windows@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000887C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CAppMemoryReport,Windows::System::IAppMemoryReport,unsigned __int64 &,unsigned __int64 &,unsigned __int64 &,unsigned __int64 &>(
        void **a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  Windows::System::CAppMemoryReport *v5; // rbx
  Windows::System::CAppMemoryReport *v10; // rax
  Windows::System::CAppMemoryReport *v11; // rax
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r15
  __int64 (__fastcall *v15)(Windows::System::CAppMemoryReport *__hidden, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64); // r12
  int v16; // eax
  unsigned int v17; // edi
  int (*v18)(Windows::System::CAppMemoryReport *__hidden, const struct _GUID *, void **); // rdi
  int Interface; // eax
  unsigned int (__fastcall *v20)(Windows::System::CAppMemoryReport *__hidden); // rsi

  v5 = 0LL;
  *a1 = 0LL;
  v10 = (Windows::System::CAppMemoryReport *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v11 = (Windows::System::CAppMemoryReport *)Windows::System::CAppMemoryReport::CAppMemoryReport(v10);
    v12 = *a4;
    v5 = v11;
    v13 = *a3;
    v14 = *a2;
    v15 = *(__int64 (__fastcall **)(Windows::System::CAppMemoryReport *__hidden, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v11 + 88LL);
    if ( v15 == Windows::System::CAppMemoryReport::RuntimeClassInitialize )
      v16 = Windows::System::CAppMemoryReport::RuntimeClassInitialize(v11, v14, v13, v12, *a5);
    else
      v16 = v15(v11, v14, v13, v12, *a5);
    v17 = v16;
    if ( v16 >= 0 )
    {
      v18 = **(int (***)(Windows::System::CAppMemoryReport *__hidden, const struct _GUID *, void **))v5;
      if ( v18 == Windows::System::CAppMemoryReport::QueryInterface )
        Interface = Windows::System::CAppMemoryReport::QueryInterface(
                      v5,
                      &GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d,
                      a1);
      else
        Interface = ((__int64 (__fastcall *)(Windows::System::CAppMemoryReport *, GUID *, void **))v18)(
                      v5,
                      &GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d,
                      a1);
      v17 = Interface;
    }
  }
  else
  {
    v17 = -2147024882;
  }
  if ( v5 )
  {
    v20 = *(unsigned int (__fastcall **)(Windows::System::CAppMemoryReport *__hidden))(*(_QWORD *)v5 + 16LL);
    if ( v20 == Windows::System::CAppMemoryReport::Release )
      Windows::System::CAppMemoryReport::Release(v5);
    else
      v20(v5);
  }
  return v17;
}
