/*
 * XREFs of ndisPeriodicReceivesAddCpu @ 0x1C004A2FC
 * Callers:
 *     ndisCpuHotAddHandler @ 0x1C00CD610 (ndisCpuHotAddHandler.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C001BB70 (NdisInitializeTimer.c)
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     ndisCreateThread @ 0x1C00A72C0 (ndisCreateThread.c)
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
  NdisInitializeTimer((PNDIS_TIMER)((char *)qword_1C0084D70 + v2), (PNDIS_TIMER_FUNCTION)ndisPeriodicReceivesTimer, 0LL);
  KeSetTargetProcessorDpcEx((PKDPC)((char *)qword_1C0084D70 + v2 + 64), &ProcNumber);
  KeWaitForSingleObject(&ndisPeriodicReceivesMutex, Executive, 0, 0, 0LL);
  if ( byte_1C0084D41 )
  {
    Thread = ndisCreateThread(
               ndisReceiveWorkerThread,
               (unsigned int)v1,
               (unsigned int)dword_1C0084D48,
               (char *)P + 8 * v1);
    if ( Thread < 0 && (unsigned __int8)byte_1C0085313 >= 2u )
      WPP_SF_dd(0x51u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, v1, Thread);
  }
  return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}
