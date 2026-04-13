/*
 * XREFs of ?put_Completed@?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@3@@Z @ 0x180046870
 * Callers:
 *     <none>
 * Callees:
 *     ?PutOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAU?$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@3@@Z @ 0x1800463C0 (-PutOnComplete@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@T.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<ContentManagement::TargetedContent::TargetedContentCollection *>,Windows::Foundation::IAsyncOperationCompletedHandler<ContentManagement::TargetedContent::TargetedContentCollection *>,Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentCollection>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::put_Completed(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // edi

  v2 = a1 - 144;
  if ( a1 != 144 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(a1 - 144);
  v4 = Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncOperationCompletedHandler<ContentManagement::TargetedContent::TargetedContentCollection *>,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::PutOnComplete(
         v2,
         a2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return v4;
}
