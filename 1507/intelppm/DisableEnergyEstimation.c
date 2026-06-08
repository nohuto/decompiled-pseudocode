/*
 * XREFs of DisableEnergyEstimation @ 0x1C002198C
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C0021C0C (InitializeEnergyEstimation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DisableEnergyEstimation(__int64 a1)
{
  _QWORD *v2; // rbx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  if ( (*(_QWORD *)(a1 + 248) & 0x2000000000LL) != 0 )
  {
    if ( qword_1C000DB68 )
    {
      KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(a1 + 56));
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      ((void (*)(void))qword_1C000DB68)();
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
    v2 = *(_QWORD **)(a1 + 312);
    if ( v2 )
    {
      if ( v2[2] )
      {
        ((void (*)(void))HalPrivateDispatchTable[74])();
        v2[2] = 0LL;
      }
      ExFreePoolWithTag(v2, 0x72637250u);
      *(_QWORD *)(a1 + 312) = 0LL;
    }
  }
}
