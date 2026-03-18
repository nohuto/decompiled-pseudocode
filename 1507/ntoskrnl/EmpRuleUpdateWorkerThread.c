/*
 * XREFs of EmpRuleUpdateWorkerThread @ 0x14016C58C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     EmpUpdateRuleState @ 0x1400CFA74 (EmpUpdateRuleState.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall EmpRuleUpdateWorkerThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r9
  signed __int8 v6; // cf
  __int64 v7; // rbx
  __int64 *i; // rsi
  __int64 *v9; // r14
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rsi

  v4 = KeAbPreAcquire((ULONG_PTR)&EmpEvaluationQueueLock, 0LL, 0LL, a4);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&EmpEvaluationQueueLock, 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&EmpEvaluationQueueLock, v4, (ULONG_PTR)&EmpEvaluationQueueLock, v5);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  for ( i = (__int64 *)EmpRuleUpdateQueue; EmpRuleUpdateQueue; i = (__int64 *)EmpRuleUpdateQueue )
  {
    EmpRuleUpdateQueue = *i;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock);
    KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
    v9 = i - 1;
    v11 = KeAbPreAcquire((ULONG_PTR)&EmpDatabaseLock, 0LL, 0LL, v10);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
    v13 = v11;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v11, (ULONG_PTR)&EmpDatabaseLock, v12);
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
    EmpUpdateRuleState(*v9);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
    KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
    ExFreePoolWithTag(v9, 0x75714D45u);
    v15 = KeAbPreAcquire((ULONG_PTR)&EmpEvaluationQueueLock, 0LL, 0LL, v14);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&EmpEvaluationQueueLock, 0LL);
    v17 = v15;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&EmpEvaluationQueueLock, v15, (ULONG_PTR)&EmpEvaluationQueueLock, v16);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock);
  KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
  _InterlockedExchange(&EmpWorkerBusy, 0);
}
