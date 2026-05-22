/*
 * XREFs of ??$Make@VSpectrumListener@@QEAVMPCRawInputProvider@@AEAK@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSpectrumListener@@@12@$$QEBQEAVMPCRawInputProvider@@AEAK@Z @ 0x180054A18
 * Callers:
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x180054370 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 * Callees:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@K@Z @ 0x180054F3C (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
SpectrumListener **__fastcall Microsoft::WRL::Details::Make<SpectrumListener,MPCRawInputProvider * const,unsigned long &>(
        SpectrumListener **a1,
        struct MPCRawInputProvider **a2,
        unsigned int *a3)
{
  SpectrumListener *v6; // rax
  SpectrumListener *v7; // rdi
  volatile signed __int32 *v8; // rcx

  *a1 = 0LL;
  v6 = (SpectrumListener *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = SpectrumListener::SpectrumListener(v6, *a2, *a3);
    v8 = (volatile signed __int32 *)*a1;
    if ( *a1 && _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v8 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v8 + 32LL))(v8, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    *a1 = v7;
  }
  return a1;
}
