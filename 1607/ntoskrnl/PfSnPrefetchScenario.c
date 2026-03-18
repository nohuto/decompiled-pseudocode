/*
 * XREFs of PfSnPrefetchScenario @ 0x1403E5094
 * Callers:
 *     PfSnBeginScenario @ 0x1403E6ED0 (PfSnBeginScenario.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074D34 (ExWaitForRundownProtectionRelease.c)
 *     KeQueryPriorityThread @ 0x1400C73C0 (KeQueryPriorityThread.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PfSnAsyncContextInitialize @ 0x1403E5134 (PfSnAsyncContextInitialize.c)
 */

__int64 __fastcall PfSnPrefetchScenario(void *a1, unsigned __int8 a2)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v5; // rdi
  KPRIORITY PriorityThread; // eax
  unsigned int v7; // edi
  struct _EX_RUNDOWN_REF RunRef; // [rsp+30h] [rbp+8h] BYREF

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xF8uLL, 0x61506343u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    PfSnAsyncContextInitialize(PoolWithTag, a1, &RunRef, (a2 >> 4) & 1);
    a1 = 0LL;
    ExAcquireRundownProtection(&RunRef);
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    ExQueueWorkItem(v5, (WORK_QUEUE_TYPE)(PriorityThread + 32));
    v7 = 0;
    ExWaitForRundownProtectionRelease(&RunRef);
  }
  else
  {
    v7 = -1073741670;
  }
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
  return v7;
}
