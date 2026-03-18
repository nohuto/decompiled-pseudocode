/*
 * XREFs of OSQueueWorkItem @ 0x1C0020B48
 * Callers:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     InsertReadyQueue @ 0x1C0003250 (InsertReadyQueue.c)
 *     RestartContext @ 0x1C0006440 (RestartContext.c)
 *     AMLIResumeInterpreter @ 0x1C0042224 (AMLIResumeInterpreter.c)
 * Callees:
 *     <none>
 */

LONG __fastcall OSQueueWorkItem(__int64 *a1)
{
  KIRQL v2; // al
  __int64 **v3; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
  v3 = (__int64 **)qword_1C0059448;
  *a1 = (__int64)&ACPIWorkQueue;
  a1[1] = (__int64)v3;
  if ( *v3 != &ACPIWorkQueue )
    __fastfail(3u);
  *v3 = a1;
  qword_1C0059448 = (__int64)a1;
  KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v2);
  return KeSetEvent(&ACPIProcessWorkQueueEvent, 0, 0);
}
