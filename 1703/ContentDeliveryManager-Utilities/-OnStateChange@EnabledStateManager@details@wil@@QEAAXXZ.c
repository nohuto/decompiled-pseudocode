/*
 * XREFs of ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18000A718
 * Callers:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18000A5F8 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     _lambda_42ed7cb8e6cd03c5242b9a63c40e80d6_::_lambda_invoker_cdecl_ @ 0x18000AB80 (_lambda_42ed7cb8e6cd03c5242b9a63c40e80d6_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002F1C (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCache@@W4wil_details_CachedFeatureEnabledState@@W4wil_details_CachedHasNotificationState@@@Z @ 0x180007440 (-wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCach.c)
 */

void __fastcall wil::details::EnabledStateManager::OnStateChange(RTL_SRWLOCK *this)
{
  volatile signed __int32 **Ptr; // rbx
  char *v3; // rdi
  volatile signed __int32 *v4; // rdx
  signed __int32 v5; // eax
  RTL_SRWLOCK *v6; // rcx
  char *v7; // [rsp+28h] [rbp-10h]
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  if ( LOBYTE(this->Ptr) )
  {
    wil::srwlock::lock_exclusive(this + 1, &SRWLock);
    Ptr = (volatile signed __int32 **)this[9].Ptr;
    v3 = (char *)Ptr + (((char *)this[10].Ptr - (char *)Ptr) & 0xFFFFFFFFFFFFFFF0uLL);
    v7 = v3;
    while ( Ptr != (volatile signed __int32 **)v3 )
    {
      if ( *(_DWORD *)Ptr )
      {
        v4 = Ptr[1];
        do
        {
          if ( (*v4 & 0x30) == 0 )
            break;
          v5 = *v4;
        }
        while ( v5 != _InterlockedCompareExchange(v4, *v4 & 0xFFFFFFCF, v5) );
        v3 = v7;
      }
      else
      {
        wil_details_SetEnabledAndHasNotificationStateProperties(Ptr[1], 0, 0);
      }
      Ptr += 2;
    }
    v6 = SRWLock;
    this[10].Ptr = this[9].Ptr;
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
  }
}
