/*
 * XREFs of PfSnPrefetchSectionsCleanup @ 0x1404F58F0
 * Callers:
 *     PfSnPrefetchSections @ 0x140420658 (PfSnPrefetchSections.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KeQueryPriorityThread @ 0x1400D5D70 (KeQueryPriorityThread.c)
 *     memset @ 0x140195A80 (memset.c)
 */

int __fastcall PfSnPrefetchSectionsCleanup(unsigned __int64 a1, int a2, unsigned int a3, unsigned __int64 a4)
{
  struct _WORK_QUEUE_ITEM *v4; // r15
  __int64 v8; // r12
  KPRIORITY PriorityThread; // edi
  _QWORD *p_WorkerRoutine; // rbx
  unsigned __int64 v12; // rtt
  unsigned __int64 v13; // rax
  struct _EX_RUNDOWN_REF RunRef[6]; // [rsp+20h] [rbp-30h] BYREF

  v4 = *(struct _WORK_QUEUE_ITEM **)(a1 + 200);
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
      _m_prefetchw(RunRef);
      v12 = RunRef[0].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v12 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)RunRef,
                    (RunRef[0].Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                    RunRef[0].Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfAcquireRundownProtection(RunRef);
      ExQueueWorkItem(v4, (WORK_QUEUE_TYPE)(PriorityThread + 32));
      v4 = (struct _WORK_QUEUE_ITEM *)((char *)v4 + 48);
      p_WorkerRoutine += 6;
      --v8;
    }
    while ( v8 );
  }
  v13 = _InterlockedCompareExchange64((volatile signed __int64 *)RunRef, 1LL, 0LL);
  if ( v13 >= 2 )
    LODWORD(v13) = ExfWaitForRundownProtectionRelease((volatile signed __int64 *)RunRef, v13);
  return v13;
}
