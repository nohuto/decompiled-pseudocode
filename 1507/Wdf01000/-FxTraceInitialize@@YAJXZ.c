/*
 * XREFs of ?FxTraceInitialize@@YAJXZ @ 0x1C002A8B0
 * Callers:
 *     FxLibraryCommonCommission @ 0x1C002A638 (FxLibraryCommonCommission.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxTraceInitialize()
{
  WPP_GLOBAL_WDF_Control.NextDevice = 0LL;
  WPP_GLOBAL_WDF_Control.DriverObject = (_DRIVER_OBJECT *)&WdfTraceGuid;
  LOWORD(WPP_GLOBAL_WDF_Control.Vpb) = 257;
  WPP_GLOBAL_WDF_Control.CurrentIrp = (_IRP *)L"KmdfTraceGuid";
  WPP_GLOBAL_WDF_Control.Timer = (struct _IO_TIMER *)L" TRACINGFULL TRACINGERROR TRACINGDBGPRINT TRACINGFRAMEWORKS TRACING"
                                                      "API TRACINGAPIERROR TRACINGRESOURCES TRACINGLOCKING TRACINGCONTEXT"
                                                      " TRACINGPOOL TRACINGHANDLE TRACINGPNP TRACINGIO TRACINGIOTARGET TR"
                                                      "ACINGDMA TRACINGREQUEST TRACINGDRIVER TRACINGDEVICE TRACINGUSEROBJ"
                                                      "ECT TRACINGOBJECT TRACINGPNPPOWERSTATES";
  *(_QWORD *)&WPP_GLOBAL_WDF_Control.Type = WppTraceCallbackWdf;
  IoWMIRegistrationControl(&WPP_GLOBAL_WDF_Control, 0x80000001);
  return 0LL;
}
