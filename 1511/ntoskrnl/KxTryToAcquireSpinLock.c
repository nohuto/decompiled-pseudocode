/*
 * XREFs of KxTryToAcquireSpinLock @ 0x1400EA5BC
 * Callers:
 *     KeTryToAcquireSpinLockAtDpcLevel @ 0x1400EA5B4 (KeTryToAcquireSpinLockAtDpcLevel.c)
 *     KdPollBreakIn @ 0x1401C28BC (KdPollBreakIn.c)
 *     KiProcessNMI @ 0x1401C3714 (KiProcessNMI.c)
 *     KeFreezeExecution @ 0x1401C8B48 (KeFreezeExecution.c)
 *     EtwpTraceStackKey @ 0x1402116F8 (EtwpTraceStackKey.c)
 * Callees:
 *     <none>
 */

char __fastcall KxTryToAcquireSpinLock(volatile signed __int32 *a1)
{
  char result; // al

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiTryToAcquireSpinLockInstrumented();
  if ( !_interlockedbittestandset64(a1, 0LL) )
    return 1;
  result = 0;
  _mm_pause();
  return result;
}
