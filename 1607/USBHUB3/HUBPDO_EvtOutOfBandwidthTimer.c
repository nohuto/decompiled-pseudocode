/*
 * XREFs of HUBPDO_EvtOutOfBandwidthTimer @ 0x1C00155B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 *     WMI_FireNotification @ 0x1C00715BC (WMI_FireNotification.c)
 */

__int64 __fastcall HUBPDO_EvtOutOfBandwidthTimer(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2568))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C0058200);
  return WMI_FireNotification(*(_QWORD *)v2, *(unsigned __int16 *)(v2 + 200), 1LL);
}
