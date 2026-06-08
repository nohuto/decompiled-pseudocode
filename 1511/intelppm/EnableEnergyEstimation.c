/*
 * XREFs of EnableEnergyEstimation @ 0x1C0021E10
 * Callers:
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C00221F4 (InitializeEnergyEstimationForEfficiencyClass.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002450 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D00 (memset.c)
 */

__int64 __fastcall EnableEnergyEstimation(__int64 a1)
{
  int v2; // ebx
  PVOID PoolWithTag; // rax
  void *v4; // rdi
  __int64 v5; // rdx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  if ( qword_1C000DEA0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x72637250u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x70uLL);
      v5 = *(unsigned int *)(a1 + 56);
      *(_QWORD *)(a1 + 312) = v4;
      KeProcessorGroupAffinity(&Affinity, v5);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v2 = ((__int64 (*)(void))qword_1C000DEA0)();
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      if ( v2 < 0 )
      {
        ExFreePoolWithTag(v4, 0x72637250u);
        *(_QWORD *)(a1 + 312) = 0LL;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v2;
}
