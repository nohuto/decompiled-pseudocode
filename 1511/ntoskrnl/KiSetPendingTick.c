/*
 * XREFs of KiSetPendingTick @ 0x1400355D8
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x140032D00 (KePrepareClockTimerForIdle.c)
 *     KiSetClockTickRate @ 0x14003548C (KiSetClockTickRate.c)
 *     KeClockInterruptNotify @ 0x140046990 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x140049500 (KeResumeClockTimerFromIdle.c)
 *     KiResumeClockTimer @ 0x140119C68 (KiResumeClockTimer.c)
 *     KeInitializeClock @ 0x14076DF9C (KeInitializeClock.c)
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
