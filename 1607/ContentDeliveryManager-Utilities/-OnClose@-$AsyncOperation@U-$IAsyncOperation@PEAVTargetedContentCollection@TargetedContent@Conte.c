/*
 * XREFs of ?OnClose@?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x180045A50
 * Callers:
 *     <none>
 * Callees:
 *     ?Close@?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@Windows@@QEAAXXZ @ 0x1800472B4 (-Close@-$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<ContentManagement::TargetedContent::TargetedContentCollection *>,Windows::Foundation::IAsyncOperationCompletedHandler<ContentManagement::TargetedContent::TargetedContentCollection *>,Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentCollection>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::OnClose(
        __int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 236));
  if ( (_DWORD)result == 1 )
    return Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentCollection>::Close(a1 + 248);
  return result;
}
