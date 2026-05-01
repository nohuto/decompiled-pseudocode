/*
 * XREFs of ??$?0V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@?$CTaskWrapper@V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@Z @ 0x180020F7C
 * Callers:
 *     ??$Make@V?$CTaskWrapper@V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@ComTaskPool@Internal@Windows@@V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@Z @ 0x180020F18 (--$Make@V-$CTaskWrapper@V_lambda_6175e87fa178b2ae2c0b636abea7d3fd_@@@ComTaskPool@Internal@Window.c)
 * Callees:
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x1800045AC (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018934 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x180025DE4 (--0-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_6175e87fa178b2ae2c0b636abea7d3fd_>::CTaskWrapper<_lambda_6175e87fa178b2ae2c0b636abea7d3fd_>(
        __int64 a1,
        __int64 a2)
{
  bool v2; // zf
  __int64 v5; // rdi
  bool v6; // al
  _QWORD *v7; // r14
  _QWORD *v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rbp

  v2 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ShellExperienceDispatcher *,Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( !v2 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *(_QWORD *)a1 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_6175e87fa178b2ae2c0b636abea7d3fd_>::`vftable';
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 24);
  v5 = a1 + 48;
  v6 = *(_DWORD *)(a2 + 64) != 0;
  *(_QWORD *)(a1 + 48) = &wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v7 = (_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = a1 + 48;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( v6 )
  {
    v8 = wil::details::g_pThreadFailureCallbacks
       ? (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                     (__int64)&wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::`vftable',
                     1)
       : 0LL;
    *v7 = v8;
    if ( v8 )
    {
      *(_QWORD *)(v5 + 24) = *v8;
      *v8 = v7;
      *(_DWORD *)(v5 + 32) = GetCurrentThreadId();
    }
  }
  v9 = v5 + 56;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(
    v5 + 56,
    a2 + 88);
  *(_QWORD *)(v5 + 304) = *(_QWORD *)(a2 + 336);
  *(_QWORD *)(a2 + 336) = 0LL;
  if ( *(_QWORD *)(v5 + 304) )
  {
    v10 = *(_QWORD *)(v5 + 304);
    if ( v10 )
      v9 = v10 + 8;
    else
      v9 = 0LL;
  }
  *(_QWORD *)(v5 + 48) = v9;
  *(_QWORD *)(v5 + 40) = v9 + 40;
  *(_QWORD *)(a2 + 80) = a2 + 88;
  if ( *(_DWORD *)(a2 + 64) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 40));
  *(_QWORD *)v5 = &SingleViewExperienceTelemetry::Launch::`vftable';
  return a1;
}
