/*
 * XREFs of ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14022DD94
 * Callers:
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x14022DB34 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 * Callees:
 *     PerfLogSpinLockAcquire @ 0x1402284A4 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // r8
  char v2; // r9
  unsigned __int64 v3; // rax
  int InterruptCount; // ebx
  int v5; // r11d
  signed __int32 v6; // ett
  __int64 v8; // rax
  int v9; // [rsp+40h] [rbp+8h]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v2 = 1;
    v3 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v5 = v3;
  }
  else
  {
    v5 = v9;
    v2 = 0;
    InterruptCount = v9;
  }
  _m_prefetchw(a1);
  v6 = *a1 & 0x7FFFFFFF;
  if ( v6 != _InterlockedCompareExchange(a1, v6 + 1, v6) )
    return 0LL;
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  if ( v2 )
  {
    v8 = __rdtsc();
    PerfLogSpinLockAcquire((__int64)a1, v8, v8 - v5, 0, InterruptCount, 2);
  }
  return 1LL;
}
