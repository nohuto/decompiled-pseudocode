/*
 * XREFs of EmpQueueRuleUpdateState @ 0x1401350F4
 * Callers:
 *     EmpProviderDeregisterEntry @ 0x1401AC1E4 (EmpProviderDeregisterEntry.c)
 *     EmpProviderRegister @ 0x140528320 (EmpProviderRegister.c)
 *     EmpClientRuleRegisterNotification @ 0x1405F293C (EmpClientRuleRegisterNotification.c)
 *     EmProviderDeregister @ 0x1405F2BB0 (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x1405F2E04 (EmProviderRegisterEntry.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

void __fastcall EmpQueueRuleUpdateState(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // rbx
  _QWORD *i; // rax
  _QWORD *PoolWithTag; // rax

  v4 = KeAbPreAcquire((ULONG_PTR)&EmpEvaluationQueueLock, 0LL, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&EmpEvaluationQueueLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&EmpEvaluationQueueLock, v4, (ULONG_PTR)&EmpEvaluationQueueLock);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  for ( i = (_QWORD *)EmpRuleUpdateQueue; i; i = (_QWORD *)*i )
  {
    if ( *(i - 1) == a1 )
    {
      if ( i != (_QWORD *)8 )
      {
        i[1] = 0LL;
        goto LABEL_12;
      }
      break;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x75714D45u);
  if ( PoolWithTag )
  {
    *PoolWithTag = a1;
    PoolWithTag[2] = a2;
    PoolWithTag[1] = EmpRuleUpdateQueue;
    EmpRuleUpdateQueue = (__int64)(PoolWithTag + 1);
    if ( !EmpWorkerBusy )
    {
      _InterlockedExchange(&EmpWorkerBusy, 1);
      ExQueueWorkItem(&EmpRuleUpdateWorker, DelayedWorkQueue);
    }
  }
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock);
  KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
}
