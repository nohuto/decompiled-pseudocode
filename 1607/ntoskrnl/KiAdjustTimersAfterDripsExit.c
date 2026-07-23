/*
 * XREFs of KiAdjustTimersAfterDripsExit @ 0x1401D23D0
 * Callers:
 *     KeResumeClockTimerFromIdle @ 0x1400DA910 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     KiAdjustTimerDueTimes @ 0x14012AB84 (KiAdjustTimerDueTimes.c)
 */

__int64 __fastcall KiAdjustTimersAfterDripsExit(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  unsigned __int8 CurrentIrql; // bl
  char v4[4]; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+24h] [rbp-34h]
  __int128 v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  char v8; // [rsp+40h] [rbp-18h]

  if ( KiSerializeTimerExpiration )
  {
    result = (unsigned int)KiTimerRebaseThresholdOnDripsExit;
    v7 = KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime;
    if ( KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime > 10000000LL
                                                                   * (unsigned int)KiTimerRebaseThresholdOnDripsExit )
    {
      MEMORY[0xFFFFF780000003B0] += KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime;
      if ( MEMORY[0xFFFFF780000003B0] < 0 )
        __fastfail(5u);
      v7 = -v7;
      v4[0] = 1;
      v5 = 0;
      v6 = 0LL;
      v8 = 1;
      if ( KiSerializeTimerExpiration )
        v2 = KiProcessorBlock[0] + 13824;
      else
        v2 = a1 + 13824;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      KiAdjustTimerDueTimes((__int64)KeGetCurrentPrcb(), v2, (__int64)v4);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
