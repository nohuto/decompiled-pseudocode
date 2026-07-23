/*
 * XREFs of KiEntropyQueueDpc @ 0x1400A8F04
 * Callers:
 *     KiScanInterruptObjectList @ 0x14015F2D0 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x14015F4A0 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x14015F5D0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x14015F700 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiHvInterrupt @ 0x140162BB0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140163960 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140164060 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140164760 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140164E60 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiEntropyQueueDpc(__int64 a1)
{
  __int64 result; // rax

  if ( KiEntropyTimingRoutine )
    return KiInsertQueueDpc(a1 + 25640, 0);
  return result;
}
