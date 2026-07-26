/*
 * XREFs of ndisPeriodicReceivesAddCpu @ 0x1C004AB9C
 * Callers:
 *     ndisCpuHotAddHandler @ 0x1C00C6A30 (ndisCpuHotAddHandler.c)
 * Callees:
 *     NdisInitializeTimer @ 0x1C0016F70 (NdisInitializeTimer.c)
 *     WPP_SF_dd @ 0x1C0040948 (WPP_SF_dd_ea_1C0040948.c)
 *     ndisCreateThread @ 0x1C00A0EF8 (ndisCreateThread.c)
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
  NdisInitializeTimer((PNDIS_TIMER)((char *)qword_1C0082D70 + v2), (PNDIS_TIMER_FUNCTION)ndisPeriodicReceivesTimer, 0LL);
  KeSetTargetProcessorDpcEx((PKDPC)((char *)qword_1C0082D70 + v2 + 64), &ProcNumber);
  KeWaitForSingleObject(&ndisPeriodicReceivesMutex, Executive, 0, 0, 0LL);
  if ( byte_1C0082D41 )
  {
    Thread = ndisCreateThread(
               ndisReceiveWorkerThread,
               (unsigned int)v1,
               (unsigned int)dword_1C0082D48,
               (char *)P + 8 * v1);
    if ( Thread < 0 && (unsigned __int8)byte_1C0083713 >= 2u )
      WPP_SF_dd(0x51u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, v1, Thread);
  }
  return KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}
