/*
 * XREFs of ?Release@CMemoryManager@System@Windows@@UEAAKXZ @ 0x1800039A0
 * Callers:
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180002998 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMem.c)
 *     ?Release@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x180008F60 (-Release@CMemoryManager@System@Windows@@W7EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WBA@EAAKXZ @ 0x180008F70 (-Release@CMemoryManager@System@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000BCE4 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

unsigned int __fastcall Windows::System::CMemoryManager::Release(
        Windows::System::CMemoryManager *this,
        volatile int *a2)
{
  unsigned int result; // eax
  unsigned int v4; // esi
  char v5; // di
  struct Microsoft::WRL::Details::ModuleBase *v6; // rdi

  result = Microsoft::WRL::Details::SafeUnknownDecrementReference(
             (Windows::System::CMemoryManager *)((char *)this + 28),
             a2);
  v4 = result;
  if ( !result )
  {
    v5 = *((_BYTE *)this + 48) >> 2;
    (*(void (__fastcall **)(Windows::System::CMemoryManager *, __int64))(*(_QWORD *)this + 56LL))(this, 1LL);
    if ( (v5 & 1) == 0 )
      return v4;
    v6 = Microsoft::WRL::Details::ModuleBase::module_;
    if ( !Microsoft::WRL::Details::ModuleBase::module_ )
      return v4;
    goto LABEL_8;
  }
  if ( (*((_BYTE *)this + 48) & 4) == 0 && result == 1 )
  {
    v6 = Microsoft::WRL::Details::ModuleBase::module_;
LABEL_8:
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v6 + 16LL))(v6);
    return v4;
  }
  return result;
}
