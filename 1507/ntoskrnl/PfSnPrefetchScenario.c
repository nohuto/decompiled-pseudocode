/*
 * XREFs of PfSnPrefetchScenario @ 0x1404F502C
 * Callers:
 *     PfSnBeginScenario @ 0x1404FD948 (PfSnBeginScenario.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     KeQueryPriorityThread @ 0x1400D5D70 (KeQueryPriorityThread.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PfSnAsyncContextInitialize @ 0x1404F5D18 (PfSnAsyncContextInitialize.c)
 */

__int64 __fastcall PfSnPrefetchScenario(void *a1, unsigned __int8 a2)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v5; // rdi
  unsigned __int64 v6; // rtt
  KPRIORITY PriorityThread; // eax
  unsigned int v8; // edi
  unsigned __int64 v9; // rax
  struct _EX_RUNDOWN_REF RunRef; // [rsp+30h] [rbp+8h] BYREF

  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xF8uLL, 0x61506343u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741670;
LABEL_6:
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
    return v8;
  }
  PfSnAsyncContextInitialize(PoolWithTag, a1, &RunRef, (a2 >> 4) & 1);
  a1 = 0LL;
  _m_prefetchw(&RunRef);
  v6 = RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v6 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&RunRef,
               (RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfAcquireRundownProtection(&RunRef);
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  ExQueueWorkItem(v5, (WORK_QUEUE_TYPE)(PriorityThread + 32));
  v8 = 0;
  v9 = _InterlockedCompareExchange64((volatile signed __int64 *)&RunRef, 1LL, 0LL);
  if ( v9 >= 2 )
  {
    ExfWaitForRundownProtectionRelease((volatile signed __int64 *)&RunRef, v9);
    goto LABEL_6;
  }
  return v8;
}
