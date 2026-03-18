/*
 * XREFs of KeResumeClockTimerFromIdle @ 0x1400AA190
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400A7C10 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     KiUpdateTimeAssist @ 0x1400A3B90 (KiUpdateTimeAssist.c)
 *     KiSendClockInterruptToClockOwner @ 0x1400D5F78 (KiSendClockInterruptToClockOwner.c)
 *     KiSetPendingTick @ 0x1400E6C5C (KiSetPendingTick.c)
 *     KiEventClockStateChange @ 0x1400E6C9C (KiEventClockStateChange.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1400EA560 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KiGetPendingTick @ 0x140128FC8 (KiGetPendingTick.c)
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x1401718C0 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     xHalUnmaskInterrupt @ 0x14017DF24 (xHalUnmaskInterrupt.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1401FEB94 (KiAdjustTimersAfterDripsExit.c)
 */

__int64 __fastcall KeResumeClockTimerFromIdle(_DWORD *a1)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  char v4; // r14
  signed __int32 v5; // eax
  unsigned __int64 v6; // rsi
  char v7; // cl
  __int64 Number; // r8
  int v9; // edi
  __int16 v10; // dx
  unsigned __int64 v11; // rcx
  __int32 v12; // ebp
  struct _KPRCB *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  char v16[8]; // [rsp+30h] [rbp-78h] BYREF
  int v17; // [rsp+38h] [rbp-70h]
  __int64 v18; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-60h] BYREF
  char v20[8]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v21[2]; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-40h] BYREF
  int v23; // [rsp+70h] [rbp-38h]

  result = (unsigned __int8)KiDynamicTickDisableReason;
  if ( (_BYTE)KiDynamicTickDisableReason )
    return result;
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  if ( a1 )
    *a1 = -1;
  while ( 1 )
  {
    v5 = KiClockState;
    if ( KiClockState == 1 )
    {
      v5 = _InterlockedCompareExchange(&KiClockState, 3, 1);
      if ( v5 == 1 )
        break;
    }
    if ( v5 != 3 )
      goto LABEL_43;
    _mm_pause();
  }
  KiUpdateTimeAssist(0LL, (__int64)&v19, (__int64)v20);
  v6 = v19;
  KiClockTimerOneShotEndTime = v19;
  if ( KiClockLatencyMeasurementEnabled )
  {
    if ( a1
      && KiClockTimerOwner == CurrentPrcb->Number
      && v19 >= KiClockTimerNextTickTime
      && (unsigned __int8)off_140321A58() )
    {
      *a1 = v6 - KiClockTimerNextTickTime;
    }
    KiClockLatencyMeasurementEnabled = 0;
  }
  if ( a1
    && KiClockTimerOwner == CurrentPrcb->Number
    && v6 >= KiClockTimerNextTickTime
    && (unsigned __int8)off_140321A58() )
  {
    *a1 = v6 - KiClockTimerNextTickTime;
  }
  KiClockLatencyMeasurementEnabled = 0;
  if ( KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime < (unsigned __int64)qword_140339108 )
    qword_140339108 = KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime;
  if ( KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime > (unsigned __int64)qword_140339100 )
    qword_140339100 = KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime;
  if ( KiConsiderTimerRebasing )
  {
    KiAdjustTimersAfterDripsExit(CurrentPrcb);
    KiConsiderTimerRebasing = 0;
  }
  v7 = KiClockTimerPerCpu;
  if ( KiClockTimerPerCpu )
  {
    KeQuerySystemAllowedCpuSetAffinity(KiClockOwnerAllowedCpuSet, &KiClockOwnerAllowedCpuSetVersion);
    Number = CurrentPrcb->Number;
    if ( ((KiClockOwnerAllowedCpuSet[((unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6) + 1] >> (KiProcessorIndexToNumberMappingTable[Number] & 0x3F)) & 1) != 0 )
      goto LABEL_34;
    v10 = 0;
    if ( !(_WORD)KiIntSteerMask )
      goto LABEL_34;
    while ( !qword_1403328C8[v10] )
    {
      if ( ++v10 >= (int)(unsigned __int16)KiIntSteerMask )
        goto LABEL_34;
    }
    _BitScanForward64(&v11, qword_1403328C8[v10]);
    v17 = v11;
    v9 = KiProcessorNumberToIndexMappingTable[(unsigned int)(v11 + (v10 << 6))];
    if ( v9 == -1 )
LABEL_34:
      v9 = Number;
    v7 = KiClockTimerPerCpu;
  }
  else
  {
    LODWORD(Number) = CurrentPrcb->Number;
    v9 = Number;
  }
  if ( (_DWORD)Number == v9 )
  {
    v14 = (unsigned int)KiLastRequestedTimeIncrement;
    if ( v6 + (unsigned int)KiLastRequestedTimeIncrement <= KiClockTimerNextTickTime )
    {
      if ( v7 )
      {
        CurrentPrcb->ClockOwner = 1;
        KiClockTimerOwner = Number;
        if ( !(unsigned __int8)KiGetPendingTick() )
        {
          off_140321A40();
          v14 = (unsigned int)KiLastRequestedTimeIncrement;
        }
      }
      v18 = v14;
      v12 = 0;
      off_140321A50();
      LOBYTE(v15) = 1;
      KiSetPendingTick(v15);
      KiClockTimerNextTickTime = v6 + (unsigned int)KeTimeIncrement;
      KiEventClockStateChange(0LL, 1LL, v16, &v18);
      goto LABEL_40;
    }
  }
  else
  {
    v4 = 1;
  }
  ++qword_1403390F8;
  v12 = 2;
  KiEventClockStateChange(2LL, 1LL, 0LL, 0LL);
  if ( v4 )
  {
    KiClockTimerOwner = v9;
    KiSendClockInterruptToClockOwner();
  }
LABEL_40:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v23 = KiClockTimerOwner;
    v21[0] = &v22;
    v22 = v6;
    v21[1] = 16LL;
    EtwTraceKernelEvent((int)v21, 1, 0x40100000u, 0xF58u, 1538);
  }
  _InterlockedExchange(&KiClockState, v12);
LABEL_43:
  result = (unsigned int)KiClockTimerOwner;
  if ( KiClockTimerOwner == CurrentPrcb->Number )
  {
    if ( CurrentPrcb->ClockOwner )
      goto LABEL_47;
    CurrentPrcb->ClockOwner = 1;
  }
  if ( CurrentPrcb->ClockOwner )
  {
LABEL_47:
    if ( KiClockTimerPerCpu )
      v13 = KeGetCurrentPrcb();
    else
      v13 = (struct _KPRCB *)KiProcessorBlock[result];
    result = v13->PendingTickFlags;
    if ( (result & 1) == 0 )
      result = off_140321A40();
  }
  if ( !CurrentPrcb->ClockOwner && (CurrentPrcb->PendingTickFlags & 1) != 0 )
  {
    off_140321A48();
    return KiSetPendingTick(0LL);
  }
  return result;
}
