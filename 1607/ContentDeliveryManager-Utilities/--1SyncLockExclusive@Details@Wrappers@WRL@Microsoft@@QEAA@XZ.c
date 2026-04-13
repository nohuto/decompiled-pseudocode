/*
 * XREFs of ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800187C0
 * Callers:
 *     _ContentManagement::ContentManagementService::SendAppServiceMessage_::_1_::dtor$7 @ 0x18005A692 (_ContentManagement--ContentManagementService--SendAppServiceMessage_--_1_--dtor$7.c)
 *     _ContentManagement::ContentManagementService::CloseConnection_::_1_::dtor$0 @ 0x18005A6D4 (_ContentManagement--ContentManagementService--CloseConnection_--_1_--dtor$0.c)
 *     _Windows::Foundation::Collections::Internal::NaiveSplitView_HSTRING_______ptr64_ContentManagement::TargetedContent::TargetedContentValue_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_ContentManagement::TargetedContent::TargetedContentValue_____ptr64__Windows::Foundation::Collections::Internal::HashMapOptions_HSTRING_______ptr64_ContentManagement::TargetedContent::TargetedContentValue_____ptr64_Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING_______ptr64__0_1_0___::Force_::_1_::dtor$0 @ 0x18005C831 (_Windows--Foundation--Collections--Internal--NaiveSplitView_HSTRING_______ptr64_ContentManagemen.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    *this = 0LL;
  }
}
