/*
 * XREFs of ?EnsureStateData@FeatureStateManager@details@wil@@AEAA_NXZ @ 0x18003F648
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18003F520 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800074F8 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180042FB4 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 */

bool __fastcall wil::details::FeatureStateManager::EnsureStateData(RTL_SRWLOCK *this)
{
  PVOID Ptr; // rcx
  char *v3; // rdi
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  if ( !this[3].Ptr )
  {
    if ( !this[2].Ptr )
    {
      Ptr = this[1].Ptr;
      SRWLock = 0LL;
      if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(Ptr, &SRWLock) >= 0
        && !this[2].Ptr )
      {
        this[2].Ptr = SRWLock;
      }
    }
    v3 = (char *)this[2].Ptr;
    if ( v3 )
      v3 += 32;
    wil::srwlock::lock_exclusive(this + 4, &SRWLock);
    if ( !this[3].Ptr )
      this[3].Ptr = v3;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  return this[3].Ptr != 0LL;
}
