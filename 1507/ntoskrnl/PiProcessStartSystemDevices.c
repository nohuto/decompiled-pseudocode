/*
 * XREFs of PiProcessStartSystemDevices @ 0x1405C154C
 * Callers:
 *     PnpDeviceActionWorker @ 0x14002604C (PnpDeviceActionWorker.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     PipProcessDevNodeTree @ 0x1404E16BC (PipProcessDevNodeTree.c)
 */

__int64 __fastcall PiProcessStartSystemDevices(__int64 a1)
{
  REGHANDLE v1; // rbx
  __int64 v3; // rcx
  REGHANDLE v4; // rbx
  int v6; // [rsp+50h] [rbp+8h] BYREF
  char v7; // [rsp+54h] [rbp+Ch]

  v1 = PnpEtwHandle;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_SystemStartPnPEnum_Start) )
    EtwWrite(v1, &KMPnPEvt_SystemStartPnPEnum_Start, 0LL, 0, 0LL);
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 312LL) + 40LL);
  v6 = 3;
  v7 = PnPBootDriversInitialized;
  PipProcessDevNodeTree(v3, a1, (__int64)&v6, 0, 0, 0, 0);
  v4 = PnpEtwHandle;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_SystemStartPnPEnum_Stop) )
    EtwWrite(v4, &KMPnPEvt_SystemStartPnPEnum_Stop, 0LL, 0, 0LL);
  return 0LL;
}
