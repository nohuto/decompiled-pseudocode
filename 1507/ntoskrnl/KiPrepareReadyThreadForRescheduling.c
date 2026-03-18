/*
 * XREFs of KiPrepareReadyThreadForRescheduling @ 0x1400D3438
 * Callers:
 *     KiSetAffinityThread @ 0x1400434D0 (KiSetAffinityThread.c)
 *     KiSetPriorityThread @ 0x14009B110 (KiSetPriorityThread.c)
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     ExpApplyPriorityBoost @ 0x14009CD90 (ExpApplyPriorityBoost.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400D2D38 (KiProcessPendingForegroundBoosts.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140133514 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x14020739C (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiAbProcessThreadPriorityModification @ 0x14009C0D0 (KiAbProcessThreadPriorityModification.c)
 */

__int64 __fastcall KiPrepareReadyThreadForRescheduling(__int64 a1, int a2, __int64 *a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  if ( a2 >= 15 || (unsigned int)(MEMORY[0xFFFFF78000000320] - 300) < *(_DWORD *)(a1 + 436) )
  {
    *(_DWORD *)(a1 + 116) |= 2u;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 72);
    *(_BYTE *)(a1 + 564) += 16 * (15 - *(_BYTE *)(a1 + 195));
    KiAbProcessThreadPriorityModification(a1, 15, 1);
    v6 = *(_QWORD *)(a1 + 32);
    v7 = (unsigned int)KiLockQuantumTarget;
    *(_BYTE *)(a1 + 195) = 15;
    if ( v5 > v6 || v6 - v5 < v7 )
      *(_QWORD *)(a1 + 32) = v5 + v7;
  }
  *(_BYTE *)(a1 + 388) = 7;
  result = *a3;
  *(_QWORD *)(a1 + 216) = *a3;
  *a3 = a1 + 216;
  return result;
}
