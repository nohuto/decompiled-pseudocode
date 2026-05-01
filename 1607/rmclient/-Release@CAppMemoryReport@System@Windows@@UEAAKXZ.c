/*
 * XREFs of ?Release@CAppMemoryReport@System@Windows@@UEAAKXZ @ 0x180004320
 * Callers:
 *     ?Release@CAppMemoryReport@System@Windows@@W7EAAKXZ @ 0x180006B80 (-Release@CAppMemoryReport@System@Windows@@W7EAAKXZ.c)
 *     ?Release@CAppMemoryReport@System@Windows@@WBA@EAAKXZ @ 0x180006B90 (-Release@CAppMemoryReport@System@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180005B08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180006710 (_guard_dispatch_icall_nop.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800082E4 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180009550 (-Release@-$RuntimeClass@U-$InterfaceList@UIWeakReference@@VNil@Details@WRL@Microsoft@@@Details@W.c)
 */

__int64 __fastcall Windows::System::CAppMemoryReport::Release(
        Windows::System::CAppMemoryReport *this,
        volatile int *a2)
{
  signed __int64 v2; // rax
  unsigned int v4; // edi
  signed __int64 v5; // rtt
  Windows::System::CAppMemoryReport *(__fastcall *v7)(Windows::System::CAppMemoryReport *, char); // rax
  __int64 v8; // rcx
  __int64 (*v9)(void); // rax

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
      {
        v8 = *((_QWORD *)this + 4);
        *(_QWORD *)this = &Windows::System::CAppMemoryReport::`vftable';
        *((_QWORD *)this + 1) = &Windows::System::CAppMemoryReport::`vftable'{for `IWeakReferenceSource'};
        *((_QWORD *)this + 2) = &Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
        if ( v8 < 0 )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IWeakReference,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(2 * v8);
        operator delete(this);
      }
      else
      {
        v7(this, 1);
      }
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v9 = *(__int64 (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      if ( v9 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
      {
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        return 0LL;
      }
      v9();
    }
  }
  return v4;
}
