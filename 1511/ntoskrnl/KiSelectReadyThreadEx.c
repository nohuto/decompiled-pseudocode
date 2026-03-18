/*
 * XREFs of KiSelectReadyThreadEx @ 0x14007CE70
 * Callers:
 *     NtYieldExecution @ 0x1400290C0 (NtYieldExecution.c)
 *     KiSchedulerApc @ 0x140029304 (KiSchedulerApc.c)
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     KiSetPriorityThread @ 0x14007BEA0 (KiSetPriorityThread.c)
 *     KiRemoveBoostThread @ 0x14007CF40 (KiRemoveBoostThread.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     ExpApplyPriorityBoost @ 0x14007EC80 (ExpApplyPriorityBoost.c)
 *     KiApplyForegroundBoostThread @ 0x1400959C4 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x14002A710 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSelectLowestRankedThread @ 0x14002AA38 (KiSelectLowestRankedThread.c)
 *     KiSelectReadyThread @ 0x1400832A0 (KiSelectReadyThread.c)
 */

__int64 __fastcall KiSelectReadyThreadEx(struct _KPRCB *a1, __int64 a2, char a3)
{
  __int64 v4; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rdx
  char v10; // r8

  v4 = a2;
  if ( a2 )
  {
    if ( *(_BYTE *)(a2 + 195) == 31 )
      return 0LL;
    v6 = *(_QWORD *)(a2 + 104);
    if ( v6 )
    {
      v9 = a1->ScbOffset + v6;
      if ( v9 )
      {
        v10 = a1 == KeGetCurrentPrcb() || (_KTHREAD *)v4 != a1->CurrentThread;
        if ( (unsigned int)KiGetThreadEffectiveRankNonZero(v4, v9, v10) )
          return KiChooseLowestRankedThread(a1, v4, (unsigned int)(*(char *)(v4 + 195) + 1));
      }
    }
    v7 = (unsigned int)(*(char *)(v4 + 195) + 1);
    return KiSelectReadyThread(v7, a1);
  }
  result = KiSelectReadyThread(1LL, a1);
  if ( !result )
  {
    result = KiSelectLowestRankedThread((__int64)a1);
    if ( !result && !a3 )
    {
      v7 = 0LL;
      return KiSelectReadyThread(v7, a1);
    }
  }
  return result;
}
