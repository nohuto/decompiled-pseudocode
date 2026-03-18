/*
 * XREFs of KiGetNextTimerExpirationDueTime @ 0x1400352DC
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x140032D00 (KePrepareClockTimerForIdle.c)
 *     KeEstimateClockTickDuration @ 0x140134E80 (KeEstimateClockTickDuration.c)
 * Callees:
 *     KiGetNextTimer2ExpirationDueTime @ 0x140035414 (KiGetNextTimer2ExpirationDueTime.c)
 *     KiFindNextTimerDueTime @ 0x140049AE0 (KiFindNextTimerDueTime.c)
 *     KeIsEmptyAffinityEx @ 0x140077130 (KeIsEmptyAffinityEx.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x140214510 (ExGetNextWakeTimeForDeepSleep.c)
 */

int *__fastcall KiGetNextTimerExpirationDueTime(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        char a4,
        unsigned __int64 *a5,
        int *a6)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rbp
  int v11; // edi
  __int64 NextWakeTimeForDeepSleep; // rax
  __int64 v13; // rcx
  int *result; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17[5]; // [rsp+20h] [rbp-28h] BYREF
  char v18; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  v8 = a3;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v11 = 1;
    goto LABEL_9;
  }
  if ( !*(_BYTE *)(a1 + 33) && !KiSerializeTimerExpiration && PoDisableSkipTick )
  {
    v11 = 2;
    goto LABEL_9;
  }
  v11 = 4;
  if ( a4 )
  {
    NextWakeTimeForDeepSleep = ExGetNextWakeTimeForDeepSleep();
  }
  else
  {
    LOBYTE(a3) = a2;
    NextWakeTimeForDeepSleep = KiFindNextTimerDueTime(a1, v8, a3);
  }
  v6 = NextWakeTimeForDeepSleep;
  if ( KiGroupSchedulingEnabled )
  {
    if ( a2 )
    {
      if ( (unsigned int)KeIsEmptyAffinityEx(KiGroupSchedulingOverQuotaMask) )
        goto LABEL_7;
    }
    else
    {
      v15 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
      v13 = v15 & 0x3F;
      if ( ((*(_QWORD *)&KiGroupSchedulingOverQuotaMask[4 * (v15 >> 6) + 4] >> (v15 & 0x3F)) & 1) == 0 )
        goto LABEL_7;
    }
    if ( KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < v6 )
    {
      v6 = KiGenerationEndTick * KeMaximumIncrement;
      v11 = 5;
    }
  }
LABEL_7:
  if ( *(_BYTE *)(a1 + 33) )
  {
    LOBYTE(v13) = a4;
    KiGetNextTimer2ExpirationDueTime(v13, v17, &v18);
    if ( v17[0] < v6 )
    {
      v11 = 6;
      v6 = v17[0];
      if ( v18 )
        v11 = 7;
    }
  }
  if ( a2 )
  {
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      if ( (_BYTE)KdDebuggerEnabled )
      {
        if ( v8 < v6 )
        {
          v16 = (unsigned int)(10000 * KiDebugPollInterval);
          if ( v6 - v8 > v16 )
          {
            v6 = v16 + v8;
            v11 = 8;
          }
        }
      }
    }
  }
LABEL_9:
  *a5 = v6;
  result = a6;
  *a6 = v11;
  return result;
}
