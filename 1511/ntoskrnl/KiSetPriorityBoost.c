/*
 * XREFs of KiSetPriorityBoost @ 0x140102184
 * Callers:
 *     KiQuantumEnd @ 0x14007AAB0 (KiQuantumEnd.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x140096928 (KiPrepareReadyThreadForRescheduling.c)
 *     KeSetPriorityBoost @ 0x1401020B0 (KeSetPriorityBoost.c)
 * Callees:
 *     KiSetPriorityThread @ 0x14007BEA0 (KiSetPriorityThread.c)
 *     KiUpdateThreadPriority @ 0x14007D120 (KiUpdateThreadPriority.c)
 */

void __fastcall KiSetPriorityBoost(_QWORD *a1, __int64 a2, char a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // rcx

  *(_BYTE *)(a2 + 564) += 16 * (a3 - *(_BYTE *)(a2 + 195));
  if ( a1 )
    KiSetPriorityThread(a2, a1, a3);
  else
    KiUpdateThreadPriority(0LL, a2, a3, 0);
  v6 = *(_QWORD *)(a2 + 32);
  if ( a4 > v6 || v6 - a4 < (unsigned int)KiLockQuantumTarget )
    *(_QWORD *)(a2 + 32) = a4 + (unsigned int)KiLockQuantumTarget;
}
