/*
 * XREFs of KePrepareClockTimerForIdle @ 0x1400D6600
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400D83E0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     KiGetNextTimerExpirationDueTime @ 0x14009C8B8 (KiGetNextTimerExpirationDueTime.c)
 *     KiEventClockStateChange @ 0x14009D8BC (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x14009D8F8 (KiSetPendingTick.c)
 *     PoAllProcessorsDeepIdle @ 0x1400BED5C (PoAllProcessorsDeepIdle.c)
 *     RtlGetInterruptTimePrecise @ 0x1400D5040 (RtlGetInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x14014D1D0 (xHalUnmaskInterrupt.c)
 *     PoTraceDynamicTickDisabled @ 0x140207354 (PoTraceDynamicTickDisabled.c)
 */

void __fastcall KePrepareClockTimerForIdle(char a1, unsigned __int64 a2, char a3)
{
  int v3; // ebx
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 v6; // rdi
  __int32 v8; // r12d
  __int64 v9; // r13
  unsigned __int64 v10; // r15
  LARGE_INTEGER InterruptTimePrecise; // r13
  unsigned __int64 v12; // r15
  bool v13; // cf
  unsigned __int64 v14; // [rsp+30h] [rbp-88h] BYREF
  __int64 v15; // [rsp+38h] [rbp-80h] BYREF
  int v16; // [rsp+40h] [rbp-78h] BYREF
  int v17; // [rsp+48h] [rbp-70h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-68h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-58h] BYREF

  v15 = 0LL;
  v3 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = a2;
  if ( (_BYTE)KiDynamicTickDisableReason )
    return;
  if ( a2 <= (unsigned int)KiLastRequestedTimeIncrement )
  {
    v3 = 2;
LABEL_4:
    v16 = v3;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
    {
      v20[1] = 1LL;
      v20[0] = &v16;
      EtwTraceKernelEvent((int)v20, 1, 0x40100000u, 3929, 1538);
    }
    return;
  }
  if ( a2 > KiMaxDynamicTickDuration )
  {
    ++dword_14030DDCC;
    v6 = KiMaxDynamicTickDuration;
  }
  v8 = _InterlockedExchange(&KiClockState, 3);
  if ( !PoAllProcessorsDeepIdle() )
  {
    v3 = 1;
    goto LABEL_28;
  }
  v9 = MEMORY[0xFFFFF78000000008];
  KiGetNextTimerExpirationDueTime((__int64)CurrentPrcb, 1, MEMORY[0xFFFFF78000000008], a1, &v18, &v17);
  v10 = v18;
  if ( a3 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  }
  else
  {
    if ( v18 <= v9 + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
    {
      v3 = 2;
      goto LABEL_28;
    }
    if ( !a1 && KiClockTimerHighLatency )
    {
      if ( KiClockTimerOneShotStartTime )
      {
        if ( (unsigned __int64)(KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime) < 0x2710 )
          ++KiDynamicTickCancellations;
        KiClockTimerOneShotStartTime = 0LL;
      }
      if ( v9 - KiClockTimerOneShotEndTime >= (unsigned __int64)KeMaximumIncrement )
      {
        KiDynamicTickCancellations = 0;
      }
      else if ( (unsigned int)KiDynamicTickCancellations > 3 )
      {
        v3 = 3;
        goto LABEL_28;
      }
    }
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    if ( v10 <= InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
    {
LABEL_33:
      v3 = 4;
      goto LABEL_28;
    }
  }
  if ( v10 <= InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiMinDynamicTickDuration )
    goto LABEL_33;
  v12 = v10 - InterruptTimePrecise.QuadPart;
  v14 = v12;
  if ( v12 > v6 )
  {
    v12 = v6;
    v14 = v6;
  }
  if ( a3 && !a1 )
  {
    v12 = v14;
    if ( v14 > (unsigned int)KiClockLatencyMaxDynamicTickDuration )
      v12 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
    v14 = v12;
  }
  if ( (int)off_1402F25A0() < 0 )
  {
    off_1402F25A0();
    KiSetPendingTick(1);
    v3 = 5;
    KiDynamicTickDisableReason = 2;
    PoTraceDynamicTickDisabled();
  }
  else
  {
    KiSetPendingTick(1);
    KiClockTimerOneShotStartTime = InterruptTimePrecise.QuadPart;
    KiEventClockStateChange(1, v8, &v15, (__int64 *)&v14);
    if ( a3 )
      KiClockLatencyMeasurementEnabled = 1;
    ++qword_14030DDD0;
    v8 = 1;
    v13 = v12 < qword_14030DE08;
    CurrentPrcb->ClockOwner = 0;
    if ( v13 )
      qword_14030DE08 = v12;
    if ( v12 > qword_14030DE00 )
      qword_14030DE00 = v12;
    if ( a1 )
      KiConsiderTimerRebasing = 1;
  }
  KiClockTimerNextTickTime = InterruptTimePrecise.QuadPart + v15;
LABEL_28:
  if ( v8 != 4 )
    _InterlockedExchange(&KiClockState, v8);
  if ( v3 )
    goto LABEL_4;
}
