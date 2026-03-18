/*
 * XREFs of KiPrepareReadyThreadForRescheduling @ 0x140091E58
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14005D2D0 (ExpApplyPriorityBoost.c)
 *     KiApplyForegroundBoostThread @ 0x1400CAD5C (KiApplyForegroundBoostThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400CAF3C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetPriorityThread @ 0x1400D2BA0 (KiSetPriorityThread.c)
 *     KeSetPriorityThread @ 0x1400D2F20 (KeSetPriorityThread.c)
 *     KiSetHeteroPolicyThread @ 0x1401D8354 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiSetPriorityBoost @ 0x140091A7C (KiSetPriorityBoost.c)
 */

__int64 __fastcall KiPrepareReadyThreadForRescheduling(__int64 a1, int a2, __int64 *a3)
{
  __int64 result; // rax

  if ( (unsigned int)(a2 - 1) <= 0xD && (unsigned int)(MEMORY[0xFFFFF78000000320] - 300) >= *(_DWORD *)(a1 + 436) )
    KiSetPriorityBoost(0LL, a1, 15, *(_QWORD *)(a1 + 72));
  else
    *(_DWORD *)(a1 + 116) |= 2u;
  *(_BYTE *)(a1 + 388) = 7;
  result = *a3;
  *(_QWORD *)(a1 + 216) = *a3;
  *a3 = a1 + 216;
  return result;
}
