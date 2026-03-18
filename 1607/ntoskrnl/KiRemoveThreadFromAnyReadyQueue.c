/*
 * XREFs of KiRemoveThreadFromAnyReadyQueue @ 0x1400AA948
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14005D2D0 (ExpApplyPriorityBoost.c)
 *     KiApplyForegroundBoostThread @ 0x1400CAD5C (KiApplyForegroundBoostThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400CAF3C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetPriorityThread @ 0x1400D2BA0 (KiSetPriorityThread.c)
 *     KeSetPriorityThread @ 0x1400D2F20 (KeSetPriorityThread.c)
 *     KiSetHeteroPolicyThread @ 0x1401D8354 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     <none>
 */

int __fastcall KiRemoveThreadFromAnyReadyQueue(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  if ( (*(_DWORD *)(a3 + 116) & 0x2000) != 0 )
    return KiRemoveThreadFromScbQueue(a1, *(_QWORD *)(a3 + 1496), a3, a4);
  if ( *(int *)(a3 + 536) < 0 )
    return KiRemoveThreadFromSharedReadyQueue(a2, a3, a4);
  return KiRemoveThreadFromReadyQueue(a1, a3 + 216, a4);
}
