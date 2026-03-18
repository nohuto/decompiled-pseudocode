/*
 * XREFs of CmpInitializeTransactions @ 0x140742FE8
 * Callers:
 *     CmInitSystem1 @ 0x1407450EC (CmInitSystem1.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 */

LIST_ENTRY *CmpInitializeTransactions()
{
  unsigned __int64 v0; // rax
  __int64 v1; // r8
  __int64 v2; // r10
  _QWORD *v3; // rdx
  const char *v4; // rax
  __int64 v5; // rax
  int v6; // r9d
  LIST_ENTRY *result; // rax
  __int64 v8; // rax
  _BYTE v9[2]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v10; // [rsp+22h] [rbp-16h]

  CmpRmListLock.Event.Header.Size = 6;
  qword_1402FD058 = (__int64)&CmpRmListHead;
  CmpRmListHead = (__int64)&CmpRmListHead;
  CmpRmListLock.Event.Header.WaitListHead.Blink = &CmpRmListLock.Event.Header.WaitListHead;
  CmpRmListLock.Event.Header.WaitListHead.Flink = &CmpRmListLock.Event.Header.WaitListHead;
  CmpTransactionListLock.Event.Header.WaitListHead.Blink = &CmpTransactionListLock.Event.Header.WaitListHead;
  CmpTransactionListLock.Event.Header.WaitListHead.Flink = &CmpTransactionListLock.Event.Header.WaitListHead;
  CmpLazyCommitWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpLazyCommitWorker;
  qword_1402FD368 = (__int64)&CmpLazyCommitListHead;
  CmpLazyCommitListHead = (__int64)&CmpLazyCommitListHead;
  CmpRmListLock.Count = 1;
  CmpRmListLock.Owner = 0LL;
  CmpRmListLock.Contention = 0;
  LOWORD(CmpRmListLock.Event.Header.Lock) = 1;
  CmpRmListLock.Event.Header.SignalState = 0;
  CmpTransactionListLock.Count = 1;
  CmpTransactionListLock.Owner = 0LL;
  CmpTransactionListLock.Contention = 0;
  LOWORD(CmpTransactionListLock.Event.Header.Lock) = 1;
  CmpTransactionListLock.Event.Header.Size = 6;
  CmpTransactionListLock.Event.Header.SignalState = 0;
  CmpTransactionInitializingEvent = 0LL;
  CmpLazyCommitWorkItem.Parameter = 0LL;
  CmpLazyCommitWorkItem.List.Flink = 0LL;
  if ( !qword_1402FE030 )
  {
    v0 = __rdtsc();
    v1 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v0) << 32) | (unsigned int)v0) >> 4)) ^ 0xF93LL;
    if ( !v1 )
      v1 = 1LL;
    qword_1402FE030 = v1;
    v2 = (41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x531LL;
    qword_1402FE038 = v2;
    __sidt(v9);
    v3 = v10;
    v4 = (const char *)v10;
    if ( v10 < v10 + 106 )
    {
      do
      {
        _mm_prefetch(v4, 0);
        v4 += 64;
      }
      while ( v4 < (const char *)v10 + 848 );
    }
    v5 = 106LL;
    v6 = 848;
    do
    {
      v1 = __ROR8__(v1 - *v3++, v2);
      v6 -= 8;
      --v5;
    }
    while ( v5 );
    for ( ; v6; --v6 )
    {
      v8 = *(unsigned __int8 *)v3;
      v3 = (_QWORD *)((char *)v3 + 1);
      v1 = __ROR8__(v1 - v8, v2);
    }
    qword_1402FE048 = v1;
    qword_1402FE040 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  *(_QWORD *)&CmpLazyCommitTimer.Header.Lock = 8LL;
  CmpLazyCommitDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)CmpLazyCommitDpcRoutine;
  CmpLazyCommitTimer.Header.WaitListHead.Blink = &CmpLazyCommitTimer.Header.WaitListHead;
  CmpLazyCommitTimer.Header.WaitListHead.Flink = &CmpLazyCommitTimer.Header.WaitListHead;
  qword_1402FD0A8 = (__int64)&CmpDelayFreeRMListHead;
  CmpDelayFreeRMListHead = &CmpDelayFreeRMListHead;
  CmpDelayFreeRMLock.Event.Header.WaitListHead.Blink = &CmpDelayFreeRMLock.Event.Header.WaitListHead;
  CmpDelayFreeRMLock.Event.Header.WaitListHead.Flink = &CmpDelayFreeRMLock.Event.Header.WaitListHead;
  qword_1402FD110 = (__int64)CmpDelayFreeRMWorker;
  *(_QWORD *)&CmpDelayFreeRMTimer.Header.Lock = 8LL;
  CmpDelayFreeRMDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)CmpDelayFreeRMDpcRoutine;
  result = &CmpDelayFreeRMTimer.Header.WaitListHead;
  CmpLazyCommitDpc.DeferredContext = 0LL;
  CmpLazyCommitDpc.DpcData = 0LL;
  CmpLazyCommitDpc.ProcessorHistory = 0LL;
  CmpLazyCommitTimer.DueTime.QuadPart = 0LL;
  *(_QWORD *)&CmpLazyCommitTimer.Processor = 0LL;
  CmpDelayFreeRMLock.Owner = 0LL;
  CmpDelayFreeRMLock.Contention = 0;
  CmpDelayFreeRMLock.Event.Header.SignalState = 0;
  qword_1402FD118 = 0LL;
  CmpDelayFreeRMWorkItem = 0LL;
  CmpDelayFreeRMDpc.DeferredContext = 0LL;
  CmpDelayFreeRMDpc.DpcData = 0LL;
  CmpDelayFreeRMDpc.ProcessorHistory = 0LL;
  CmpDelayFreeRMTimer.DueTime.QuadPart = 0LL;
  *(_QWORD *)&CmpDelayFreeRMTimer.Processor = 0LL;
  CmpDelayFreeRMTimer.Header.WaitListHead.Blink = &CmpDelayFreeRMTimer.Header.WaitListHead;
  CmpDelayFreeRMTimer.Header.WaitListHead.Flink = &CmpDelayFreeRMTimer.Header.WaitListHead;
  CmpLazyCommitDpc.TargetInfoAsUlong = 275;
  CmpDelayFreeRMLock.Count = 1;
  LOWORD(CmpDelayFreeRMLock.Event.Header.Lock) = 1;
  CmpDelayFreeRMLock.Event.Header.Size = 6;
  CmpDelayFreeRMDpc.TargetInfoAsUlong = 275;
  return result;
}
