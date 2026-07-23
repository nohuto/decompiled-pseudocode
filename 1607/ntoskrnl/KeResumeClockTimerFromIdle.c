/*
 * XREFs of KeResumeClockTimerFromIdle @ 0x1400DA910
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400D83E0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     KiUpdateTimeAssist @ 0x140083FD0 (KiUpdateTimeAssist.c)
 *     KiSendClockInterruptToClockOwner @ 0x14009D67C (KiSendClockInterruptToClockOwner.c)
 *     KiEventClockStateChange @ 0x14009D8BC (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x14009D8F8 (KiSetPendingTick.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x14009E1B8 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KiGetPendingTick @ 0x1400AB1D8 (KiGetPendingTick.c)
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x14014D1D0 (xHalUnmaskInterrupt.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140159800 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1401D23D0 (KiAdjustTimersAfterDripsExit.c)
 *     KeFindFirstSetRightAffinityEx @ 0x1401D3CB8 (KeFindFirstSetRightAffinityEx.c)
 */

char __fastcall KeResumeClockTimerFromIdle(_DWORD *a1)
{
  unsigned __int64 v1; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  char v4; // si
  signed __int32 v5; // eax
  unsigned __int64 v6; // rbp
  char v7; // cl
  __int64 Number; // r14
  int v9; // r8d
  __int64 v10; // rdx
  __int32 v11; // edi
  unsigned __int64 v13; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+38h] [rbp-60h] BYREF
  __int64 v15; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v16[8]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp-38h] BYREF
  int v19; // [rsp+68h] [rbp-30h]

  LOBYTE(v1) = KiDynamicTickDisableReason;
  if ( (_BYTE)KiDynamicTickDisableReason )
    return v1;
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
      goto LABEL_6;
    _mm_pause();
  }
  KiUpdateTimeAssist(0LL, (__int64)&v13, (__int64)v16);
  v6 = v13;
  KiClockTimerOneShotEndTime = v13;
  if ( KiClockLatencyMeasurementEnabled )
  {
    if ( a1
      && KiClockTimerOwner == CurrentPrcb->Number
      && v13 >= KiClockTimerNextTickTime
      && (unsigned __int8)off_1402F25A8() )
    {
      *a1 = v6 - KiClockTimerNextTickTime;
    }
    KiClockLatencyMeasurementEnabled = 0;
  }
  if ( a1
    && KiClockTimerOwner == CurrentPrcb->Number
    && v6 >= KiClockTimerNextTickTime
    && (unsigned __int8)off_1402F25A8() )
  {
    *a1 = v6 - KiClockTimerNextTickTime;
  }
  KiClockLatencyMeasurementEnabled = 0;
  if ( KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime < (unsigned __int64)qword_14030DDE8 )
    qword_14030DDE8 = KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime;
  if ( KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime > (unsigned __int64)qword_14030DDE0 )
    qword_14030DDE0 = KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime;
  if ( KiConsiderTimerRebasing )
  {
    KiAdjustTimersAfterDripsExit(CurrentPrcb);
    KiConsiderTimerRebasing = 0;
  }
  v7 = KiClockTimerPerCpu;
  if ( KiClockTimerPerCpu )
  {
    KeQuerySystemAllowedCpuSetAffinity(&KiClockOwnerAllowedCpuSet, KiClockOwnerAllowedCpuSetVersion);
    Number = CurrentPrcb->Number;
    if ( ((*((_QWORD *)&KiClockOwnerAllowedCpuSet + ((unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6)
                                                  + 1) >> (KiProcessorIndexToNumberMappingTable[Number] & 0x3F)) & 1) == 0 )
    {
      LODWORD(Number) = KeFindFirstSetRightAffinityEx(&KiIntSteerMask);
      if ( (_DWORD)Number == -1 )
        LODWORD(Number) = CurrentPrcb->Number;
    }
    v7 = KiClockTimerPerCpu;
  }
  else
  {
    LODWORD(Number) = CurrentPrcb->Number;
  }
  v9 = CurrentPrcb->Number;
  if ( v9 == (_DWORD)Number )
  {
    v10 = (unsigned int)KiLastRequestedTimeIncrement;
    if ( (unsigned int)KiLastRequestedTimeIncrement + v6 <= KiClockTimerNextTickTime )
    {
      if ( v7 )
      {
        CurrentPrcb->ClockOwner = 1;
        KiClockTimerOwner = v9;
        if ( !KiGetPendingTick() )
        {
          off_1402F2590();
          v10 = (unsigned int)KiLastRequestedTimeIncrement;
        }
      }
      v14 = v10;
      v11 = 0;
      off_1402F25A0();
      KiSetPendingTick(1);
      KiClockTimerNextTickTime = v6 + (unsigned int)KeTimeIncrement;
      KiEventClockStateChange(0, 1, &v15, &v14);
      goto LABEL_34;
    }
  }
  else
  {
    v4 = 1;
  }
  ++qword_14030DDD8;
  v11 = 2;
  KiEventClockStateChange(2, 1, 0LL, 0LL);
  if ( v4 )
  {
    KiClockTimerOwner = Number;
    KiSendClockInterruptToClockOwner();
  }
LABEL_34:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v19 = KiClockTimerOwner;
    v17[0] = &v18;
    v18 = v6;
    v17[1] = 16LL;
    EtwTraceKernelEvent((int)v17, 1, 0x40100000u, 3928, 1538);
  }
  _InterlockedExchange(&KiClockState, v11);
LABEL_6:
  v1 = (unsigned int)KiClockTimerOwner;
  if ( KiClockTimerOwner == CurrentPrcb->Number )
  {
    if ( CurrentPrcb->ClockOwner )
    {
LABEL_13:
      if ( KiClockTimerPerCpu )
        v1 = (unsigned __int64)KeGetCurrentPrcb();
      else
        v1 = KiProcessorBlock[v1];
      LOBYTE(v1) = *(_BYTE *)(v1 + 34);
      if ( (v1 & 1) == 0 )
        LOBYTE(v1) = off_1402F2590();
      goto LABEL_8;
    }
    CurrentPrcb->ClockOwner = 1;
  }
  if ( CurrentPrcb->ClockOwner )
    goto LABEL_13;
LABEL_8:
  if ( !CurrentPrcb->ClockOwner && (CurrentPrcb->PendingTickFlags & 1) != 0 )
  {
    off_1402F2598();
    LOBYTE(v1) = KiSetPendingTick(0);
  }
  return v1;
}
