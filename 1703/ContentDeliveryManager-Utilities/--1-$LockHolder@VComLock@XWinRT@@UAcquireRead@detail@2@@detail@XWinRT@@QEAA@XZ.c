/*
 * XREFs of ??1?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x180011824
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest_____ptr64___::GetAt_::_1_::dtor$0 @ 0x180070BB1 (_Windows--Foundation--Collections--Internal--Vector_Windows--Security--Authentication--OnlineId-.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest_____ptr64___::IndexOf_::_1_::dtor$0 @ 0x180070BBD (_Windows--Foundation--Collections--Internal--Vector_Windows--Security--Authenticati_ea_180070BBD.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest_____ptr64__Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest_____ptr64___::GetMany_::_1_::dtor$0 @ 0x180070BF9 (_Windows--Foundation--Collections--Internal--Vector_Windows--Security--Authenticati_ea_180070BF9.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64_Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64__Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64__Windows::Foundation::Collections::Internal::VectorOptions_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64_0_1_0___::IndexOf_::_1_::dtor$0 @ 0x180070C1D (_Windows--Foundation--Collections--Internal--Vector_Windows--Services--TargetedCont_ea_180070C1D.c)
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
