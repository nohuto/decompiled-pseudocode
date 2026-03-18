/*
 * XREFs of HUBFDO_EvtDeviceShutdownPreprocess @ 0x1C000AB20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 *     HUBREG_UxdShutdown @ 0x1C0071FD0 (HUBREG_UxdShutdown.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceShutdownPreprocess(__int64 a1, IRP *a2)
{
  __int64 v3; // rax

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C005B0C0);
  HUBREG_UxdShutdown(v3);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
