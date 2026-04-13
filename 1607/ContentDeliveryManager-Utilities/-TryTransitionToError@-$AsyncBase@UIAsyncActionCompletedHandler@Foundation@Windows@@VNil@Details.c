/*
 * XREFs of ?TryTransitionToError@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAA_NJW4CancelTransitionPolicy@23@PEAX@Z @ 0x18001670C
 * Callers:
 *     ?OnStart@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenOverlayOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180015F20 (-OnStart@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCN.c)
 *     ?_AfterExecute@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x180016B74 (-_AfterExecute@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@.c)
 *     ?OnStart@?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180045A80 (-OnStart@-$AsyncOperation@U-$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@Con.c)
 *     ?OnStart@?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x180046A60 (-OnStart@-$AsyncOperation@U-$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@Conte.c)
 *     ?_AfterExecute@?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x180047020 (-_AfterExecute@-$AsyncOperation@U-$IAsyncOperation@PEAVTargetedContentSubscription@TargetedConte.c)
 *     ?_AfterExecute@?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x1800471F8 (-_AfterExecute@-$AsyncOperation@U-$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::TryTransitionToError(
        __int64 a1,
        signed __int32 a2,
        signed __int32 a3)
{
  bool v3; // di
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  signed __int32 v7; // ecx
  signed __int32 v8; // eax
  void (__fastcall *v9)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, int); // rax
  GUID v11; // [rsp+40h] [rbp-18h] BYREF
  signed __int32 v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = a3;
  v3 = 0;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 44), a2, 0) )
  {
    v5 = (_QWORD *)(a1 + 32);
    v6 = *(_QWORD *)(a1 + 32);
    if ( v6 )
    {
      *v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    GetRestrictedErrorInfo(v5);
    v7 = *(_DWORD *)(a1 + 40);
    v12 = -2;
    _InterlockedCompareExchange(&v12, v7, -2);
    if ( v12 )
    {
      return 0;
    }
    else
    {
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), 3, 0);
      v3 = v8 == v12;
      if ( v8 == v12 && Microsoft::WRL::gCausality )
      {
        v9 = *(void (__fastcall **)(struct Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics *, __int64, __int64, GUID *, __int64, int))(*(_QWORD *)Microsoft::WRL::gCausality + 64LL);
        v11 = GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
        v9(Microsoft::WRL::gCausality, 2LL, 2LL, &v11, a1, 4);
      }
    }
  }
  return v3;
}
