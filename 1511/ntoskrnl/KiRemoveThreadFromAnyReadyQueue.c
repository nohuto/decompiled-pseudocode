/*
 * XREFs of KiRemoveThreadFromAnyReadyQueue @ 0x14009698C
 * Callers:
 *     KiSetPriorityThread @ 0x14007BEA0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     ExpApplyPriorityBoost @ 0x14007EC80 (ExpApplyPriorityBoost.c)
 *     KiApplyForegroundBoostThread @ 0x1400959C4 (KiApplyForegroundBoostThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140095BA0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x1401C9B74 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiRemoveThreadFromAnyReadyQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (*(_DWORD *)(a3 + 116) & 0x2000) != 0 )
    return KiRemoveThreadFromScbQueue(a1, *(_QWORD *)(a3 + 1488), a3, a4);
  if ( *(int *)(a3 + 536) < 0 )
    return KiRemoveThreadFromSharedReadyQueue(a2, a3, (unsigned int)a4);
  return KiRemoveThreadFromReadyQueue(a1, a3 + 216, (unsigned int)a4);
}
