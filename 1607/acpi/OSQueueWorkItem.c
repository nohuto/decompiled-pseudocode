/*
 * XREFs of OSQueueWorkItem @ 0x1C00273F4
 * Callers:
 *     AsyncEvalObject @ 0x1C0001AD0 (AsyncEvalObject.c)
 *     InsertReadyQueue @ 0x1C0002D90 (InsertReadyQueue.c)
 *     RestartContext @ 0x1C001DA80 (RestartContext.c)
 *     AMLIResumeInterpreter @ 0x1C0059888 (AMLIResumeInterpreter.c)
 * Callees:
 *     <none>
 */

LONG __fastcall OSQueueWorkItem(_QWORD *a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
  v3 = (_QWORD *)qword_1C00737C8;
  if ( *(__int64 **)qword_1C00737C8 != &ACPIWorkQueue )
    __fastfail(3u);
  *a1 = &ACPIWorkQueue;
  a1[1] = v3;
  *v3 = a1;
  qword_1C00737C8 = (__int64)a1;
  KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v2);
  return KeSetEvent(&ACPIProcessWorkQueueEvent, 0, 0);
}
