/*
 * XREFs of DriverCleanup @ 0x1C0052A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     McGenEventUnregister @ 0x1C0020DD4 (McGenEventUnregister.c)
 *     WppCleanupKm @ 0x1C0052A98 (WppCleanupKm.c)
 */

void __fastcall DriverCleanup(__int64 a1)
{
  __int64 v1; // rax
  PREGHANDLE v2; // rcx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 944))(WdfDriverGlobals, a1);
  WppCleanupKm(v1);
  McGenEventUnregister(v2);
  if ( BYTE4(WPP_MAIN_CB.Dpc.DpcListEntry.Next[3].Next) )
  {
    PcwUnregister((PPCW_REGISTRATION)WPP_MAIN_CB.Dpc.ProcessorHistory);
    PcwUnregister((PPCW_REGISTRATION)WPP_MAIN_CB.Dpc.DeferredContext);
    PcwUnregister((PPCW_REGISTRATION)WPP_MAIN_CB.Dpc.DeferredRoutine);
  }
}
