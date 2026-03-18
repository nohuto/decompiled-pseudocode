/*
 * XREFs of VidSchiWorkerThread @ 0x1C006ABB0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSetSchedulerStatus @ 0x1C00689EC (VidSchiSetSchedulerStatus.c)
 *     VidSchiRun_PriorityTable @ 0x1C006AC40 (VidSchiRun_PriorityTable.c)
 *     VidSchiAcceptDriverCallback @ 0x1C006AF40 (VidSchiAcceptDriverCallback.c)
 */

void __fastcall __noreturn VidSchiWorkerThread(_QWORD *StartContext)
{
  StartContext[17] = KeGetCurrentThread();
  KeSetActualBasePriorityThread(KeGetCurrentThread(), 15LL);
  *((_DWORD *)StartContext + 47) = 15;
  VidSchiAcceptDriverCallback(StartContext);
  StartContext[177] = MEMORY[0xFFFFF78000000320];
  KeWaitForSingleObject(StartContext + 174, Executive, 0, 0, 0LL);
  VidSchiSetSchedulerStatus((__int64)StartContext, 1, 1);
  while ( 1 )
    VidSchiRun_PriorityTable((struct _VIDSCH_GLOBAL *)StartContext);
}
