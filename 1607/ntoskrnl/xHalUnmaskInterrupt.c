/*
 * XREFs of xHalUnmaskInterrupt @ 0x14014D1D0
 * Callers:
 *     KiSetClockTickRate @ 0x14009D7AC (KiSetClockTickRate.c)
 *     KiIntSteerSetDestination @ 0x1400A4728 (KiIntSteerSetDestination.c)
 *     KePrepareClockTimerForIdle @ 0x1400D6600 (KePrepareClockTimerForIdle.c)
 *     KeClockInterruptNotify @ 0x1400D7710 (KeClockInterruptNotify.c)
 *     PpmIdleExecuteTransition @ 0x1400D83E0 (PpmIdleExecuteTransition.c)
 *     KeResumeClockTimerFromIdle @ 0x1400DA910 (KeResumeClockTimerFromIdle.c)
 *     KiResumeClockTimer @ 0x1401148A4 (KiResumeClockTimer.c)
 *     KiMaskInterruptInternal @ 0x14012472C (KiMaskInterruptInternal.c)
 *     KeUnmaskInterrupt @ 0x140125B4C (KeUnmaskInterrupt.c)
 *     KeConnectInterrupt @ 0x14012D534 (KeConnectInterrupt.c)
 *     KiIntSteerConnect @ 0x14012D8EC (KiIntSteerConnect.c)
 *     IopWriteTriageDumpToFirmware @ 0x1401C7FF4 (IopWriteTriageDumpToFirmware.c)
 *     IoProcessPassiveInterrupts @ 0x1401CD7A0 (IoProcessPassiveInterrupts.c)
 *     IopPassiveInterruptWorker @ 0x1401CD9E0 (IopPassiveInterruptWorker.c)
 *     KiMaskSecondaryInterruptInternal @ 0x1401D5BFC (KiMaskSecondaryInterruptInternal.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x1401D5DF8 (KiUnmaskSecondaryInterruptInternal.c)
 *     IoGetDmaAdapter @ 0x140578174 (IoGetDmaAdapter.c)
 *     VfGetDmaAdapter @ 0x140707458 (VfGetDmaAdapter.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 *     KeInitializeClock @ 0x1407B87A4 (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

__int64 xHalUnmaskInterrupt()
{
  return 3221225659LL;
}
