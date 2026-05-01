/*
 * XREFs of ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180002998
 * Callers:
 *     ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800028F0 (--$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCr.c)
 * Callees:
 *     ?AddRef@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@VNil@Details@WRL@Microsoft@@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180003650 (-AddRef@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@VN.c)
 *     ??0CMemoryManager@System@Windows@@QEAA@XZ @ 0x1800038E8 (--0CMemoryManager@System@Windows@@QEAA@XZ.c)
 *     ?Release@CMemoryManager@System@Windows@@UEAAKXZ @ 0x1800039A0 (-Release@CMemoryManager@System@Windows@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000887C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CMemoryManager,Windows::System::CMemoryManager>(
        Windows::System::CMemoryManager **a1)
{
  unsigned int v1; // edi
  Windows::System::CMemoryManager *v3; // rax
  __int64 v4; // rax
  Windows::System::CMemoryManager *v5; // rbx
  void (__fastcall *v6)(__int64); // rsi
  unsigned int (__fastcall *v7)(Windows::System::CMemoryManager *__hidden); // rsi

  v1 = 0;
  *a1 = 0LL;
  v3 = (Windows::System::CMemoryManager *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = Windows::System::CMemoryManager::CMemoryManager(v3);
    v5 = (Windows::System::CMemoryManager *)v4;
    if ( v4 )
    {
      v6 = *(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL);
      if ( (char *)v6 == (char *)Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::Nil,0>::AddRef )
        Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::Nil,0>::AddRef(v4);
      else
        v6(v4);
    }
    *a1 = v5;
    if ( v5 )
    {
      v7 = *(unsigned int (__fastcall **)(Windows::System::CMemoryManager *__hidden))(*(_QWORD *)v5 + 16LL);
      if ( v7 == Windows::System::CMemoryManager::Release )
        Windows::System::CMemoryManager::Release(v5);
      else
        v7(v5);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
