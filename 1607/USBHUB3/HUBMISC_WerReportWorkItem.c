/*
 * XREFs of HUBMISC_WerReportWorkItem @ 0x1C006B0B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_CreateWerReport @ 0x1C0027EF0 (HUBMISC_CreateWerReport.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMISC_WerReportWorkItem(__int64 a1)
{
  __int64 v2; // rax

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0058110);
  HUBMISC_CreateWerReport(*(_QWORD *)v2, *(_DWORD *)(v2 + 8), *(_DWORD *)(v2 + 12));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
}
