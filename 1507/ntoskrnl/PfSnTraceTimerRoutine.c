/*
 * XREFs of PfSnTraceTimerRoutine @ 0x14001A000
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     PfSnTraceGetLogEntry @ 0x14001A3A8 (PfSnTraceGetLogEntry.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall PfSnTraceTimerRoutine(
        struct _KDPC *Dpc,
        int *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v5; // edx
  unsigned __int64 *v6; // rcx
  volatile signed __int32 *v7; // rdi
  unsigned __int64 v8; // rtt
  unsigned __int64 v9; // rtt
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 *v11; // [rsp+58h] [rbp+10h] BYREF

  if ( !DeferredContext[100] )
  {
    v5 = DeferredContext[83];
    if ( v5 > DeferredContext[85] )
      v5 = DeferredContext[85];
    if ( DeferredContext[81] > v5 )
      DeferredContext[81] = v5;
    DeferredContext[DeferredContext[82] + 71] = v5 - DeferredContext[81];
    DeferredContext[81] = v5;
    if ( (int)PfSnTraceGetLogEntry(DeferredContext, 1LL, &v11, SystemArgument2) >= 0 )
    {
      v6 = v11;
      *v11 &= 7uLL;
      v6[1] = 0LL;
      *v6 = *v6 & 0xFFFFFFFFFFFFFFF8uLL | 4;
      if ( ++DeferredContext[82] >= dword_1403534A4 )
      {
        if ( !_InterlockedCompareExchange(DeferredContext + 100, 4, 0) )
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 92), DelayedWorkQueue);
      }
      else
      {
        v7 = DeferredContext + 68;
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(DeferredContext + 68);
        }
        else if ( _interlockedbittestandset64(v7, 0LL) )
        {
          KxWaitForSpinLockAndAcquire(DeferredContext + 68);
        }
        if ( !DeferredContext[100] )
        {
          _m_prefetchw(DeferredContext + 90);
          v8 = *((_QWORD *)DeferredContext + 45) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v8 == _InterlockedCompareExchange64((volatile signed __int64 *)DeferredContext + 45, v8 + 2, v8)
            || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)DeferredContext + 45) )
          {
            KiSetTimerEx(
              (_DWORD)DeferredContext + 136,
              *((_QWORD *)DeferredContext + 25),
              0,
              0,
              (__int64)(DeferredContext + 52));
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(DeferredContext + 68, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
      }
    }
  }
  _m_prefetchw(DeferredContext + 90);
  v9 = *((_QWORD *)DeferredContext + 45) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)DeferredContext + 45, v9 - 2, v9) )
    ExfReleaseRundownProtection((PEX_RUNDOWN_REF)DeferredContext + 45);
}
