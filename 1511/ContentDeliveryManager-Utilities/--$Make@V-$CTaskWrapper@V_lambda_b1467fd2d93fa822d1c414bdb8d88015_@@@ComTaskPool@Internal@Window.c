/*
 * XREFs of ??$Make@V?$CTaskWrapper@V_lambda_b1467fd2d93fa822d1c414bdb8d88015_@@@ComTaskPool@Internal@Windows@@AEBV_lambda_b1467fd2d93fa822d1c414bdb8d88015_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_b1467fd2d93fa822d1c414bdb8d88015_@@@ComTaskPool@Internal@Windows@@@12@AEBV_lambda_b1467fd2d93fa822d1c414bdb8d88015_@@@Z @ 0x180021484
 * Callers:
 *     ??$WrapWithTask@V_lambda_b1467fd2d93fa822d1c414bdb8d88015_@@@ComTaskPool@Internal@Windows@@SA?AV?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@AEBV_lambda_b1467fd2d93fa822d1c414bdb8d88015_@@@Z @ 0x180021124 (--$WrapWithTask@V_lambda_b1467fd2d93fa822d1c414bdb8d88015_@@@ComTaskPool@Internal@Windows@@SA-AV.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027FA8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_b1467fd2d93fa822d1c414bdb8d88015_>,_lambda_b1467fd2d93fa822d1c414bdb8d88015_ const &>(
        _QWORD *a1,
        __int64 *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  bool v6; // zf
  __int64 v7; // r14

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v6 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    *(_QWORD *)v4 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v4[3] = 1;
    if ( !v6 )
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    *(_QWORD *)v4 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_073541af29ff8b48810736a8a1aa0ee8_>::`vftable';
    v7 = *a2;
    *((_QWORD *)v4 + 2) = *a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    *((_QWORD *)v5 + 3) = a2[1];
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
