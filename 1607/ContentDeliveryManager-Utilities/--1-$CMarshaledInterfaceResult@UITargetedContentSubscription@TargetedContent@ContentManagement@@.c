/*
 * XREFs of ??1?$CMarshaledInterfaceResult@UITargetedContentSubscription@TargetedContent@ContentManagement@@@Internal@Windows@@QEAA@XZ @ 0x180046D24
 * Callers:
 *     _Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncOperation_ContentManagement::TargetedContent::TargetedContentSubscription_____ptr64__Windows::Foundation::IAsyncOperationCompletedHandler_ContentManagement::TargetedContent::TargetedContentSubscription_____ptr64__Windows::Internal::CMarshaledInterfaceResult_ContentManagement::TargetedContent::ITargetedContentSubscription__Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x18005C1D8 (_Windows--Internal--AsyncOperation_Windows--Foundation--IAsyncOperation_ContentMana_ea_18005C1D8.c)
 *     _Windows::Internal::AsyncOperation_Windows::Foundation::IAsyncOperation_ContentManagement::TargetedContent::TargetedContentCollection_____ptr64__Windows::Foundation::IAsyncOperationCompletedHandler_ContentManagement::TargetedContent::TargetedContentCollection_____ptr64__Windows::Internal::CMarshaledInterfaceResult_ContentManagement::TargetedContent::ITargetedContentCollection__Windows::Internal::ComTaskPoolHandler_Windows::Internal::INilDelegate_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x18005C214 (_Windows--Internal--AsyncOperation_Windows--Foundation--IAsyncOperation_ContentMana_ea_18005C214.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentSubscription>::~CMarshaledInterfaceResult<ContentManagement::TargetedContent::ITargetedContentSubscription>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
