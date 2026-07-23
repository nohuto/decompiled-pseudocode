/*
 * XREFs of EmpQueueRuleUpdateState @ 0x14013D1CC
 * Callers:
 *     EmpProviderDeregisterEntry @ 0x1401B7F74 (EmpProviderDeregisterEntry.c)
 *     EmpProviderRegister @ 0x14055474C (EmpProviderRegister.c)
 *     EmpClientRuleRegisterNotification @ 0x14061CC50 (EmpClientRuleRegisterNotification.c)
 *     EmProviderDeregister @ 0x14061CEC4 (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x14061D118 (EmProviderRegisterEntry.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 __fastcall EmpQueueRuleUpdateState(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rax
  signed __int8 v5; // cf
  _BYTE *v6; // rbx
  _QWORD *i; // rax
  _QWORD *PoolWithTag; // rax

  v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&EmpEvaluationQueueLock, 0LL, 0);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&EmpEvaluationQueueLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&EmpEvaluationQueueLock, v4, (ULONG_PTR)&EmpEvaluationQueueLock);
  if ( v6 )
    v6[26] |= 1u;
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
  return KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
}
