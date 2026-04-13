/*
 * XREFs of ??$MakeAsyncOperationHelper@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@Windows@@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@VComTaskPoolHandler@23@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@Windows@@@01@@Z @ 0x180044220
 * Callers:
 *     ?GetContentAsync@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJPEAPEAU?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@@Z @ 0x18003FBF0 (-GetContentAsync@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJPEAPEAU-$IAsyncOperati.c)
 *     ?GetContentByIdAsync@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@@Z @ 0x180041300 (-GetContentByIdAsync@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING.c)
 * Callees:
 *     ??$Make@V?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VComTaskPoolHandler@23@AEBQEBGAEAW4TrustLevel@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$AsyncOperation@U?$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentCollection@TargetedContent@ContentManagement@@@23@V?$CMarshaledInterfaceResult@UITargetedContentCollection@TargetedContent@ContentManagement@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@12@$$QEAVComTaskPoolHandler@Internal@Windows@@AEBQEBGAEAW4TrustLevel@@@Z @ 0x180047844 (--$Make@V-$AsyncOperation@U-$IAsyncOperation@PEAVTargetedContentCollection@TargetedContent@Conte.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::MakeAsyncOperationHelper<Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentCollection>,ContentManagement::TargetedContent::TargetedContentCollection *,Windows::Internal::ComTaskPoolHandler>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        void (__fastcall ***a4)(_QWORD, __int64))
{
  void (__fastcall ***v4)(_QWORD, __int64); // rsi
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF
  const wchar_t *v12; // [rsp+68h] [rbp+20h] BYREF

  v4 = a4;
  v11 = 0;
  v12 = L"Windows.Foundation.IAsyncOperation`1<ContentManagement.TargetedContent.TargetedContentCollection>";
  *a2 = 0LL;
  v6 = a4 == 0LL ? 0x8007000E : 0;
  if ( !a4 )
    return v6;
  Microsoft::WRL::Details::Make<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<ContentManagement::TargetedContent::TargetedContentCollection *>,Windows::Foundation::IAsyncOperationCompletedHandler<ContentManagement::TargetedContent::TargetedContentCollection *>,Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentCollection>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Windows::Internal::ComTaskPoolHandler,unsigned short const * const &,enum TrustLevel &>(
    &v10,
    a1,
    &v12,
    &v11,
    -2LL);
  v7 = v10;
  v6 = v10 == 0 ? 0x8007000E : 0;
  if ( !v10 )
    goto LABEL_7;
  *(_QWORD *)(v10 + 232) = v4;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 104LL))(v7 + 8);
  v4 = 0LL;
  if ( (v6 & 0x80000000) == 0 )
  {
    v8 = v7;
    v7 = 0LL;
    v10 = 0LL;
    if ( v8 )
      v8 += 152LL;
    *a2 = v8;
LABEL_7:
    if ( v4 )
      (**v4)(v4, 1LL);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 16LL))(v7 + 8);
  return v6;
}
