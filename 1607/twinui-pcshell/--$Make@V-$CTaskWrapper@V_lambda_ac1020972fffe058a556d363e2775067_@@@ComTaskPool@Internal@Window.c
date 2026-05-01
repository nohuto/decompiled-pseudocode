/*
 * XREFs of ??$Make@V?$CTaskWrapper@V_lambda_ac1020972fffe058a556d363e2775067_@@@ComTaskPool@Internal@Windows@@V_lambda_ac1020972fffe058a556d363e2775067_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_ac1020972fffe058a556d363e2775067_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_ac1020972fffe058a556d363e2775067_@@@Z @ 0x180015A00
 * Callers:
 *     ??$WrapWithTask@V_lambda_ac1020972fffe058a556d363e2775067_@@@ComTaskPool@Internal@Windows@@SA?AV?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@$$QEAV_lambda_ac1020972fffe058a556d363e2775067_@@@Z @ 0x180015700 (--$WrapWithTask@V_lambda_ac1020972fffe058a556d363e2775067_@@@ComTaskPool@Internal@Windows@@SA-AV.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002E6E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_ac1020972fffe058a556d363e2775067_>,_lambda_ac1020972fffe058a556d363e2775067_>(
        _QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  bool v4; // zf

  *a1 = 0LL;
  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    v4 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *(_QWORD *)v2 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ShellExperienceDispatcher *,Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *>::`vftable';
    *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v2[3] = 1;
    if ( !v4 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v2 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_ac1020972fffe058a556d363e2775067_>::`vftable';
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v3;
  }
  return a1;
}
