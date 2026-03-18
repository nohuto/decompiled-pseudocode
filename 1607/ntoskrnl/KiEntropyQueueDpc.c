/*
 * XREFs of KiEntropyQueueDpc @ 0x1400AA984
 * Callers:
 *     KiScanInterruptObjectList @ 0x14015ED60 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x14015EF30 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x14015F060 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x14015F190 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiHvInterrupt @ 0x140162640 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401633F0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140163AF0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401641F0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401648F0 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400D82C0 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiEntropyQueueDpc(__int64 a1)
{
  __int64 result; // rax

  if ( KiEntropyTimingRoutine )
    return KiInsertQueueDpc(a1 + 25640, 0);
  return result;
}
