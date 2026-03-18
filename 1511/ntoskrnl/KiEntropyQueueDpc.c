/*
 * XREFs of KiEntropyQueueDpc @ 0x1400EA588
 * Callers:
 *     KiScanInterruptObjectList @ 0x140154E30 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140155000 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140155130 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140155260 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiHvInterrupt @ 0x140158160 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140158800 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140158E80 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140159500 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140159B80 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiEntropyQueueDpc(__int64 a1)
{
  __int64 result; // rax

  if ( KiEntropyTimingRoutine )
    return KiInsertQueueDpc(a1 + 25512, 0LL, 0LL, 0LL, 0);
  return result;
}
