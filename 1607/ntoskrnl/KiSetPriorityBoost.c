/*
 * XREFs of KiSetPriorityBoost @ 0x140091A7C
 * Callers:
 *     KeSetPriorityBoost @ 0x1400919AC (KeSetPriorityBoost.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x140091E58 (KiPrepareReadyThreadForRescheduling.c)
 *     KiQuantumEnd @ 0x1400D1780 (KiQuantumEnd.c)
 * Callees:
 *     KiUpdateThreadPriority @ 0x140091DA8 (KiUpdateThreadPriority.c)
 *     KiSetPriorityThread @ 0x1400D2BA0 (KiSetPriorityThread.c)
 */

__int64 __fastcall KiSetPriorityBoost(__int64 a1, __int64 a2, char a3, unsigned __int64 a4)
{
  __int64 v6; // r8
  __int64 result; // rax
  unsigned __int64 v8; // rcx

  *(_BYTE *)(a2 + 564) += 16 * (a3 - *(_BYTE *)(a2 + 195));
  v6 = (unsigned int)a3;
  if ( a1 )
    result = KiSetPriorityThread(a2, a1, v6);
  else
    result = KiUpdateThreadPriority(0LL, a2, v6, 0LL);
  v8 = *(_QWORD *)(a2 + 32);
  if ( a4 > v8 || v8 - a4 < (unsigned int)KiLockQuantumTarget )
  {
    result = a4 + (unsigned int)KiLockQuantumTarget;
    *(_QWORD *)(a2 + 32) = result;
  }
  return result;
}
