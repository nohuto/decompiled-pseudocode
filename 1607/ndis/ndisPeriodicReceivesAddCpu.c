/*
 * XREFs of ndisPeriodicReceivesAddCpu @ 0x1C004F5B8
 * Callers:
 *     ndisCpuHotAddHandler @ 0x1C00CC4D0 (ndisCpuHotAddHandler.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C001B560 (NdisInitializeTimer.c)
 *     WPP_SF_dd @ 0x1C0042EFC (WPP_SF_dd_ea_1C0042EFC.c)
 *     ndisCreateThread @ 0x1C00A86D4 (ndisCreateThread.c)
 */

LONG __fastcall ndisPeriodicReceivesAddCpu(ULONG a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  int Thread; // eax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1;
  ProcNumber = 0;
  KeGetProcessorNumberFromIndex(a1, &ProcNumber);
  v2 = (unsigned __int64)(unsigned int)v1 << 7;
  NdisInitializeTimer(
    (PNDIS_TIMER)((char *)WPP_MAIN_CB.Dpc.DpcListEntry.Next + v2),
    (PNDIS_TIMER_FUNCTION)ndisPeriodicReceivesTimer,
    0LL);
  KeSetTargetProcessorDpcEx((PKDPC)((char *)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[8] + v2), &ProcNumber);
  KeWaitForSingleObject(&ndisPeriodicReceivesMutex, Executive, 0, 0, 0LL);
  if ( HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
  {
    Thread = ndisCreateThread(
               ndisReceiveWorkerThread,
               (unsigned int)v1,
               LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink),
               (char *)WPP_MAIN_CB.Dpc.DeferredContext + 8 * v1);
    if ( Thread < 0 && (unsigned __int8)byte_1C00895D3 >= 2u )
      WPP_SF_dd(0x51u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, v1, Thread);
  }
  return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}
