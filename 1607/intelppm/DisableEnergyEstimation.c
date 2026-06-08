/*
 * XREFs of DisableEnergyEstimation @ 0x1C0022CB0
 * Callers:
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C002312C (InitializeEnergyEstimationForEfficiencyClass.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002510 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002A70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DisableEnergyEstimation(__int64 a1)
{
  void *v1; // rdi
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(void **)(a1 + 328);
  if ( v1 )
  {
    if ( qword_1C000EEB0 )
    {
      KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(a1 + 56));
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      ((void (*)(void))qword_1C000EEB0)();
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
    ExFreePoolWithTag(v1, 0x72637250u);
    *(_QWORD *)(a1 + 328) = 0LL;
  }
}
