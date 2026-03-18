/*
 * XREFs of HUBMISC_BugcheckSystemOnBootDeviceEnumerationFailure @ 0x1C002A5FC
 * Callers:
 *     HUBDSM_BugcheckingSystemOnBootDeviceEnumerationFailure @ 0x1C00186D0 (HUBDSM_BugcheckingSystemOnBootDeviceEnumerationFailure.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn HUBMISC_BugcheckSystemOnBootDeviceEnumerationFailure(__int64 a1)
{
  __int64 v2; // rax
  ULONG_PTR v3; // rax

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(WdfDriverGlobals, v2);
  KeBugCheckEx(0x144u, 2uLL, v3, ((*(_DWORD *)(a1 + 1616) & 2) != 0) + 1LL, 0LL);
}
