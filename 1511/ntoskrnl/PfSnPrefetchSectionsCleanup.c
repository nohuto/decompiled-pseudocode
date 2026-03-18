/*
 * XREFs of PfSnPrefetchSectionsCleanup @ 0x1404DF5E4
 * Callers:
 *     PfSnPrefetchSections @ 0x1404DF6C8 (PfSnPrefetchSections.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     KeQueryPriorityThread @ 0x140102090 (KeQueryPriorityThread.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

void __fastcall PfSnPrefetchSectionsCleanup(unsigned __int64 a1, int a2, unsigned int a3, unsigned __int64 a4)
{
  struct _WORK_QUEUE_ITEM *v4; // r14
  __int64 v8; // r15
  KPRIORITY PriorityThread; // edi
  _QWORD *p_WorkerRoutine; // rbx
  struct _EX_RUNDOWN_REF RunRef[6]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(struct _WORK_QUEUE_ITEM **)(a1 + 88);
  v8 = a3;
  memset(v4, 0, 48LL * a3);
  memset(RunRef, 0, sizeof(RunRef));
  RunRef[0].Count = 0LL;
  RunRef[1].Count = a1;
  LODWORD(RunRef[4].Count) = a2;
  RunRef[2].Count = a4;
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  if ( a3 )
  {
    p_WorkerRoutine = &v4->WorkerRoutine;
    do
    {
      p_WorkerRoutine[2] = RunRef;
      *(p_WorkerRoutine - 2) = 0LL;
      *p_WorkerRoutine = PfSnSectionInfoCleanupWorkItem;
      p_WorkerRoutine[1] = v4;
      ExAcquireRundownProtection(RunRef);
      ExQueueWorkItem(v4, (WORK_QUEUE_TYPE)(PriorityThread + 32));
      v4 = (struct _WORK_QUEUE_ITEM *)((char *)v4 + 48);
      p_WorkerRoutine += 6;
      --v8;
    }
    while ( v8 );
  }
  ExWaitForRundownProtectionRelease(RunRef);
}
