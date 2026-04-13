/*
 * XREFs of ??1?$AutoStubBias@UIUnknown@@UINilDelegate@Internal@Windows@@@@QEAA@XZ @ 0x18001D4F8
 * Callers:
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncActionCompletedHandler_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::RevertOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$4 @ 0x180070F11 (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncActionCompletedHandler__ea_180070F11.c)
 *     _Windows::Internal::AsyncBaseWithProgressFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64______ptr64__Windows::Internal::INilDelegate_1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireProgress_::_1_::dtor$4 @ 0x180070F88 (_Windows--Internal--AsyncBaseWithProgressFTM_Windows--Foundation--IAsyncOperationCo_ea_180070F88.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64______ptr64__1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$4 @ 0x180072E50 (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandl_ea_180072E50.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
HRESULT __fastcall AutoStubBias<IUnknown,Windows::Internal::INilDelegate>::~AutoStubBias<IUnknown,Windows::Internal::INilDelegate>(
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
