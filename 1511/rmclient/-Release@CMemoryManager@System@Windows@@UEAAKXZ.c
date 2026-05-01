/*
 * XREFs of ?Release@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180004290
 * Callers:
 *     ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800033D0 (--$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCr.c)
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180003484 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMem.c)
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x180003650 (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 *     ?Release@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x180009810 (-Release@CMemoryManager@System@Windows@@W7EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WBA@EAAKXZ @ 0x180009820 (-Release@CMemoryManager@System@Windows@@WBA@EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WBI@EAAKXZ @ 0x180009830 (-Release@CMemoryManager@System@Windows@@WBI@EAAKXZ.c)
 * Callees:
 *     ??_GCMemoryManager@System@Windows@@UEAAPEAXI@Z @ 0x1800088A0 (--_GCMemoryManager@System@Windows@@UEAAPEAXI@Z.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::Release(Windows::System::CMemoryManager *this)
{
  unsigned __int32 v1; // ebx
  struct Microsoft::WRL::Details::ModuleBase *v3; // rsi
  void (__fastcall *v4)(struct Microsoft::WRL::Details::ModuleBase *); // rdi
  bool v5; // si
  void *(__fastcall *v6)(Windows::System::CMemoryManager *__hidden, unsigned int); // rbp

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 9);
  if ( !v1 )
  {
    v5 = (*((_BYTE *)this + 56) & 4) != 0;
    v6 = *(void *(__fastcall **)(Windows::System::CMemoryManager *__hidden, unsigned int))(*(_QWORD *)this + 56LL);
    if ( v6 == Windows::System::CMemoryManager::`scalar deleting destructor' )
      Windows::System::CMemoryManager::`scalar deleting destructor'(this, 1u);
    else
      v6(this, 1u);
    if ( !v5 )
      return v1;
    v3 = Microsoft::WRL::Details::ModuleBase::module_;
    if ( !Microsoft::WRL::Details::ModuleBase::module_ )
      return v1;
    v4 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL);
    goto LABEL_14;
  }
  if ( (*((_BYTE *)this + 56) & 4) != 0 || v1 != 1 )
    return v1;
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  v4 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL);
  if ( (char *)v4 != (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
  {
LABEL_14:
    v4(v3);
    return v1;
  }
  _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  return 1LL;
}
