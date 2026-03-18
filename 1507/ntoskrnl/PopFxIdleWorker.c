/*
 * XREFs of PopFxIdleWorker @ 0x140027888
 * Callers:
 *     PopFxIdleComponent @ 0x1400274D0 (PopFxIdleComponent.c)
 *     PopFxComponentWork @ 0x14015A130 (PopFxComponentWork.c)
 * Callees:
 *     PopFxIdleWorkerTail @ 0x1400279A0 (PopFxIdleWorkerTail.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PopFxIdleWorker(_QWORD *BugCheckParameter2, unsigned int a2)
{
  __int64 v4; // rdi
  volatile signed __int32 *v5; // rbx
  unsigned __int8 CurrentIrql; // r14
  char v7; // si
  void (__fastcall *v8)(_QWORD, _QWORD); // rax
  __int64 result; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = *(_QWORD *)(BugCheckParameter2[78] + 8LL * a2);
  v5 = (volatile signed __int32 *)(v4 + 128);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v4 + 128);
  }
  else if ( _interlockedbittestandset64(v5, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v4 + 128);
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 88), 0x40000000, 0x80000000) == 0x80000000 )
  {
    KeResetEvent((PRKEVENT)(v4 + 104));
    *(_DWORD *)(v4 + 136) = 2;
    v7 = 0;
    v8 = (void (__fastcall *)(_QWORD, _QWORD))BugCheckParameter2[15];
    if ( v8 )
    {
      v8(BugCheckParameter2[21], a2);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 136), 0xFFFFFFFF) != 1 )
      {
LABEL_8:
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(v4 + 128, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        if ( v7 )
          return PopFxIdleWorkerTail((ULONG_PTR)BugCheckParameter2);
        return result;
      }
    }
    else
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 136), 0xFFFFFFFE);
    }
    v7 = 1;
    goto LABEL_8;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v4 + 128, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v5, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
