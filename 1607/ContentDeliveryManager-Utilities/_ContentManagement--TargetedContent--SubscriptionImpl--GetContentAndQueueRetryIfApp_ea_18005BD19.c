/*
 * XREFs of _ContentManagement::TargetedContent::SubscriptionImpl::GetContentAndQueueRetryIfAppropriate_::_1_::catch$0 @ 0x18005BD19
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E04 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?QueueContentUpdateRetryNoLock@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ @ 0x1800403AC (-QueueContentUpdateRetryNoLock@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x180058E80 (_CxxThrowException_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ContentManagement::TargetedContent::SubscriptionImpl::GetContentAndQueueRetryIfAppropriate_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  RTL_SRWLOCK *v4; // rcx

  if ( *(_BYTE *)(a2 + 48) )
    throw;
  v3 = *(_QWORD *)(a2 + 88);
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(v3 + 152), (RTL_SRWLOCK **)(a2 + 88));
  *(_DWORD *)(v3 + 168) = 0;
  ContentManagement::TargetedContent::SubscriptionImpl::QueueContentUpdateRetryNoLock((ContentManagement::TargetedContent::SubscriptionImpl *)v3);
  v4 = *(RTL_SRWLOCK **)(a2 + 88);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return &loc_18003FF82;
}
