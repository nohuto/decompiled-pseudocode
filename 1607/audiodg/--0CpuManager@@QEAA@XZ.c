/*
 * XREFs of ??0CpuManager@@QEAA@XZ @ 0x140001400
 * Callers:
 *     ??$MakeAndInitialize@VCpuManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x14000135C (--$MakeAndInitialize@VCpuManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z.c)
 * Callees:
 *     ??0HandleRegistrations@CpuManager@@QEAA@XZ @ 0x140001590 (--0HandleRegistrations@CpuManager@@QEAA@XZ.c)
 *     ?UpdateRehashThresholds@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEAAXXZ @ 0x140001B9C (-UpdateRehashThresholds@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x1400050C4 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CpuManager *__fastcall CpuManager::CpuManager(CpuManager *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CpuManager::`vftable';
  ATL::CCriticalSection::CCriticalSection((CpuManager *)((char *)this + 16));
  CpuManager::HandleRegistrations::HandleRegistrations((CpuManager *)((char *)this + 56));
  CpuManager::HandleRegistrations::HandleRegistrations((CpuManager *)((char *)this + 128));
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 17;
  *((_QWORD *)this + 29) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_DWORD *)this + 63) = 10;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 55) = 1061158912;
  *((_DWORD *)this + 56) = 1048576000;
  *((_DWORD *)this + 57) = 1074790400;
  ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::UpdateRehashThresholds((char *)this + 200);
  return this;
}
