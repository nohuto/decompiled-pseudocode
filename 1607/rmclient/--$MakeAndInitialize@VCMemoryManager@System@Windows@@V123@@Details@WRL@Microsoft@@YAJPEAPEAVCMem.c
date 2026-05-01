/*
 * XREFs of ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180001FE0
 * Callers:
 *     ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180001F20 (--$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCr.c)
 * Callees:
 *     ?AddRef@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180003630 (-AddRef@CMemoryManager@System@Windows@@UEAAKXZ.c)
 *     ??0CMemoryManager@System@Windows@@QEAA@XZ @ 0x180003C0C (--0CMemoryManager@System@Windows@@QEAA@XZ.c)
 *     ?Release@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180003CC0 (-Release@CMemoryManager@System@Windows@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180006064 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CMemoryManager,Windows::System::CMemoryManager>(
        Windows::System::CMemoryManager **a1)
{
  Windows::System::CMemoryManager *v2; // rax
  __int64 v3; // rax
  Windows::System::CMemoryManager *v4; // rbx
  unsigned int (__fastcall *v5)(Windows::System::CMemoryManager *__hidden); // rax
  unsigned int (__fastcall *v6)(Windows::System::CMemoryManager *__hidden); // rax

  *a1 = 0LL;
  v2 = (Windows::System::CMemoryManager *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return 2147942414LL;
  v3 = Windows::System::CMemoryManager::CMemoryManager(v2);
  v4 = (Windows::System::CMemoryManager *)v3;
  if ( v3 )
  {
    v5 = *(unsigned int (__fastcall **)(Windows::System::CMemoryManager *__hidden))(*(_QWORD *)v3 + 8LL);
    if ( v5 == Windows::System::CMemoryManager::AddRef )
      Windows::System::CMemoryManager::AddRef(v4);
    else
      v5(v4);
  }
  *a1 = v4;
  if ( v4 )
  {
    v6 = *(unsigned int (__fastcall **)(Windows::System::CMemoryManager *__hidden))(*(_QWORD *)v4 + 16LL);
    if ( v6 == Windows::System::CMemoryManager::Release )
      Windows::System::CMemoryManager::Release(v4);
    else
      v6(v4);
  }
  return 0LL;
}
