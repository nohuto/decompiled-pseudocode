/*
 * XREFs of ?Complete@?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXJ@Z @ 0x180045750
 * Callers:
 *     <none>
 * Callees:
 *     ?_AfterExecute@?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x180047020 (-_AfterExecute@-$AsyncOperation@U-$IAsyncOperation@PEAVTargetedContentSubscription@TargetedConte.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<ContentManagement::TargetedContent::TargetedContentSubscription *>,Windows::Foundation::IAsyncOperationCompletedHandler<ContentManagement::TargetedContent::TargetedContentSubscription *>,Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentSubscription>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Complete(
        __int64 a1,
        signed __int32 a2)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 84), a2, 1);
  if ( (_DWORD)result == 1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 80), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<ContentManagement::TargetedContent::TargetedContentSubscription *>,Windows::Foundation::IAsyncOperationCompletedHandler<ContentManagement::TargetedContent::TargetedContentSubscription *>,Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentSubscription>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::_AfterExecute(
               a1 - 168,
               *(unsigned int *)(a1 + 84));
  }
  return result;
}
