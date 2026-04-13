/*
 * XREFs of ?CancelContentUpdateRetry@SubscriptionImpl@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180040888
 * Callers:
 *     ??1SubscriptionImpl@TargetedContent@ContentManagement@@EEAA@XZ @ 0x18003F988 (--1SubscriptionImpl@TargetedContent@ContentManagement@@EEAA@XZ.c)
 *     ?GetContentAndQueueRetryIfAppropriate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAA?AV?$ComPtr@UITargetedContentCollection@TargetedContent@ContentManagement@@@WRL@Microsoft@@_N@Z @ 0x18003FD18 (-GetContentAndQueueRetryIfAppropriate@SubscriptionImpl@TargetedContent@ContentManagement@@AEAA-A.c)
 *     ?OnContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJE@Z @ 0x1800408E0 (-OnContentUpdated@SubscriptionImpl@TargetedContent@ContentManagement@@UEAAJE@Z.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E04 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ContentManagement::TargetedContent::SubscriptionImpl::CancelContentUpdateRetry(RTL_SRWLOCK *this)
{
  PVOID Ptr; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive(this + 19, &SRWLock);
  Ptr = this[20].Ptr;
  if ( Ptr )
  {
    this[20].Ptr = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
