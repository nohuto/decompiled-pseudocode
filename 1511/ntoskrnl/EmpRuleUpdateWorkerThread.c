/*
 * XREFs of EmpRuleUpdateWorkerThread @ 0x14013E824
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     EmpUpdateRuleState @ 0x1400995F8 (EmpUpdateRuleState.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void EmpRuleUpdateWorkerThread()
{
  __int64 v0; // rax
  signed __int8 v1; // cf
  __int64 v2; // rbx
  __int64 *i; // rsi
  __int64 *v4; // r14
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rsi

  v0 = KeAbPreAcquire((ULONG_PTR)&EmpEvaluationQueueLock, 0LL, 0LL);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&EmpEvaluationQueueLock, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx(&EmpEvaluationQueueLock, v0, (ULONG_PTR)&EmpEvaluationQueueLock);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  for ( i = (__int64 *)EmpRuleUpdateQueue; EmpRuleUpdateQueue; i = (__int64 *)EmpRuleUpdateQueue )
  {
    EmpRuleUpdateQueue = *i;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock);
    KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
    v4 = i - 1;
    v5 = KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0LL);
    v1 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
    v6 = v5;
    if ( v1 )
      ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v5, (ULONG_PTR)&EmpDatabaseLock);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    EmpUpdateRuleState(*v4);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
    KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
    ExFreePoolWithTag(v4, 0x75714D45u);
    v7 = KeAbPreAcquire((ULONG_PTR)&EmpEvaluationQueueLock, 0LL, 0LL);
    v1 = _interlockedbittestandset64((volatile signed __int32 *)&EmpEvaluationQueueLock, 0LL);
    v8 = v7;
    if ( v1 )
      ExfAcquirePushLockExclusiveEx(&EmpEvaluationQueueLock, v7, (ULONG_PTR)&EmpEvaluationQueueLock);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock);
  KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
  _InterlockedExchange(&EmpWorkerBusy, 0);
}
