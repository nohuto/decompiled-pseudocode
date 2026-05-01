/*
 * XREFs of RmpEnforcerContextAllocateState @ 0x18001D108
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAUIResourceEnforcer@@PEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001B17C (-RmpAllocateAllModuleState@@YAJPEAUIResourceEnforcer@@PEAVModernResourceEnforcer@@PEAU_RM_SERVIC.c)
 * Callees:
 *     RmpPowerBoostContextAllocateState @ 0x18001D1F8 (RmpPowerBoostContextAllocateState.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall RmpEnforcerContextAllocateState(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax

  result = NtCreateIoCompletion((PHANDLE)(a2 + 40), 0x1F0003u, 0LL, 1u);
  if ( result >= 0 )
  {
    result = RmpPowerBoostContextAllocateState(a2);
    if ( result >= 0 )
    {
      result = TpAllocTimer(a2 + 208, RmpQoSWatchdogCallback, a2 + 192, 0LL);
      if ( result >= 0 )
        result = 0;
      if ( result >= 0 )
      {
        result = TpAllocTimer(a2 + 104, RmpGpuMonitorTimerCallback, a2, 0LL);
        if ( result >= 0 )
          result = 0;
        if ( result >= 0 )
        {
          result = TpAllocWork(a2 + 232, RmpOfferLazyDecommitWorkerCallback, a2 + 232, a2 + 3040);
          if ( result >= 0 )
            result = 0;
          if ( result >= 0 )
          {
            if ( a1 )
            {
              *(_QWORD *)(a2 + 72) = a1;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
            }
            return 0;
          }
        }
      }
    }
  }
  return result;
}
