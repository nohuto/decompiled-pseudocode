/*
 * XREFs of ?RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001ED9C
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001D37C (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpPowerBoostContextAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001EE84 (-RmpPowerBoostContextAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall RmpEnforcerContextAllocateState(struct ModernResourceEnforcer *a1, void **a2)
{
  NTSTATUS result; // eax

  result = NtCreateIoCompletion(a2 + 5, 0x1F0003u, 0LL, 1u);
  if ( result >= 0 )
  {
    result = RmpPowerBoostContextAllocateState((struct _RM_SERVICE_GLOBALS *)a2);
    if ( result >= 0 )
    {
      result = TpAllocTimer(a2 + 24, RmpQoSWatchdogCallback, a2 + 22, 0LL);
      if ( result >= 0 )
        result = 0;
      if ( result >= 0 )
      {
        result = TpAllocTimer(a2 + 11, RmpGpuMonitorTimerCallback, a2, 0LL);
        if ( result >= 0 )
          result = 0;
        if ( result >= 0 )
        {
          result = TpAllocWork(a2 + 27, RmpOfferLazyDecommitWorkerCallback, a2 + 27, a2 + 153);
          if ( result >= 0 )
            result = 0;
          if ( result >= 0 )
          {
            if ( a1 )
            {
              a2[7] = a1;
              (*(void (__fastcall **)(struct ModernResourceEnforcer *))(*(_QWORD *)a1 + 8LL))(a1);
            }
            return 0;
          }
        }
      }
    }
  }
  return result;
}
