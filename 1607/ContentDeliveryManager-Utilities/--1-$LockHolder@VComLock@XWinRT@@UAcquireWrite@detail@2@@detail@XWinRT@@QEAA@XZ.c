/*
 * XREFs of ??1?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x18000C0BC
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64___::SetAt_::_1_::dtor$2 @ 0x180059FB6 (_Windows--Foundation--Collections--Internal--Vector_Windows--ApplicationModel--Stor_ea_180059FB6.c)
 *     _Windows::Foundation::Collections::Internal::Vector_ContentManagement::TargetedContent::TargetedContentItem_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_ContentManagement::TargetedContent::TargetedContentItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_ContentManagement::TargetedContent::TargetedContentItem_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_ContentManagement::TargetedContent::TargetedContentItem_____ptr64_0_1_0___::Clear_::_1_::dtor$0 @ 0x180059FC8 (_Windows--Foundation--Collections--Internal--Vector_ContentManagement--TargetedContent--Targeted.c)
 *     _Windows::Foundation::Collections::Internal::Vector_ContentManagement::AppInstallInfoRecord_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_ContentManagement::AppInstallInfoRecord_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_ContentManagement::AppInstallInfoRecord_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_ContentManagement::AppInstallInfoRecord_____ptr64_0_1_0___::SetAt_::_1_::dtor$2 @ 0x18005A034 (_Windows--Foundation--Collections--Internal--Vector_ContentManagement--AppInstallIn_ea_18005A034.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo_____ptr64___::RemoveAtInternal_::_1_::dtor$1 @ 0x18005A09A (_Windows--Foundation--Collections--Internal--Vector_Windows--ApplicationModel--Stor_ea_18005A09A.c)
 *     _Windows::Foundation::Collections::Internal::Vector_ContentManagement::AppInstallInfoRecord_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_ContentManagement::AppInstallInfoRecord_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_ContentManagement::AppInstallInfoRecord_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_ContentManagement::AppInstallInfoRecord_____ptr64_0_1_0___::RemoveAtInternal_::_1_::dtor$1 @ 0x18005A0D6 (_Windows--Foundation--Collections--Internal--Vector_ContentManagement--AppInstallIn_ea_18005A0D6.c)
 *     _Windows::Foundation::Collections::Internal::Vector_ContentManagement::TargetedContent::TargetedContentItem_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_ContentManagement::TargetedContent::TargetedContentItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_ContentManagement::TargetedContent::TargetedContentItem_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_ContentManagement::TargetedContent::TargetedContentItem_____ptr64_0_1_0___::SetAt_::_1_::dtor$2 @ 0x18005C714 (_Windows--Foundation--Collections--Internal--Vector_ContentManagement--TargetedCont_ea_18005C714.c)
 *     _Windows::Foundation::Collections::Internal::Vector_ContentManagement::TargetedContent::TargetedContentItem_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_ContentManagement::TargetedContent::TargetedContentItem_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_ContentManagement::TargetedContent::TargetedContentItem_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_ContentManagement::TargetedContent::TargetedContentItem_____ptr64_0_1_0___::RemoveAtInternal_::_1_::dtor$1 @ 0x18005C7B5 (_Windows--Foundation--Collections--Internal--Vector_ContentManagement--TargetedCont_ea_18005C7B5.c)
 * Callees:
 *     <none>
 */

void __fastcall XWinRT::detail::LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireWrite>::~LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireWrite>(
        __int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( *(_DWORD *)v2 == 1 )
      *(_DWORD *)(v2 + 8) += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(v2 + 8));
    *a1 = 0LL;
  }
}
