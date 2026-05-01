/*
 * XREFs of ??$Make@V?$CTaskWrapper@V_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@ComTaskPool@Internal@Windows@@V_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@Z @ 0x18002A674
 * Callers:
 *     ??$WrapWithTask@V_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@ComTaskPool@Internal@Windows@@SA?AV?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@$$QEAV_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@Z @ 0x18002A514 (--$WrapWithTask@V_lambda_5d878536394a9e5d6c15e6b3f5940618_@@@ComTaskPool@Internal@Windows@@SA-AV.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002E6E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_5d878536394a9e5d6c15e6b3f5940618_>,_lambda_5d878536394a9e5d6c15e6b3f5940618_>(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  bool v6; // zf

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v6 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *(_QWORD *)v4 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ShellExperienceDispatcher *,Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *>::`vftable';
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v4[3] = 1;
    if ( !v6 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v4 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_5d878536394a9e5d6c15e6b3f5940618_>::`vftable';
    *((_OWORD *)v4 + 1) = *(_OWORD *)a2;
    *((_QWORD *)v4 + 4) = *(_QWORD *)(a2 + 16);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
