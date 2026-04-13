/*
 * XREFs of ??$Make@V?$CTaskWrapper@V_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_@@@ComTaskPool@Internal@Windows@@V_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_@@@Z @ 0x180044920
 * Callers:
 *     ??$WrapWithTask@V_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_@@@ComTaskPool@Internal@Windows@@SA?AV?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@$$QEAV_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_@@@Z @ 0x180044318 (--$WrapWithTask@V_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_@@@ComTaskPool@Internal@Windows@@SA-AV.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058B88 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_>,_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_>(
        _QWORD *a1,
        _QWORD *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  bool v6; // zf
  _QWORD *v7; // rcx

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
    *(_QWORD *)v4 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_>::`vftable';
    v7 = a2 + 1;
    *((_QWORD *)v4 + 2) = *a2;
    *((_QWORD *)v4 + 3) = 0LL;
    if ( v4 + 6 != (_DWORD *)(a2 + 1) )
    {
      *((_QWORD *)v4 + 3) = *v7;
      *v7 = 0LL;
    }
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v5;
  }
  return a1;
}
