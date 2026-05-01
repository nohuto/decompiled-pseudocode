/*
 * XREFs of ?AddRef@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@VNil@Details@WRL@Microsoft@@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180003650
 * Callers:
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180002998 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMem.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003A50 (-QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x180008E20 (-AddRef@CMemoryManager@System@Windows@@W7EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WBA@EAAKXZ @ 0x180008E30 (-AddRef@CMemoryManager@System@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000BD0C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::Nil,0>::AddRef(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // eax
  __int64 v3; // r10
  unsigned int v4; // esi

  v2 = Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 28), a2);
  v4 = v2;
  if ( (*(_BYTE *)(v3 + 48) & 4) == 0 && v2 == 2 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return v4;
}
