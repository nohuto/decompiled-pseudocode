/*
 * XREFs of ?OnStart@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?RevertOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x18001CF20
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180004288 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?TryTransitionToError@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAA_NJW4CancelTransitionPolicy@23@PEAX@Z @ 0x18001D668 (-TryTransitionToError@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details.c)
 *     ?_AfterExecute@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?RevertOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x18001DABC (-_AfterExecute@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::RevertOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::OnStart(
        __int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdi
  DWORD CurrentThreadId; // eax
  int v5; // eax
  __int64 v6; // rdx

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 224) + 8LL))(
         *(_QWORD *)(a1 + 224),
         0LL,
         0LL,
         a1 + 248);
  if ( v2 < 0 )
    goto LABEL_13;
  v3 = a1 - 8;
  *(_DWORD *)(a1 + 280) = GetCurrentThreadId();
  CurrentThreadId = GetCurrentThreadId();
  v2 = Windows::Internal::ComTaskPool::RunTask(
         *(_DWORD *)(a1 + 272),
         *(_DWORD *)(a1 + 276),
         CurrentThreadId,
         0,
         (struct Windows::Internal::IComPoolTask *)((a1 + 168) & -(__int64)(a1 != 8)),
         0LL);
  if ( v2 < 0 )
  {
    if ( *(_DWORD *)(a1 + 216) )
    {
      Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TryTransitionToError(
        a1,
        (unsigned int)v2);
      v2 = 0;
    }
    else
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v3 + 224)) != 1 )
        goto LABEL_12;
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(v3 + 232) + 8LL))(
             *(_QWORD *)(v3 + 232),
             1LL,
             (unsigned int)v2,
             v3 + 256);
      if ( v5 >= 0 && *(_BYTE *)(v3 + 265) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 248), 0xFFFFFFFF) != 1 )
          goto LABEL_12;
        v6 = *(unsigned int *)(v3 + 252);
      }
      else
      {
        v6 = (unsigned int)v5;
      }
      Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::RevertOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterExecute(
        a1 - 8,
        v6);
    }
LABEL_12:
    if ( v2 < 0 )
LABEL_13:
      Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TryTransitionToError(
        a1,
        (unsigned int)v2);
  }
  return (unsigned int)v2;
}
