/*
 * XREFs of EmpQueueRuleUpdateState @ 0x14016183C
 * Callers:
 *     EmpProviderDeregisterEntry @ 0x1401E1D24 (EmpProviderDeregisterEntry.c)
 *     EmpProviderRegister @ 0x140597C74 (EmpProviderRegister.c)
 *     EmpClientRuleRegisterNotification @ 0x14066B668 (EmpClientRuleRegisterNotification.c)
 *     EmProviderDeregister @ 0x14066B8DC (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x14066BB30 (EmProviderRegisterEntry.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void __fastcall EmpQueueRuleUpdateState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rbx
  _QWORD *i; // rax
  _QWORD *PoolWithTag; // rax

  v6 = KeAbPreAcquire((ULONG_PTR)&EmpEvaluationQueueLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&EmpEvaluationQueueLock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&EmpEvaluationQueueLock, v6, (ULONG_PTR)&EmpEvaluationQueueLock, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
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
