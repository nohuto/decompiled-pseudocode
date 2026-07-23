/*
 * XREFs of KxTryToAcquireSpinLock @ 0x140083238
 * Callers:
 *     KeFreezeExecution @ 0x140082F4C (KeFreezeExecution.c)
 *     KeTryToAcquireSpinLockAtDpcLevel @ 0x140083230 (KeTryToAcquireSpinLockAtDpcLevel.c)
 *     KiProcessNMI @ 0x140083318 (KiProcessNMI.c)
 *     EtwpTraceStackKey @ 0x14022B004 (EtwpTraceStackKey.c)
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
