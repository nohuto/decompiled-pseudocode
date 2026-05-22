/*
 * XREFs of Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_SpatialInteractionDevices::IHapticsTimerCallback__lambda_77dca828cc74180f62f751716ffcfc7f__1_1___lambda_77dca828cc74180f62f751716ffcfc7f___ @ 0x18009BA50
 * Callers:
 *     Microsoft::WRL::Callback_SpatialInteractionDevices::IHapticsTimerCallback__lambda_77dca828cc74180f62f751716ffcfc7f___ @ 0x18009B5B8 (Microsoft--WRL--Callback_SpatialInteractionDevices--IHapticsTimerCallback__lambda_77dca828cc7418.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_SpatialInteractionDevices::IHapticsTimerCallback__lambda_77dca828cc74180f62f751716ffcfc7f__1_1___lambda_77dca828cc74180f62f751716ffcfc7f___(
        volatile signed __int32 **a1,
        _QWORD *a2)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v6; // rcx
  volatile signed __int32 *v7; // rcx

  *a1 = 0LL;
  v4 = (volatile signed __int32 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v6 = Microsoft::WRL::Details::ModuleBase::module_;
    *((_DWORD *)v4 + 3) = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,SpatialInteractionDevices::IHapticsTimerCallback,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    if ( v6 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v6 + 8LL))(v6);
    *((_QWORD *)v5 + 2) = *a2;
    *(_QWORD *)v5 = off_1800A9920;
    v7 = *a1;
    if ( *a1 && _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v7 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 32LL))(v7, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    *a1 = v5;
  }
  return a1;
}
