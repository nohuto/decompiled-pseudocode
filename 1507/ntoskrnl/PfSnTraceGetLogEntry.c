/*
 * XREFs of PfSnTraceGetLogEntry @ 0x14001A3A8
 * Callers:
 *     PfSnTraceTimerRoutine @ 0x14001A000 (PfSnTraceTimerRoutine.c)
 *     PfSnLogPageFaultCommon @ 0x14001A220 (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLogSequenceNumber @ 0x14001A338 (PfSnCheckLogSequenceNumber.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     PfSnLogHelper @ 0x140443494 (PfSnLogHelper.c)
 *     PfSnLogStreamDelete @ 0x14052B778 (PfSnLogStreamDelete.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PfSnTraceBufferAllocate @ 0x1401268E0 (PfSnTraceBufferAllocate.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnTraceGetLogEntry(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v6; // r14
  int v7; // eax
  unsigned int v8; // esi
  _QWORD *v10; // r15
  volatile signed __int32 *v11; // rbp
  unsigned __int8 CurrentIrql; // r12
  _QWORD *v13; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

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
        goto LABEL_29;
      }
      v11 = (volatile signed __int32 *)(a1 + 128);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(a1 + 128);
      }
      else if ( _interlockedbittestandset64(v11, 0LL) )
      {
        KxWaitForSpinLockAndAcquire(a1 + 128);
      }
      if ( *(_QWORD *)(a1 + 96) == v6 )
      {
        v13 = *(_QWORD **)(a1 + 112);
        *v10 = a1 + 104;
        v10[1] = v13;
        if ( *v13 != a1 + 104 )
          __fastfail(3u);
        *v13 = v10;
        *(_QWORD *)(a1 + 112) = v10;
        ++*(_DWORD *)(a1 + 120);
        *(_QWORD *)(a1 + 96) = v10;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(a1 + 128, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
        __writecr8(CurrentIrql);
      }
      else
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(a1 + 128, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
        __writecr8(CurrentIrql);
        ExFreePoolWithTag(v10, 0);
      }
      v6 = *(_QWORD *)(a1 + 96);
      v7 = a2 + _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 16), a2);
    }
    v8 = -1073741675;
LABEL_29:
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 344), -a2);
  }
  return v8;
}
