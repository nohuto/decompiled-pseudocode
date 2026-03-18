/*
 * XREFs of KxTryToAcquireSpinLock @ 0x1400825BC
 * Callers:
 *     KeFreezeExecution @ 0x1400822D0 (KeFreezeExecution.c)
 *     KeTryToAcquireSpinLockAtDpcLevel @ 0x1400825B4 (KeTryToAcquireSpinLockAtDpcLevel.c)
 *     KiProcessNMI @ 0x14008269C (KiProcessNMI.c)
 *     EtwpTraceStackKey @ 0x14022B1D8 (EtwpTraceStackKey.c)
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
