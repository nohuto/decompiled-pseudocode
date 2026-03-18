/*
 * XREFs of WheapDeferredRecoveryServiceDpcRoutine @ 0x14026743C
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall WheapDeferredRecoveryServiceDpcRoutine(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rtt
  __int64 v4; // rtt
  char v5; // al
  unsigned __int8 CurrentIrql; // di
  signed __int32 v7; // eax
  bool v8; // cc
  __int64 result; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = WheaDrsList;
  v3 = WheaDrsList;
  if ( v3 != _InterlockedCompareExchange64(&WheaDrsList, *(_QWORD *)WheaDrsList, WheaDrsList) )
  {
    do
    {
      _mm_pause();
      v2 = WheaDrsList;
      v4 = WheaDrsList;
    }
    while ( v4 != _InterlockedCompareExchange64(&WheaDrsList, *(_QWORD *)WheaDrsList, WheaDrsList) );
  }
  v5 = *(_BYTE *)(v2 + 24);
  if ( v5 == 2 )
  {
    _InterlockedExchange((volatile __int32 *)(v2 + 8), 0);
    (*(void (__fastcall **)(__int64, _QWORD))(v2 + 16))(v2, *(_QWORD *)(v2 + 32));
  }
  else if ( !v5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&WheapDispatchPtr.Dpc.DpcData);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&WheapDispatchPtr.Dpc.DpcData, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&WheapDispatchPtr.Dpc.DpcData);
    }
    *(_QWORD *)v2 = WheaPassiveDrsList;
    WheaPassiveDrsList = v2;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&WheapDispatchPtr.Dpc.DpcData, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)&WheapDispatchPtr.Dpc.DpcData, 0LL);
    __writecr8(CurrentIrql);
    if ( _InterlockedIncrement(&WheaPassiveDrsItemsToProcess) == 1 )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&WheapDispatchPtr.Dpc.DeferredRoutine, CriticalWorkQueue);
  }
  v7 = _InterlockedExchangeAdd(&WheaDrsItemsToProcess, 0xFFFFFFFF);
  v8 = v7 <= 1;
  result = (unsigned int)(v7 - 1);
  if ( !v8 )
    return KiInsertQueueDpc(a1, 0LL, 0LL, 0LL, 0);
  return result;
}
