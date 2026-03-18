/*
 * XREFs of KeTryToAcquireSpinLockAtDpcLevel @ 0x14000631C
 * Callers:
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140748F20 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot @ 0x140748FFC (VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  BOOLEAN result; // al

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiTryToAcquireSpinLockInstrumented(SpinLock);
  if ( !_interlockedbittestandset64((volatile signed __int32 *)SpinLock, 0LL) )
    return 1;
  result = 0;
  _mm_pause();
  return result;
}
