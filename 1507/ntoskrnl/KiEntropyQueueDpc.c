/*
 * XREFs of KiEntropyQueueDpc @ 0x140128F10
 * Callers:
 *     KiScanInterruptObjectList @ 0x140183B70 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x140183D40 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x140183E70 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x140183FA0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiHvInterrupt @ 0x140187990 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140188090 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140188770 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140188E50 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140189530 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiEntropyQueueDpc(__int64 a1)
{
  __int64 result; // rax

  if ( KiEntropyTimingRoutine )
    return KiInsertQueueDpc(a1 + 25512, 0LL, 0LL, 0LL, 0);
  return result;
}
