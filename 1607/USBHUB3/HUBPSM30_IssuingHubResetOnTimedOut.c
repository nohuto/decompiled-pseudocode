/*
 * XREFs of HUBPSM30_IssuingHubResetOnTimedOut @ 0x1C000EBA0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReleaseInterruptReference @ 0x1C000CE38 (HUBMUX_ReleaseInterruptReference.c)
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x1C000CF94 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPSM30_IssuingHubResetOnTimedOut(__int64 a1)
{
  __int64 *v1; // rbx

  v1 = *(__int64 **)(a1 + 960);
  (*(void (__fastcall **)(__int64, __int64))(v1[166] + 1456))(v1[166], 4046LL);
  HUBMUX_CheckAndQueueIfResetHubIsEnabled(*v1);
  HUBMUX_ReleaseInterruptReference((volatile signed __int32 *)v1);
  return 3013LL;
}
