/*
 * XREFs of ??1?$ComPtr@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180015AC8
 * Callers:
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&ContentManagement::AddThumbnailToCacheAsyncActionName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_78183572efa226fa22f190bba0a96e5b____::_1_::dtor$0 @ 0x18005A058 (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-ContentManagement--Ad.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenRotationAsync_::_1_::dtor$2 @ 0x18005A5AE (_ContentManagement--ContentManagementService--EnableLockScreenRotationAsync_--_1_--dtor$2.c)
 *     _ContentManagement::ContentManagementService::EnableLockScreenOverlayAsync_::_1_::dtor$2 @ 0x18005A5D8 (_ContentManagement--ContentManagementService--EnableLockScreenOverlayAsync_--_1_--dtor$2.c)
 *     _ContentManagement::ContentManagementService::EnableStartMenuSystemPaneSuggestionsAsync_::_1_::dtor$2 @ 0x18005A602 (_ContentManagement--ContentManagementService--EnableStartMenuSystemPaneSuggestionsA_ea_18005A602.c)
 *     _ContentManagement::ContentManagementService::EnableContextualSuggestionsAsync_::_1_::dtor$2 @ 0x18005A62C (_ContentManagement--ContentManagementService--EnableContextualSuggestionsAsync_--_1_--dtor$2.c)
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::ProcessCreativeEventOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2__Windows::Internal::ComTaskPoolHandler__lambda_d1d6df3afd909720884b15ba4832b47d____::_1_::dtor$0 @ 0x18005AC68 (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--AsyncCausalityOptions_-_anonymous_namespace_.c)
 *     _Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_ContentManagement::TargetedContent::ITargetedContentSubscription__ContentManagement::TargetedContent::TargetedContentSubscription_____ptr64_Windows::Internal::ComTaskPoolHandler__lambda_770ef59a870ab0485516ac767e870dae____::_1_::dtor$0 @ 0x18005C056 (_Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_ContentManag.c)
 *     _Windows::Internal::MakeAsyncOperationHelper_Windows::Internal::CMarshaledInterfaceResult_ContentManagement::TargetedContent::ITargetedContentCollection__ContentManagement::TargetedContent::TargetedContentCollection_____ptr64_Windows::Internal::ComTaskPoolHandler__::_1_::dtor$0 @ 0x18005C068 (_Windows--Internal--MakeAsyncOperationHelper_Windows--Internal--CMarshaledInterfaceResult_Conten.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>::~ComPtr<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(result + 8) + 16LL))(result + 8);
  }
  return result;
}
