/*
 * XREFs of PfSnTraceGetLogEntry @ 0x140079C34
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     PfSnLogPageFaultCommon @ 0x140079800 (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLogSequenceNumber @ 0x140079918 (PfSnCheckLogSequenceNumber.c)
 *     PfSnTraceTimerRoutine @ 0x1401022D0 (PfSnTraceTimerRoutine.c)
 *     PfSnLogStreamDelete @ 0x1404C4900 (PfSnLogStreamDelete.c)
 *     PfSnLogHelper @ 0x1404D6B68 (PfSnLogHelper.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PfSnTraceBufferAllocate @ 0x1400FAED4 (PfSnTraceBufferAllocate.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnTraceGetLogEntry(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v6; // rbp
  int v7; // eax
  unsigned int v8; // esi
  _QWORD *v10; // r14
  KIRQL v11; // al
  _QWORD *v12; // rcx

  if ( (signed __int32)(a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), a2)) > *(_DWORD *)(a1 + 340) )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), -a2);
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 400), 3, 0) )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 368), DelayedWorkQueue);
    return (unsigned int)-1073741431;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 96);
    v7 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), a2);
    v8 = 0;
    while ( v7 > 0 )
    {
      if ( v7 <= *(_DWORD *)(v6 + 20) )
      {
        *a3 = v6 + 16LL * (int)(v7 - a2) + 24;
        return v8;
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), -a2);
      v10 = (_QWORD *)PfSnTraceBufferAllocate();
      if ( !v10 )
      {
        v8 = -1073741670;
        goto LABEL_19;
      }
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
      if ( *(_QWORD *)(a1 + 96) == v6 )
      {
        v12 = *(_QWORD **)(a1 + 112);
        *v10 = a1 + 104;
        v10[1] = v12;
        if ( *v12 != a1 + 104 )
          __fastfail(3u);
        *v12 = v10;
        *(_QWORD *)(a1 + 112) = v10;
        ++*(_DWORD *)(a1 + 120);
        *(_QWORD *)(a1 + 96) = v10;
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 128), v11);
      }
      else
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 128), v11);
        ExFreePoolWithTag(v10, 0);
      }
      v6 = *(_QWORD *)(a1 + 96);
      v7 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), a2);
    }
    v8 = -1073741675;
LABEL_19:
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), -a2);
  }
  return v8;
}
