/*
 * XREFs of ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AEAPEAUIUnknown@@@Z @ 0x180004E20
 * Callers:
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x180002AC8 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027FA8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make<Microsoft::WRL::Details::WeakReferenceImpl,IUnknown * &>(
        volatile signed __int32 **a1,
        __int64 *a2)
{
  _DWORD *v4; // rbx
  bool v5; // zf
  __int64 v6; // rax
  volatile signed __int32 *v7; // rsi

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    v6 = *a2;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IWeakReference,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v4[3] = 1;
    if ( !v5 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v4[4] = 0x3FFFFFFF;
    *(_QWORD *)v4 = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
    *((_QWORD *)v4 + 3) = v6;
    v4[3] = 2;
    v7 = *a1;
    if ( *a1 && _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v7 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 32LL))(v7, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
    *a1 = v4;
  }
  return a1;
}
