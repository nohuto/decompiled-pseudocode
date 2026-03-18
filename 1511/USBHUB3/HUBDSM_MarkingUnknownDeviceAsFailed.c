/*
 * XREFs of HUBDSM_MarkingUnknownDeviceAsFailed @ 0x1C001A540
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_CreateWerReport @ 0x1C0027E8C (HUBMISC_CreateWerReport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_MarkingUnknownDeviceAsFailed(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax

  v1 = *(_QWORD **)(a1 + 960);
  HUBMISC_CreateWerReport(*v1, 2LL);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v1[2]);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 696))(WdfDriverGlobals, v2, 1LL);
  return 4077LL;
}
