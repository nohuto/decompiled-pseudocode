/*
 * XREFs of EmpRuleUpdateWorkerThread @ 0x140146C30
 * Callers:
 *     <none>
 * Callees:
 *     EmpUpdateRuleState @ 0x140009078 (EmpUpdateRuleState.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

unsigned __int64 EmpRuleUpdateWorkerThread()
{
  _BYTE *v0; // rax
  signed __int8 v1; // cf
  _BYTE *v2; // rbx
  __int64 *i; // rsi
  __int64 *v4; // r14
  _BYTE *v5; // rax
  _BYTE *v6; // rsi
  _BYTE *v7; // rax
  _BYTE *v8; // rsi
  unsigned __int64 result; // rax

  v0 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&EmpEvaluationQueueLock, 0LL, 0);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&EmpEvaluationQueueLock, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx(&EmpEvaluationQueueLock, v0, (ULONG_PTR)&EmpEvaluationQueueLock);
  if ( v2 )
    v2[26] |= 1u;
  for ( i = (__int64 *)EmpRuleUpdateQueue; EmpRuleUpdateQueue; i = (__int64 *)EmpRuleUpdateQueue )
  {
    EmpRuleUpdateQueue = *i;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock);
    KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
    v4 = i - 1;
    v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0);
    v1 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
    v6 = v5;
    if ( v1 )
      ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v5, (ULONG_PTR)&EmpDatabaseLock);
    if ( v6 )
      v6[26] |= 1u;
    EmpUpdateRuleState(*v4);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
    KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
    ExFreePoolWithTag(v4, 0x75714D45u);
    v7 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&EmpEvaluationQueueLock, 0LL, 0);
    v1 = _interlockedbittestandset64((volatile signed __int32 *)&EmpEvaluationQueueLock, 0LL);
    v8 = v7;
    if ( v1 )
      ExfAcquirePushLockExclusiveEx(&EmpEvaluationQueueLock, v7, (ULONG_PTR)&EmpEvaluationQueueLock);
    if ( v8 )
      v8[26] |= 1u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock);
  result = KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
  _InterlockedExchange(&EmpWorkerBusy, 0);
  return result;
}
