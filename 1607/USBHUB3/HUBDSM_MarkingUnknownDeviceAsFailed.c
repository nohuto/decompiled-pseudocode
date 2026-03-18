/*
 * XREFs of HUBDSM_MarkingUnknownDeviceAsFailed @ 0x1C001A5B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_CreateWerReport @ 0x1C0027EF0 (HUBMISC_CreateWerReport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_MarkingUnknownDeviceAsFailed(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 960);
  HUBMISC_CreateWerReport(*(_QWORD *)v1, 2LL, *(unsigned int *)(v1 + 2416));
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(v1 + 16));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 696))(WdfDriverGlobals, v2, 1LL);
  return 4077LL;
}
