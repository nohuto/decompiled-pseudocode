/*
 * XREFs of PiProcessStartSystemDevices @ 0x140581188
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400865A0 (PnpDeviceActionWorker.c)
 * Callees:
 *     PnpDiagnosticTrace @ 0x1400AEE00 (PnpDiagnosticTrace.c)
 *     PipProcessDevNodeTree @ 0x1403F30A4 (PipProcessDevNodeTree.c)
 */

__int64 __fastcall PiProcessStartSystemDevices(__int64 a1)
{
  __int64 v2; // rcx
  int v4; // [rsp+50h] [rbp+8h] BYREF
  char v5; // [rsp+54h] [rbp+Ch]

  PnpDiagnosticTrace(&KMPnPEvt_SystemStartPnPEnum_Start, 0, 0LL);
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 312LL) + 40LL);
  v5 = PnPBootDriversInitialized;
  v4 = 3;
  PipProcessDevNodeTree(v2, a1, (__int64)&v4, 0, 0, 0, 0);
  PnpDiagnosticTrace(&KMPnPEvt_SystemStartPnPEnum_Stop, 0, 0LL);
  return 0LL;
}
