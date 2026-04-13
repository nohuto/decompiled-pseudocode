/*
 * XREFs of ?OnContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJE@Z @ 0x1800408E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E04 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?CancelContentUpdateRetry@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180040888 (-CancelContentUpdateRetry@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     ?NotifySubscribersOfContentUpdate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJ_N0@Z @ 0x180040994 (-NotifySubscribersOfContentUpdate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAJ_N0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::TargetedContent::SubscriptionImpl::OnContentUpdated(RTL_SRWLOCK *this, char a2)
{
  PVOID Ptr; // rcx
  RTL_SRWLOCK *v5; // rcx
  bool v6; // di
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  ContentManagement::TargetedContent::SubscriptionImpl::CancelContentUpdateRetry(this - 6);
  wil::srwlock::lock_exclusive(this + 9, &SRWLock);
  this[10].Ptr = 0LL;
  Ptr = this[11].Ptr;
  if ( Ptr )
  {
    this[11].Ptr = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  v5 = SRWLock;
  v6 = a2 != 0;
  LOBYTE(this[12].Ptr) = v6;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  v7 = ContentManagement::TargetedContent::SubscriptionImpl::NotifySubscribersOfContentUpdate(
         (ContentManagement::TargetedContent::SubscriptionImpl *)&this[-6],
         v6,
         0);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1DF,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentapi\\targetedcontentsubscription.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
