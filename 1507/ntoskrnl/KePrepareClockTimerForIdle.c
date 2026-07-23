/*
 * XREFs of KePrepareClockTimerForIdle @ 0x1400E6CE0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400A7C10 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1400AC470 (KiGetNextTimerExpirationDueTime.c)
 *     KiSetPendingTick @ 0x1400E6C5C (KiSetPendingTick.c)
 *     KiEventClockStateChange @ 0x1400E6C9C (KiEventClockStateChange.c)
 *     PoAllProcessorsDeepIdle @ 0x1400E701C (PoAllProcessorsDeepIdle.c)
 *     RtlGetInterruptTimePrecise @ 0x1400EA820 (RtlGetInterruptTimePrecise.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x14017DF24 (xHalUnmaskInterrupt.c)
 *     PoTraceDynamicTickDisabled @ 0x14023D0D4 (PoTraceDynamicTickDisabled.c)
 */

void __fastcall KePrepareClockTimerForIdle(unsigned __int8 a1, unsigned __int64 a2, char a3)
{
  int v3; // edi
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int64 v6; // rbp
  __int32 v8; // esi
  __int64 v9; // rdx
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  LARGE_INTEGER InterruptTimePrecise; // r14
  unsigned __int64 v13; // rbx
  bool v14; // cf
  __int64 v15; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-70h] BYREF
  int v17; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-60h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp-58h] BYREF
  int v20; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v21[2]; // [rsp+60h] [rbp-48h] BYREF

  v15 = 0LL;
  v3 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = a2;
  if ( (_BYTE)KiDynamicTickDisableReason )
    return;
  if ( a2 <= (unsigned int)KiLastRequestedTimeIncrement )
  {
    v3 = 2;
LABEL_26:
    v17 = v3;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
    {
      v21[1] = 1LL;
      v21[0] = &v17;
      EtwTraceKernelEvent((int)v21, 1, 0x40100000u, 0xF59u, 1538);
    }
    return;
  }
  if ( a2 > KiMaxDynamicTickDuration )
  {
    ++dword_1403390EC;
    v6 = KiMaxDynamicTickDuration;
  }
  v8 = _InterlockedExchange(&KiClockState, 3);
  if ( !(unsigned __int8)PoAllProcessorsDeepIdle() )
  {
    v3 = 1;
    goto LABEL_23;
  }
  LOBYTE(v9) = 1;
  v10 = MEMORY[0xFFFFF78000000008];
  KiGetNextTimerExpirationDueTime((__int64)CurrentPrcb, v9, MEMORY[0xFFFFF78000000008], a1, &v18, &v20);
  v11 = v18;
  if ( a3 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  }
  else
  {
    if ( v18 <= v10 + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
    {
      v3 = 2;
      goto LABEL_23;
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
        goto LABEL_23;
      }
    }
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    if ( v11 <= InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
      goto LABEL_22;
  }
  if ( v11 <= InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiMinDynamicTickDuration )
  {
LABEL_22:
    v3 = 4;
    goto LABEL_23;
  }
  v13 = v11 - InterruptTimePrecise.QuadPart;
  if ( v13 > v6 )
    v13 = v6;
  v16 = v13;
  if ( a3 && !a1 )
  {
    v13 = v16;
    if ( v16 > (unsigned int)KiClockLatencyMaxDynamicTickDuration )
      v13 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
    v16 = v13;
  }
  if ( (int)off_140321A50() >= 0 )
  {
    KiSetPendingTick(1);
    KiClockTimerOneShotStartTime = InterruptTimePrecise.QuadPart;
    KiEventClockStateChange(1, v8, &v15, (__int64 *)&v16);
    if ( a3 )
      KiClockLatencyMeasurementEnabled = 1;
    ++qword_1403390F0;
    v8 = 1;
    v14 = v13 < qword_140339128;
    CurrentPrcb->ClockOwner = 0;
    if ( v14 )
      qword_140339128 = v13;
    if ( v13 > qword_140339120 )
      qword_140339120 = v13;
    if ( a1 )
      KiConsiderTimerRebasing = 1;
    KiClockTimerNextTickTime = InterruptTimePrecise.QuadPart + v15;
  }
  else
  {
    off_140321A50();
    KiSetPendingTick(1);
    v3 = 5;
    KiDynamicTickDisableReason = 2;
    PoTraceDynamicTickDisabled();
    KiClockTimerNextTickTime = InterruptTimePrecise.QuadPart + v15;
  }
LABEL_23:
  if ( v8 != 4 )
    _InterlockedExchange(&KiClockState, v8);
  if ( v3 )
    goto LABEL_26;
}
