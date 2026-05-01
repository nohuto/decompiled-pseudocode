/*
 * XREFs of ?AddRef@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180003F40
 * Callers:
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180003484 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMem.c)
 *     ?AddRef@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x180009650 (-AddRef@CMemoryManager@System@Windows@@W7EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WBA@EAAKXZ @ 0x180009660 (-AddRef@CMemoryManager@System@Windows@@WBA@EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WBI@EAAKXZ @ 0x180009670 (-AddRef@CMemoryManager@System@Windows@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::AddRef(Windows::System::CMemoryManager *this)
{
  unsigned __int32 v1; // ebx
  void (__fastcall *v3)(struct Microsoft::WRL::Details::ModuleBase *); // rdi

  v1 = _InterlockedIncrement((volatile signed __int32 *)this + 9);
  if ( (*((_BYTE *)this + 56) & 4) == 0 && v1 == 2 )
  {
    v3 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL);
    if ( (char *)v3 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    else
      v3(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
