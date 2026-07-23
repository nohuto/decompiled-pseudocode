/*
 * XREFs of KiPrepareReadyThreadForRescheduling @ 0x1400915B8
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14005CE50 (ExpApplyPriorityBoost.c)
 *     KiApplyForegroundBoostThread @ 0x1400C8BFC (KiApplyForegroundBoostThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1400C8DDC (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetPriorityThread @ 0x1400D0A40 (KiSetPriorityThread.c)
 *     KeSetPriorityThread @ 0x1400D0DC0 (KeSetPriorityThread.c)
 *     KiSetHeteroPolicyThread @ 0x1401D8180 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiSetPriorityBoost @ 0x1400911DC (KiSetPriorityBoost.c)
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
