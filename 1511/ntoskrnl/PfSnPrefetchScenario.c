/*
 * XREFs of PfSnPrefetchScenario @ 0x1404DFA78
 * Callers:
 *     PfSnBeginScenario @ 0x1404D6D78 (PfSnBeginScenario.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     KeQueryPriorityThread @ 0x140102090 (KeQueryPriorityThread.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PfSnAsyncContextInitialize @ 0x1404DFB18 (PfSnAsyncContextInitialize.c)
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
