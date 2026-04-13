/*
 * XREFs of ??1?$AutoStubBias@U?$IAsyncOperation@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVTargetedContentSubscription@TargetedContent@ContentManagement@@@23@@@QEAA@XZ @ 0x180016594
 * Callers:
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncActionCompletedHandler_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$4 @ 0x18005A246 (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncActionCompletedHandler__ea_18005A246.c)
 *     _Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncOperationCompletedHandler_ContentManagement::TargetedContent::TargetedContentSubscription_____ptr64__Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireProgress_::_1_::dtor$4 @ 0x18005A2CF (_Windows--Internal--AsyncBaseWithProgressFTM_Windows--Foundation--IAsyncOperationCo_ea_18005A2CF.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_ContentManagement::TargetedContent::TargetedContentSubscription_____ptr64__1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$4 @ 0x18005C10C (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandl_ea_18005C10C.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_ContentManagement::TargetedContent::TargetedContentCollection_____ptr64__1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$4 @ 0x18005C1AA (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandl_ea_18005C1AA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
HRESULT __fastcall AutoStubBias<Windows::Foundation::IAsyncOperation<ContentManagement::TargetedContent::TargetedContentSubscription *>,Windows::Foundation::IAsyncOperationCompletedHandler<ContentManagement::TargetedContent::TargetedContentSubscription *>>::~AutoStubBias<Windows::Foundation::IAsyncOperation<ContentManagement::TargetedContent::TargetedContentSubscription *>,Windows::Foundation::IAsyncOperationCompletedHandler<ContentManagement::TargetedContent::TargetedContentSubscription *>>(
        int *a1)
{
  HRESULT result; // eax
  LPSTREAM v3; // rcx

  if ( a1[2] >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)a1 + 40LL))(*(_QWORD *)a1, 0LL, 0LL, 0LL);
    result = CoReleaseMarshalData(*(LPSTREAM *)a1);
  }
  v3 = *(LPSTREAM *)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    return (*(__int64 (__fastcall **)(LPSTREAM))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
