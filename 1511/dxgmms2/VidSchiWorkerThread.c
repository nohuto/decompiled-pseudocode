/*
 * XREFs of VidSchiWorkerThread @ 0x1C006A780
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSetSchedulerStatus @ 0x1C0061900 (VidSchiSetSchedulerStatus.c)
 *     VidSchiRun_PriorityTable @ 0x1C006A810 (VidSchiRun_PriorityTable.c)
 *     VidSchiAcceptDriverCallback @ 0x1C006AAFC (VidSchiAcceptDriverCallback.c)
 */

void __fastcall __noreturn VidSchiWorkerThread(_QWORD *StartContext)
{
  StartContext[16] = KeGetCurrentThread();
  KeSetActualBasePriorityThread(KeGetCurrentThread(), 15LL);
  *((_DWORD *)StartContext + 45) = 15;
  VidSchiAcceptDriverCallback(StartContext);
  StartContext[173] = MEMORY[0xFFFFF78000000320];
  KeWaitForSingleObject(StartContext + 170, Executive, 0, 0, 0LL);
  VidSchiSetSchedulerStatus((__int64)StartContext, 1, 1);
  while ( 1 )
    VidSchiRun_PriorityTable((struct _VIDSCH_GLOBAL *)StartContext);
}
