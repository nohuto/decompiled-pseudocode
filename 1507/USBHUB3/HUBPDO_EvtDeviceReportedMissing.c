/*
 * XREFs of HUBPDO_EvtDeviceReportedMissing @ 0x1C0067ED0
 * Callers:
 *     <none>
 * Callees:
 *     HUBSM_AddDsmEvent @ 0x1C00083F0 (HUBSM_AddDsmEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceReportedMissing(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00570C0);
  return HUBSM_AddDsmEvent(*(_QWORD *)(v1 + 24), 4083LL);
}
