/*
 * XREFs of ?Invoke@?$InvokeHelper@UIDeferralCompletedHandler@Foundation@Windows@@V_lambda_cea97c4441210eed0902fb5310eddefb_@@$0A@@Details@WRL@Microsoft@@UEAAJXZ @ 0x180043EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E04 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001B784 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18001B7DC (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ @ 0x180040A90 (-NotifySubscribersIfNecessary@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper<Windows::Foundation::IDeferralCompletedHandler,_lambda_cea97c4441210eed0902fb5310eddefb_,0>::Invoke(
        __int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  char v5; // di
  volatile signed __int32 *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(v1 + 8), &SRWLock);
  v2 = *(_DWORD *)(v1 + 20);
  if ( v2 )
  {
    v4 = v2 - 1;
    *(_DWORD *)(v1 + 20) = v4;
    if ( !*(_BYTE *)(v1 + 16) || (v5 = 1, v4) )
      v5 = 0;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( v5 )
    {
      v6 = *(volatile signed __int32 **)(v1 + 72);
      if ( _InterlockedCompareExchange(v6 + 22, 0, 1) != 1 )
      {
        v7 = ContentManagement::TargetedContent::SubscriptionImpl::NotifySubscribersIfNecessary((ContentManagement::TargetedContent::SubscriptionImpl *)v6);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x215,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
            (const char *)(unsigned int)v7);
      }
    }
    return 0;
  }
  else
  {
    v3 = -2147483634;
    RoOriginateError(2147483662LL, 0LL);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(2147483662LL);
  }
  return v3;
}
