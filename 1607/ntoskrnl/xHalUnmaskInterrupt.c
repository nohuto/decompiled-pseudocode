/*
 * XREFs of xHalUnmaskInterrupt @ 0x14014CC60
 * Callers:
 *     KiSetClockTickRate @ 0x14009DFAC (KiSetClockTickRate.c)
 *     KiIntSteerSetDestination @ 0x1400A61B0 (KiIntSteerSetDestination.c)
 *     KePrepareClockTimerForIdle @ 0x1400D8760 (KePrepareClockTimerForIdle.c)
 *     KeClockInterruptNotify @ 0x1400D9870 (KeClockInterruptNotify.c)
 *     PpmIdleExecuteTransition @ 0x1400DA540 (PpmIdleExecuteTransition.c)
 *     KeResumeClockTimerFromIdle @ 0x1400DCA70 (KeResumeClockTimerFromIdle.c)
 *     KiResumeClockTimer @ 0x140114334 (KiResumeClockTimer.c)
 *     KiMaskInterruptInternal @ 0x1401241BC (KiMaskInterruptInternal.c)
 *     KeUnmaskInterrupt @ 0x1401255DC (KeUnmaskInterrupt.c)
 *     KeConnectInterrupt @ 0x14012CFC4 (KeConnectInterrupt.c)
 *     KiIntSteerConnect @ 0x14012D37C (KiIntSteerConnect.c)
 *     IopWriteTriageDumpToFirmware @ 0x1401C8154 (IopWriteTriageDumpToFirmware.c)
 *     IoProcessPassiveInterrupts @ 0x1401CD954 (IoProcessPassiveInterrupts.c)
 *     IopPassiveInterruptWorker @ 0x1401CDB94 (IopPassiveInterruptWorker.c)
 *     KiMaskSecondaryInterruptInternal @ 0x1401D5DD0 (KiMaskSecondaryInterruptInternal.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x1401D5FCC (KiUnmaskSecondaryInterruptInternal.c)
 *     IoGetDmaAdapter @ 0x140577C34 (IoGetDmaAdapter.c)
 *     VfGetDmaAdapter @ 0x140707428 (VfGetDmaAdapter.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 *     KeInitializeClock @ 0x1407B87A4 (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

__int64 xHalUnmaskInterrupt()
{
  return 3221225659LL;
}
