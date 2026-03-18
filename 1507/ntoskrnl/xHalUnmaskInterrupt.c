/*
 * XREFs of xHalUnmaskInterrupt @ 0x14017DF24
 * Callers:
 *     KeClockInterruptNotify @ 0x1400A6130 (KeClockInterruptNotify.c)
 *     PpmIdleExecuteTransition @ 0x1400A7C10 (PpmIdleExecuteTransition.c)
 *     KeResumeClockTimerFromIdle @ 0x1400AA190 (KeResumeClockTimerFromIdle.c)
 *     KiSetClockTickRate @ 0x1400D60D0 (KiSetClockTickRate.c)
 *     KePrepareClockTimerForIdle @ 0x1400E6CE0 (KePrepareClockTimerForIdle.c)
 *     KiIntSteerSetDestination @ 0x1400EB378 (KiIntSteerSetDestination.c)
 *     KiMaskInterruptInternal @ 0x14014B35C (KiMaskInterruptInternal.c)
 *     KeUnmaskInterrupt @ 0x14014BD7C (KeUnmaskInterrupt.c)
 *     KiResumeClockTimer @ 0x14014EAC8 (KiResumeClockTimer.c)
 *     KeConnectInterrupt @ 0x140155538 (KeConnectInterrupt.c)
 *     KiIntSteerConnect @ 0x1401558E8 (KiIntSteerConnect.c)
 *     IopWriteTriageDumpToFirmware @ 0x1401F5530 (IopWriteTriageDumpToFirmware.c)
 *     IoProcessPassiveInterrupts @ 0x1401FAC30 (IoProcessPassiveInterrupts.c)
 *     IopPassiveInterruptWorker @ 0x1401FB130 (IopPassiveInterruptWorker.c)
 *     KiMaskSecondaryInterruptInternal @ 0x1402038F4 (KiMaskSecondaryInterruptInternal.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x140203B50 (KiUnmaskSecondaryInterruptInternal.c)
 *     IoGetDmaAdapter @ 0x1405B8614 (IoGetDmaAdapter.c)
 *     VfGetDmaAdapter @ 0x14073BD44 (VfGetDmaAdapter.c)
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 *     KeInitializeClock @ 0x1407CFC78 (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

__int64 xHalUnmaskInterrupt()
{
  return 3221225659LL;
}
