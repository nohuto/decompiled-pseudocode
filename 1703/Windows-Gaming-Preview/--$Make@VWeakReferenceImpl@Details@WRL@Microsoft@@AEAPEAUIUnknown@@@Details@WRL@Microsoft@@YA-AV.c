/*
 * XREFs of ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AEAPEAUIUnknown@@@Z @ 0x18000A348
 * Callers:
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x18000A40C (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800291B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make<Microsoft::WRL::Details::WeakReferenceImpl,IUnknown * &>(
        volatile signed __int32 **a1,
        __int64 *a2)
{
  _DWORD *v4; // rbx
  bool v5; // zf
  __int64 v6; // rax
  volatile signed __int32 *v7; // rcx

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    v6 = *a2;
    v4[3] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IWeakReference,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    if ( !v5 )
      _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
    v4[4] = 0x3FFFFFFF;
    *(_QWORD *)v4 = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
    *((_QWORD *)v4 + 3) = v6;
    v4[3] = 2;
    v7 = *a1;
    if ( *a1 && _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v7 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 32LL))(v7);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
    *a1 = v4;
  }
  return a1;
}
