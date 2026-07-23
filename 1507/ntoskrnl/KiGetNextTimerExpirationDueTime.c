/*
 * XREFs of KiGetNextTimerExpirationDueTime @ 0x1400AC470
 * Callers:
 *     PpmIdlePrepare @ 0x1400A91A0 (PpmIdlePrepare.c)
 *     KePrepareClockTimerForIdle @ 0x1400E6CE0 (KePrepareClockTimerForIdle.c)
 *     KeEstimateClockTickDuration @ 0x1401615C0 (KeEstimateClockTickDuration.c)
 * Callees:
 *     KiFindNextTimerDueTime @ 0x1400AA860 (KiFindNextTimerDueTime.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x1402644F4 (ExGetNextWakeTimeForDeepSleep.c)
 */

int *__fastcall KiGetNextTimerExpirationDueTime(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        int *a6)
{
  __int64 v6; // rbx
  char v7; // r14
  char v9; // si
  unsigned __int64 v11; // r10
  int v12; // ebp
  unsigned __int64 NextWakeTimeForDeepSleep; // rax
  unsigned __int16 v14; // ax
  char v15; // r8
  unsigned __int64 v16; // rdx
  __int64 *v17; // rcx
  int *result; // rax
  unsigned __int64 v19; // rax

  v6 = 0LL;
  v7 = a4;
  v9 = a2;
  v11 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v12 = 1;
    goto LABEL_22;
  }
  if ( !*(_BYTE *)(a1 + 33) && !KiSerializeTimerExpiration && PoDisableSkipTick )
  {
    v12 = 2;
    goto LABEL_22;
  }
  v12 = 4;
  if ( (_BYTE)a4 )
    NextWakeTimeForDeepSleep = ExGetNextWakeTimeForDeepSleep(a1, a2, a3, a4);
  else
    NextWakeTimeForDeepSleep = KiFindNextTimerDueTime(a1, a3, a2);
  v11 = NextWakeTimeForDeepSleep;
  if ( KiGroupSchedulingEnabled )
  {
    if ( v9 )
    {
      v14 = 0;
      if ( KiGroupSchedulingOverQuotaMask[0] )
      {
        while ( !qword_14031E928[v14] )
        {
          if ( ++v14 >= (unsigned int)KiGroupSchedulingOverQuotaMask[0] )
            goto LABEL_10;
        }
        goto LABEL_28;
      }
    }
    else
    {
      v19 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
      if ( (((unsigned __int64)qword_14031E928[v19 >> 6] >> (v19 & 0x3F)) & 1) != 0 )
      {
LABEL_28:
        if ( KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < v11 )
        {
          v11 = KiGenerationEndTick * KeMaximumIncrement;
          v12 = 5;
        }
      }
    }
  }
LABEL_10:
  if ( *(_BYTE *)(a1 + 33) )
  {
    v15 = 0;
    v16 = -1LL;
    if ( !v7 )
    {
      v17 = &qword_140338D90;
      do
      {
        if ( v6 != 3 && *v17 < v16 )
          v16 = *v17;
        ++v6;
        v17 += 3;
      }
      while ( (__int64)v17 < (__int64)&KiHighResolutionTimerClockIntervalRequest.Children[1] );
    }
    if ( qword_140338DA8 < v16 )
    {
      v16 = qword_140338DA8;
      v15 = 1;
    }
    if ( v16 < v11 )
    {
      v11 = v16;
      v12 = 6;
      if ( v15 )
        v12 = 7;
    }
  }
  if ( v9 && !(_BYTE)KdDebuggerNotPresent && (_BYTE)KdDebuggerEnabled && a3 < v11 && v11 - a3 > 0x1312D00 )
  {
    v11 = a3 + 150000000;
    if ( !v7 )
      v11 = a3 + 20000000;
    v12 = 8;
  }
LABEL_22:
  *a5 = v11;
  result = a6;
  *a6 = v12;
  return result;
}
