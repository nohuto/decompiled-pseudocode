/*
 * XREFs of __lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_::operator()_::_1_::catch$1 @ 0x18005BE05
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E04 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180032860 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?QueueContentUpdateRetryNoLock@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ @ 0x1800403AC (-QueueContentUpdateRetryNoLock@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_36c60fc5efa5e4ecbc7d0aca6a2b6163_::operator()_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  ContentManagement::TargetedContent::SubscriptionImpl **v5; // rbx
  RTL_SRWLOCK *v6; // rcx

  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 424),
    (void *)0x1B5,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
    a4);
  v5 = *(ContentManagement::TargetedContent::SubscriptionImpl ***)(a2 + 56);
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)*v5 + 19, (RTL_SRWLOCK **)(a2 + 56));
  if ( *(_QWORD *)(a2 + 48) == *((_QWORD *)*v5 + 20) )
  {
    ++*((_DWORD *)*v5 + 42);
    ContentManagement::TargetedContent::SubscriptionImpl::QueueContentUpdateRetryNoLock(*v5);
  }
  v6 = *(RTL_SRWLOCK **)(a2 + 56);
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  return &loc_1800407BA;
}
