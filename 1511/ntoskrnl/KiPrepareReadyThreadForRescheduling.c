/*
 * XREFs of KiPrepareReadyThreadForRescheduling @ 0x140096928
 * Callers:
 *     KiSetPriorityThread @ 0x14007BEA0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     ExpApplyPriorityBoost @ 0x14007EC80 (ExpApplyPriorityBoost.c)
 *     KiApplyForegroundBoostThread @ 0x1400959C4 (KiApplyForegroundBoostThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140095BA0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x1401C9B74 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiSetPriorityBoost @ 0x140102184 (KiSetPriorityBoost.c)
 */

__int64 __fastcall KiPrepareReadyThreadForRescheduling(__int64 a1, int a2, __int64 *a3)
{
  __int64 *v3; // rdi
  __int64 result; // rax

  v3 = a3;
  if ( a2 < 15 && (unsigned int)(MEMORY[0xFFFFF78000000320] - 300) >= *(_DWORD *)(a1 + 436) )
  {
    LOBYTE(a3) = 15;
    KiSetPriorityBoost(0LL, a1, a3, *(_QWORD *)(a1 + 72));
  }
  else
  {
    *(_DWORD *)(a1 + 116) |= 2u;
  }
  *(_BYTE *)(a1 + 388) = 7;
  result = *v3;
  *(_QWORD *)(a1 + 216) = *v3;
  *v3 = a1 + 216;
  return result;
}
