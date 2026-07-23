/*
 * XREFs of KiGetNextTimerExpirationDueTime @ 0x14009C8B8
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x1400D6600 (KePrepareClockTimerForIdle.c)
 *     KeEstimateClockTickDuration @ 0x14013C120 (KeEstimateClockTickDuration.c)
 * Callees:
 *     KiGetNextTimer2ExpirationDueTime @ 0x14009C9E8 (KiGetNextTimer2ExpirationDueTime.c)
 *     KeIsEmptyAffinityEx @ 0x1400D26B0 (KeIsEmptyAffinityEx.c)
 *     KiFindNextTimerDueTime @ 0x1400DABF0 (KiFindNextTimerDueTime.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x14022DFAC (ExGetNextWakeTimeForDeepSleep.c)
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
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17[5]; // [rsp+20h] [rbp-28h] BYREF
  char v18; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  v8 = a3;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v11 = 1;
    goto LABEL_8;
  }
  if ( !KiSerializeTimerExpiration && !*(_BYTE *)(a1 + 33) && PoDisableSkipTick )
  {
    v11 = 2;
    goto LABEL_8;
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
        goto LABEL_6;
    }
    else
    {
      v16 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
      v13 = v16 & 0x3F;
      if ( ((*(_QWORD *)&KiGroupSchedulingOverQuotaMask[4 * (v16 >> 6) + 4] >> (v16 & 0x3F)) & 1) == 0 )
        goto LABEL_6;
    }
    if ( KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < v6 )
    {
      v6 = KiGenerationEndTick * KeMaximumIncrement;
      v11 = 5;
    }
  }
LABEL_6:
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
          v15 = (unsigned int)(10000 * KiDebugPollInterval);
          if ( v6 - v8 > v15 )
          {
            v6 = v15 + v8;
            v11 = 8;
          }
        }
      }
    }
  }
LABEL_8:
  *a5 = v6;
  result = a6;
  *a6 = v11;
  return result;
}
