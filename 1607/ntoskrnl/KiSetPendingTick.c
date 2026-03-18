/*
 * XREFs of KiSetPendingTick @ 0x14009E0F8
 * Callers:
 *     KiSetClockTickRate @ 0x14009DFAC (KiSetClockTickRate.c)
 *     KePrepareClockTimerForIdle @ 0x1400D8760 (KePrepareClockTimerForIdle.c)
 *     KeClockInterruptNotify @ 0x1400D9870 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x1400DCA70 (KeResumeClockTimerFromIdle.c)
 *     KiResumeClockTimer @ 0x140114334 (KiResumeClockTimer.c)
 *     KeInitializeClock @ 0x1407B87A4 (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

char __fastcall KiSetPendingTick(char a1)
{
  struct _KPRCB *CurrentPrcb; // rdx
  char result; // al
  __int64 v4; // rcx

  if ( KiClockTimerPerCpu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = (a1 ^ CurrentPrcb->PendingTickFlags) & 1;
    CurrentPrcb->PendingTickFlags ^= result;
  }
  else
  {
    v4 = KiProcessorBlock[KiClockTimerOwner];
    result = (a1 ^ *(_BYTE *)(v4 + 34)) & 1;
    *(_BYTE *)(v4 + 34) ^= result;
  }
  return result;
}
