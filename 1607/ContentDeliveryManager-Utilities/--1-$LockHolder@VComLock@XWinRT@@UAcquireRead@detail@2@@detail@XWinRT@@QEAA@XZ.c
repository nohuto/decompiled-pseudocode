/*
 * XREFs of ??1?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x18000C084
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64___::GetAt_::_1_::dtor$0 @ 0x180059F7A (_Windows--Foundation--Collections--Internal--Vector_Windows--ApplicationModel--Stor_ea_180059F7A.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64___::IndexOf_::_1_::dtor$0 @ 0x180059F8C (_Windows--Foundation--Collections--Internal--Vector_Windows--ApplicationModel--Stor_ea_180059F8C.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64___::GetMany_::_1_::dtor$0 @ 0x180059FDA (_Windows--Foundation--Collections--Internal--Vector_Windows--ApplicationModel--Stor_ea_180059FDA.c)
 *     _Windows::Foundation::Collections::Internal::Vector_ContentManagement::TargetedContent::TargetedContentItem_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_ContentManagement::TargetedContent::TargetedContentItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_ContentManagement::TargetedContent::TargetedContentItem_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_ContentManagement::TargetedContent::TargetedContentItem_____ptr64_0_1_0___::IndexOf_::_1_::dtor$0 @ 0x18005A00A (_Windows--Foundation--Collections--Internal--Vector_ContentManagement--TargetedCont_ea_18005A00A.c)
 *     _Windows::Foundation::Collections::Internal::Vector_ContentManagement::TargetedContent::TargetedContentItem_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_ContentManagement::TargetedContent::TargetedContentItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_ContentManagement::TargetedContent::TargetedContentItem_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_ContentManagement::TargetedContent::TargetedContentItem_____ptr64_0_1_0___::GetMany_::_1_::dtor$0 @ 0x18005A046 (_Windows--Foundation--Collections--Internal--Vector_ContentManagement--TargetedCont_ea_18005A046.c)
 * Callees:
 *     <none>
 */

void __fastcall XWinRT::detail::LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireRead>::~LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireRead>(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( *(_DWORD *)v2 == 1 )
      --*(_DWORD *)(v2 + 8);
    else
      ReleaseSRWLockShared((PSRWLOCK)(v2 + 8));
    *a1 = 0LL;
  }
}
