/*
 * XREFs of ?AddRef@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180003630
 * Callers:
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180001FE0 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMem.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180003D60 (-QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x180006750 (-AddRef@CMemoryManager@System@Windows@@W7EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WBA@EAAKXZ @ 0x180006760 (-AddRef@CMemoryManager@System@Windows@@WBA@EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WBI@EAAKXZ @ 0x180006770 (-AddRef@CMemoryManager@System@Windows@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000830C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

unsigned int __fastcall Windows::System::CMemoryManager::AddRef(
        Windows::System::CMemoryManager *this,
        volatile int *a2)
{
  unsigned int result; // eax
  __int64 v3; // r10
  unsigned int v4; // ebx

  result = Microsoft::WRL::Details::SafeUnknownIncrementReference(
             (Windows::System::CMemoryManager *)((char *)this + 36),
             a2);
  v4 = result;
  if ( (*(_BYTE *)(v3 + 56) & 4) == 0 && result == 2 )
  {
    if ( *(__int64 (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL) == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    else
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    return v4;
  }
  return result;
}
