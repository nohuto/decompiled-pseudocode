/*
 * XREFs of PfSnPrefetchSectionsCleanup @ 0x140507260
 * Callers:
 *     PfSnPrefetchSections @ 0x140506F14 (PfSnPrefetchSections.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074D34 (ExWaitForRundownProtectionRelease.c)
 *     KeQueryPriorityThread @ 0x1400C73C0 (KeQueryPriorityThread.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

void __fastcall PfSnPrefetchSectionsCleanup(unsigned __int64 a1, int a2, unsigned int a3, unsigned __int64 a4)
{
  struct _WORK_QUEUE_ITEM *v4; // r14
  __int64 v8; // r15
  KPRIORITY PriorityThread; // edi
  void (__fastcall **p_WorkerRoutine)(void *); // rbx
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
      p_WorkerRoutine[2] = (void (__fastcall *)(void *))RunRef;
      *(p_WorkerRoutine - 2) = 0LL;
      *p_WorkerRoutine = (void (__fastcall *)(void *))PfSnSectionInfoCleanupWorkItem;
      p_WorkerRoutine[1] = (void (__fastcall *)(void *))v4;
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
