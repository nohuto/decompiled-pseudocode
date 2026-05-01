/*
 * XREFs of ?Release@CAppMemoryReport@System@Windows@@UEAAKXZ @ 0x180003FD0
 * Callers:
 *     ??$MakeAndInitialize@VCAppMemoryReport@System@Windows@@UIAppMemoryReport@23@AEA_KAEA_KAEA_KAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIAppMemoryReport@System@Windows@@AEA_K111@Z @ 0x180003060 (--$MakeAndInitialize@VCAppMemoryReport@System@Windows@@UIAppMemoryReport@23@AEA_KAEA_KAEA_KAEA_K.c)
 *     ?Release@CAppMemoryReport@System@Windows@@W7EAAKXZ @ 0x1800091A0 (-Release@CAppMemoryReport@System@Windows@@W7EAAKXZ.c)
 *     ?Release@CAppMemoryReport@System@Windows@@WBA@EAAKXZ @ 0x1800091B0 (-Release@CAppMemoryReport@System@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     ??_ECAppMemoryReport@System@Windows@@UEAAPEAXI@Z @ 0x180003F70 (--_ECAppMemoryReport@System@Windows@@UEAAPEAXI@Z.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x1800040E0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000BCE4 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Windows::System::CAppMemoryReport::Release(
        Windows::System::CAppMemoryReport *this,
        volatile int *a2)
{
  signed __int64 v2; // rax
  unsigned int v4; // ebx
  signed __int64 v5; // rtt
  Windows::System::CAppMemoryReport *(__fastcall *v7)(Windows::System::CAppMemoryReport *, char); // rsi
  __int64 (__fastcall *v8)(struct Microsoft::WRL::Details::ModuleBase *); // rsi

  v2 = *((_QWORD *)this + 4);
  while ( v2 >= 0 )
  {
    if ( (_DWORD)v2 == 0x7FFFFFFF )
      return 2147483646LL;
    v4 = v2 - 1;
    v5 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 4, v2 - 1, v2);
    if ( v5 == v2 )
      goto LABEL_8;
  }
  v4 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v2 + 16), a2);
LABEL_8:
  if ( !v4 )
  {
    if ( this )
    {
      v7 = *(Windows::System::CAppMemoryReport *(__fastcall **)(Windows::System::CAppMemoryReport *, char))(*(_QWORD *)this + 80LL);
      if ( v7 == Windows::System::CAppMemoryReport::`vector deleting destructor' )
        Windows::System::CAppMemoryReport::`vector deleting destructor'(this, 1);
      else
        v7(this, 1);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v8 = *(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                  + 16LL);
      if ( (char *)v8 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
      {
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
        return 0LL;
      }
      v8(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v4;
}
