/*
 * XREFs of KiFastAcquireQueuedSpinLockInstrumented @ 0x1401C48DC
 * Callers:
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     ExpLockResource @ 0x14007F3A0 (ExpLockResource.c)
 *     ExAcquireSharedStarveExclusive @ 0x1400A4BB0 (ExAcquireSharedStarveExclusive.c)
 *     KeFastAcquireInStackQueuedSpinLockAndRaise @ 0x1400CF858 (KeFastAcquireInStackQueuedSpinLockAndRaise.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400CFA00 (KxWaitForLockOwnerShipWithIrql.c)
 *     PerfLogSpinLockAcquire @ 0x14021086C (PerfLogSpinLockAcquire.c)
 */

char __fastcall KiFastAcquireQueuedSpinLockInstrumented(__int64 a1, volatile __int64 *a2, _BYTE *a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v4; // r9d
  int v5; // ebp
  char v6; // di
  unsigned __int64 v7; // rax
  unsigned int InterruptCount; // r15d
  unsigned int v9; // r14d
  _QWORD *v10; // rdx
  char v11; // si
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned int v15; // [rsp+68h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v5 = (int)a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v6 = 1;
    v7 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v9 = v7;
  }
  else
  {
    v9 = v15;
    v6 = 0;
    InterruptCount = v15;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v10 = (_QWORD *)_InterlockedExchange64(a2, a1);
  v11 = 0;
  if ( v10 )
  {
    v12 = KxWaitForLockOwnerShipWithIrql(a1, v10, a3);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v4 = v12;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v12;
    v11 = 1;
  }
  if ( v6 )
  {
    v13 = __rdtsc();
    PerfLogSpinLockAcquire(v5, v13, v13 - v9, v4, InterruptCount, 1);
  }
  return v11;
}
