/*
 * XREFs of HUBFDO_BugcheckSystemOnBootHubFailure @ 0x1C000B830
 * Callers:
 *     HUBHSM_BugcheckingSystemOnExcessiveResetsForHubInBootPath @ 0x1C00069C0 (HUBHSM_BugcheckingSystemOnExcessiveResetsForHubInBootPath.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn HUBFDO_BugcheckSystemOnBootHubFailure(__int64 a1)
{
  __int64 v1; // rax
  ULONG_PTR v2; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(WdfDriverGlobals, v1);
  KeBugCheckEx(0x144u, 2uLL, v2, 2uLL, 0LL);
}
