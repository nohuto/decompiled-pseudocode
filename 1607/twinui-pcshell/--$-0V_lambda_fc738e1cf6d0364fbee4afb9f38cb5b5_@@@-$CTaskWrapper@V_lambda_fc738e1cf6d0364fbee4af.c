/*
 * XREFs of ??$?0V_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_@@@?$CTaskWrapper@V_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_@@@Z @ 0x180027D48
 * Callers:
 *     ??$Make@V?$CTaskWrapper@V_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_@@@ComTaskPool@Internal@Windows@@V_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_@@@Z @ 0x180027CE4 (--$Make@V-$CTaskWrapper@V_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_@@@ComTaskPool@Internal@Window.c)
 * Callees:
 *     ?GetLocal@?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAAPEAPEAVThreadFailureCallbackHolder@details@3@_N@Z @ 0x1800045AC (-GetLocal@-$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QE.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018934 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0?$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x180025DE4 (--0-$ActivityData@VSingleViewExperienceLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_>::CTaskWrapper<_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_>(
        __int64 a1,
        __int64 a2)
{
  bool v2; // zf
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // r14
  bool v8; // al
  _QWORD *v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rbp

  v2 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ShellExperienceDispatcher *,Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  if ( !v2 )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  *(_QWORD *)a1 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_fc738e1cf6d0364fbee4afb9f38cb5b5_>::`vftable';
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 16);
  v5 = (_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( a1 + 40 != a2 + 24 )
  {
    *(_QWORD *)(a1 + 40) = *v5;
    *v5 = 0LL;
  }
  v6 = (_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( a1 + 48 != a2 + 32 )
  {
    *(_QWORD *)(a1 + 48) = *v6;
    *v6 = 0LL;
  }
  v7 = (_QWORD *)(a1 + 64);
  v8 = *(_DWORD *)(a2 + 72) != 0;
  *(_QWORD *)(a1 + 56) = &wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = a1 + 56;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( v8 )
  {
    v9 = wil::details::g_pThreadFailureCallbacks
       ? (_QWORD *)wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::GetLocal(
                     (__int64)&wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable',
                     1)
       : 0LL;
    *v7 = v9;
    if ( v9 )
    {
      *(_QWORD *)(a1 + 80) = *v9;
      *v9 = v7;
      *(_DWORD *)(a1 + 88) = GetCurrentThreadId();
    }
  }
  v10 = a1 + 112;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::ActivityData<SingleViewExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 112,
    a2 + 96);
  *(_QWORD *)(a1 + 360) = *(_QWORD *)(a2 + 344);
  *(_QWORD *)(a2 + 344) = 0LL;
  if ( *(_QWORD *)(a1 + 360) )
  {
    v11 = *(_QWORD *)(a1 + 360);
    if ( v11 )
      v10 = v11 + 8;
    else
      v10 = 0LL;
  }
  *(_QWORD *)(a1 + 104) = v10;
  *(_QWORD *)(a1 + 96) = v10 + 40;
  *(_QWORD *)(a2 + 88) = a2 + 96;
  if ( *(_DWORD *)(a2 + 72) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 48));
  *(_QWORD *)(a1 + 56) = &SingleViewExperienceTelemetry::Reactivate::`vftable';
  return a1;
}
