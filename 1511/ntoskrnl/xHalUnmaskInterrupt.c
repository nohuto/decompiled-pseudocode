/*
 * XREFs of xHalUnmaskInterrupt @ 0x140143830
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x140032D00 (KePrepareClockTimerForIdle.c)
 *     KiSetClockTickRate @ 0x14003548C (KiSetClockTickRate.c)
 *     KeClockInterruptNotify @ 0x140046990 (KeClockInterruptNotify.c)
 *     PpmIdleExecuteTransition @ 0x1400474D0 (PpmIdleExecuteTransition.c)
 *     KeResumeClockTimerFromIdle @ 0x140049500 (KeResumeClockTimerFromIdle.c)
 *     KiIntSteerSetDestination @ 0x1400E8374 (KiIntSteerSetDestination.c)
 *     KiMaskInterruptInternal @ 0x140115E04 (KiMaskInterruptInternal.c)
 *     KeUnmaskInterrupt @ 0x1401168C4 (KeUnmaskInterrupt.c)
 *     KiResumeClockTimer @ 0x140119C68 (KiResumeClockTimer.c)
 *     KeConnectInterrupt @ 0x140122784 (KeConnectInterrupt.c)
 *     KiIntSteerConnect @ 0x140122B3C (KiIntSteerConnect.c)
 *     IopWriteTriageDumpToFirmware @ 0x1401BA328 (IopWriteTriageDumpToFirmware.c)
 *     IoProcessPassiveInterrupts @ 0x1401BF3CC (IoProcessPassiveInterrupts.c)
 *     IopPassiveInterruptWorker @ 0x1401BF60C (IopPassiveInterruptWorker.c)
 *     KiMaskSecondaryInterruptInternal @ 0x1401C6C60 (KiMaskSecondaryInterruptInternal.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x1401C6E5C (KiUnmaskSecondaryInterruptInternal.c)
 *     IoGetDmaAdapter @ 0x14054204C (IoGetDmaAdapter.c)
 *     VfGetDmaAdapter @ 0x1406BB3B4 (VfGetDmaAdapter.c)
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 *     KeInitializeClock @ 0x14076DF9C (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

__int64 xHalUnmaskInterrupt()
{
  return 3221225659LL;
}
