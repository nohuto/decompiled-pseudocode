/*
 * XREFs of ?Release@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180003CC0
 * Callers:
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180001FE0 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMem.c)
 *     ?Release@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x180006930 (-Release@CMemoryManager@System@Windows@@W7EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WBA@EAAKXZ @ 0x180006940 (-Release@CMemoryManager@System@Windows@@WBA@EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WBI@EAAKXZ @ 0x180006950 (-Release@CMemoryManager@System@Windows@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800082E4 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

unsigned int __fastcall Windows::System::CMemoryManager::Release(
        Windows::System::CMemoryManager *this,
        volatile int *a2)
{
  unsigned int result; // eax
  _BYTE *v3; // r10
  unsigned int v4; // edi
  char v5; // bl
  void (*v6)(void); // rax

  result = Microsoft::WRL::Details::SafeUnknownDecrementReference(
             (Windows::System::CMemoryManager *)((char *)this + 36),
             a2);
  v4 = result;
  if ( !result )
  {
    v5 = v3[56] >> 2;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v3 + 56LL))(v3, 1LL);
    if ( (v5 & 1) == 0 || !Microsoft::WRL::Details::ModuleBase::module_ )
      return v4;
    v6 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
LABEL_5:
    v6();
    return v4;
  }
  if ( (v3[56] & 4) == 0 && result == 1 )
  {
    v6 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
    if ( (char *)v6 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
    {
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      return v4;
    }
    goto LABEL_5;
  }
  return result;
}
