/*
 * XREFs of VidSchiWorkerThread @ 0x1C0044840
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiRun_PriorityTable @ 0x1C00448C4 (VidSchiRun_PriorityTable.c)
 *     VidSchiSetSchedulerStatus @ 0x1C0044944 (VidSchiSetSchedulerStatus.c)
 *     VidSchiAcceptDriverCallback @ 0x1C004497C (VidSchiAcceptDriverCallback.c)
 */

void __fastcall __noreturn VidSchiWorkerThread(_QWORD *StartContext)
{
  StartContext[16] = KeGetCurrentThread();
  KeSetActualBasePriorityThread(KeGetCurrentThread(), 15LL);
  *((_DWORD *)StartContext + 42) = 15;
  VidSchiAcceptDriverCallback(StartContext);
  StartContext[172] = MEMORY[0xFFFFF78000000320];
  KeWaitForSingleObject(StartContext + 169, Executive, 0, 0, 0LL);
  VidSchiSetSchedulerStatus(StartContext, 1LL, 1LL);
  while ( 1 )
    VidSchiRun_PriorityTable((struct _VIDSCH_GLOBAL *)StartContext);
}
