/*
 * XREFs of KiTryToAcquireQueuedSpinLockInstrumented @ 0x140200CD0
 * Callers:
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400FD3FC (KeTryToAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiRemoveAnyPage @ 0x140100180 (MiRemoveAnyPage.c)
 *     KeTryToAcquireQueuedSpinLock @ 0x140200A5C (KeTryToAcquireQueuedSpinLock.c)
 *     KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140200AD8 (KeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     PerfLogSpinLockAcquire @ 0x14025FBDC (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall KiTryToAcquireQueuedSpinLockInstrumented(signed __int64 a1, _DWORD *a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  char v3; // r9
  unsigned __int64 v4; // rax
  unsigned int InterruptCount; // ebx
  unsigned int v6; // r11d
  unsigned __int64 v7; // rax
  unsigned int v9; // [rsp+48h] [rbp+10h]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v3 = 1;
    v4 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v6 = v4;
  }
  else
  {
    v6 = v9;
    v3 = 0;
    InterruptCount = v9;
  }
  _m_prefetchw(a2);
  if ( *a2 || _InterlockedCompareExchange64((volatile signed __int64 *)a2, a1, 0LL) )
  {
    _mm_pause();
    return 0LL;
  }
  else
  {
    ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
    if ( v3 )
    {
      v7 = __rdtsc();
      PerfLogSpinLockAcquire((_DWORD)a2, v7, v7 - v6, 0, InterruptCount, 1);
    }
    return 1LL;
  }
}
