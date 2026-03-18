/*
 * XREFs of KiSetPendingTick @ 0x1400E6C5C
 * Callers:
 *     KeClockInterruptNotify @ 0x1400A6130 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x1400AA190 (KeResumeClockTimerFromIdle.c)
 *     KiSetClockTickRate @ 0x1400D60D0 (KiSetClockTickRate.c)
 *     KePrepareClockTimerForIdle @ 0x1400E6CE0 (KePrepareClockTimerForIdle.c)
 *     KiResumeClockTimer @ 0x14014EAC8 (KiResumeClockTimer.c)
 *     KeInitializeClock @ 0x1407CFC78 (KeInitializeClock.c)
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
