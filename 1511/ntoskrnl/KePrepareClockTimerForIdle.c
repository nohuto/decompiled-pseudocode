/*
 * XREFs of KePrepareClockTimerForIdle @ 0x140032D00
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400474D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     PoAllProcessorsDeepIdle @ 0x140032F58 (PoAllProcessorsDeepIdle.c)
 *     RtlGetInterruptTimePrecise @ 0x1400351D0 (RtlGetInterruptTimePrecise.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1400352DC (KiGetNextTimerExpirationDueTime.c)
 *     KiEventClockStateChange @ 0x14003559C (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x1400355D8 (KiSetPendingTick.c)
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x140143830 (xHalUnmaskInterrupt.c)
 *     PoTraceDynamicTickDisabled @ 0x1401EEA1C (PoTraceDynamicTickDisabled.c)
 */

void __fastcall KePrepareClockTimerForIdle(unsigned __int8 a1, unsigned __int64 a2, char a3)
{
  int v3; // ebx
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 v6; // rdi
  unsigned __int32 v8; // r12d
  int v9; // edx
  __int64 v10; // r13
  unsigned __int64 v11; // r15
  LARGE_INTEGER InterruptTimePrecise; // r13
  unsigned __int64 v13; // r15
  __int64 v14; // rcx
  bool v15; // cf
  __int64 v16; // rcx
  __int64 v17; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-80h] BYREF
  int v19; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-70h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v22[8]; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v23[2]; // [rsp+60h] [rbp-58h] BYREF

  v17 = 0LL;
  v3 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = a2;
  if ( (_BYTE)KiDynamicTickDisableReason )
    return;
  if ( a2 <= (unsigned int)KiLastRequestedTimeIncrement )
  {
    v3 = 2;
LABEL_4:
    v19 = v3;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
    {
      v23[1] = 1LL;
      v23[0] = &v19;
      EtwTraceKernelEvent((unsigned int)v23, 1, 1074790400, 3929, 1538);
    }
    return;
  }
  if ( a2 > KiMaxDynamicTickDuration )
  {
    ++dword_1402E8C6C;
    v6 = KiMaxDynamicTickDuration;
  }
  v8 = _InterlockedExchange(&KiClockState, 3);
  if ( !(unsigned __int8)PoAllProcessorsDeepIdle() )
  {
    v3 = 1;
    goto LABEL_28;
  }
  LOBYTE(v9) = 1;
  v10 = MEMORY[0xFFFFF78000000008];
  KiGetNextTimerExpirationDueTime((_DWORD)CurrentPrcb, v9, MEMORY[0xFFFFF78000000008], a1, (__int64)&v20, (__int64)v22);
  v11 = v20;
  if ( a3 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  }
  else
  {
    if ( v20 <= v10 + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
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
      if ( v10 - KiClockTimerOneShotEndTime >= (unsigned __int64)KeMaximumIncrement )
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
    if ( v11 <= InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
    {
LABEL_33:
      v3 = 4;
      goto LABEL_28;
    }
  }
  if ( v11 <= InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiMinDynamicTickDuration )
    goto LABEL_33;
  v13 = v11 - InterruptTimePrecise.QuadPart;
  v18 = v13;
  if ( v13 > v6 )
  {
    v13 = v6;
    v18 = v6;
  }
  if ( a3 && !a1 )
  {
    v13 = v18;
    if ( v18 > (unsigned int)KiClockLatencyMaxDynamicTickDuration )
      v13 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
    v18 = v13;
  }
  if ( (int)off_1402D2900() < 0 )
  {
    off_1402D2900();
    LOBYTE(v16) = 1;
    KiSetPendingTick(v16);
    v3 = 5;
    KiDynamicTickDisableReason = 2;
    PoTraceDynamicTickDisabled();
  }
  else
  {
    LOBYTE(v14) = 1;
    KiSetPendingTick(v14);
    KiClockTimerOneShotStartTime = InterruptTimePrecise.QuadPart;
    KiEventClockStateChange(1LL, v8, &v17, &v18);
    if ( a3 )
      KiClockLatencyMeasurementEnabled = 1;
    ++qword_1402E8C70;
    v8 = 1;
    v15 = v13 < qword_1402E8CA8;
    CurrentPrcb->ClockOwner = 0;
    if ( v15 )
      qword_1402E8CA8 = v13;
    if ( v13 > qword_1402E8CA0 )
      qword_1402E8CA0 = v13;
    if ( a1 )
      KiConsiderTimerRebasing = 1;
  }
  KiClockTimerNextTickTime = InterruptTimePrecise.QuadPart + v17;
LABEL_28:
  if ( v8 != 4 )
    _InterlockedExchange(&KiClockState, v8);
  if ( v3 )
    goto LABEL_4;
}
