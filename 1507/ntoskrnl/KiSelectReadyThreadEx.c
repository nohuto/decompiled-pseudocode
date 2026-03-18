/*
 * XREFs of KiSelectReadyThreadEx @ 0x1400A24B0
 * Callers:
 *     KiSchedulerApc @ 0x14000EB14 (KiSchedulerApc.c)
 *     KiRemoveBoostThread @ 0x14009AE80 (KiRemoveBoostThread.c)
 *     KiSetPriorityThread @ 0x14009B110 (KiSetPriorityThread.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     ExpApplyPriorityBoost @ 0x14009CD90 (ExpApplyPriorityBoost.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400D2D38 (KiProcessPendingForegroundBoosts.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     NtYieldExecution @ 0x1400EB420 (NtYieldExecution.c)
 * Callees:
 *     KiSelectReadyThread @ 0x1400A19C0 (KiSelectReadyThread.c)
 *     KiSelectLowestRankedThread @ 0x1400D5364 (KiSelectLowestRankedThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 */

__int64 __fastcall KiSelectReadyThreadEx(struct _KPRCB *a1, _KTHREAD *a2, __int64 a3)
{
  char v3; // di
  _KTHREAD *v4; // r9
  __int64 result; // rax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdx
  __int64 v8; // rdx

  v3 = a3;
  v4 = a2;
  if ( a2 )
  {
    if ( a2->Priority == 31 )
    {
      return 0LL;
    }
    else
    {
      SchedulingGroup = a2->SchedulingGroup;
      if ( SchedulingGroup
        && (v8 = (__int64)SchedulingGroup + a1->ScbOffset) != 0
        && (a1 == KeGetCurrentPrcb() || v4 != a1->CurrentThread ? (LOBYTE(a3) = 1) : (LOBYTE(a3) = 0),
            (unsigned int)KiGetThreadEffectiveRankNonZero(v4, v8, a3)) )
      {
        return KiChooseLowestRankedThread(a1, v4, (unsigned int)(v4->Priority + 1));
      }
      else
      {
        return KiSelectReadyThread(v4->Priority + 1, (__int64)a1);
      }
    }
  }
  else
  {
    result = KiSelectReadyThread(1, (__int64)a1);
    if ( !result )
    {
      result = KiSelectLowestRankedThread(a1);
      if ( !result && !v3 )
        return KiSelectReadyThread(0, (__int64)a1);
    }
  }
  return result;
}
