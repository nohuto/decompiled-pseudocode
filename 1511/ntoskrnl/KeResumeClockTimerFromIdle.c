/*
 * XREFs of KeResumeClockTimerFromIdle @ 0x140049500
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400474D0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiEventClockStateChange @ 0x14003559C (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x1400355D8 (KiSetPendingTick.c)
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140077160 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KiUpdateTimeAssist @ 0x1400DE214 (KiUpdateTimeAssist.c)
 *     KiGetPendingTick @ 0x1400E7B04 (KiGetPendingTick.c)
 *     KiSendClockInterruptToClockOwner @ 0x1400EC2C0 (KiSendClockInterruptToClockOwner.c)
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     xHalUnmaskInterrupt @ 0x140143830 (xHalUnmaskInterrupt.c)
 *     ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator @ 0x140143840 (ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1401C2E20 (KiAdjustTimersAfterDripsExit.c)
 *     KeFindFirstSetRightAffinityEx @ 0x1401C4CB8 (KeFindFirstSetRightAffinityEx.c)
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
  int v9; // edx
  unsigned int v10; // r8d
  __int32 v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-68h] BYREF
  __int64 v16; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v18[8]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp-38h] BYREF
  int v21; // [rsp+68h] [rbp-30h]

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
  KiUpdateTimeAssist(0LL, &v17, v18);
  v6 = v17;
  KiClockTimerOneShotEndTime = v17;
  if ( KiClockLatencyMeasurementEnabled )
  {
    if ( a1
      && KiClockTimerOwner == CurrentPrcb->Number
      && v17 >= KiClockTimerNextTickTime
      && (unsigned __int8)off_1402D2908() )
    {
      *a1 = v6 - KiClockTimerNextTickTime;
    }
    KiClockLatencyMeasurementEnabled = 0;
  }
  if ( a1
    && KiClockTimerOwner == CurrentPrcb->Number
    && v6 >= KiClockTimerNextTickTime
    && (unsigned __int8)off_1402D2908() )
  {
    *a1 = v6 - KiClockTimerNextTickTime;
  }
  KiClockLatencyMeasurementEnabled = 0;
  if ( KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime < (unsigned __int64)qword_1402E8C88 )
    qword_1402E8C88 = KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime;
  if ( KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime > (unsigned __int64)qword_1402E8C80 )
    qword_1402E8C80 = KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime;
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
    if ( ((KiClockOwnerAllowedCpuSet[((unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6) + 1] >> (KiProcessorIndexToNumberMappingTable[Number] & 0x3F)) & 1) == 0 )
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
  if ( v9 != (_DWORD)Number )
  {
    v4 = 1;
LABEL_39:
    ++qword_1402E8C78;
    v11 = 2;
    KiEventClockStateChange(2, 1, 0LL, 0LL);
    if ( v4 )
    {
      KiClockTimerOwner = Number;
      KiSendClockInterruptToClockOwner(v13, v12);
    }
    goto LABEL_36;
  }
  v10 = KiLastRequestedTimeIncrement;
  if ( (unsigned int)KiLastRequestedTimeIncrement + v6 > KiClockTimerNextTickTime )
    goto LABEL_39;
  if ( v7 )
  {
    CurrentPrcb->ClockOwner = 1;
    KiClockTimerOwner = v9;
    if ( !(unsigned __int8)KiGetPendingTick() )
    {
      off_1402D28F0();
      v10 = KiLastRequestedTimeIncrement;
    }
  }
  v16 = v10;
  v11 = 0;
  off_1402D2900();
  KiSetPendingTick(1);
  KiClockTimerNextTickTime = v6 + (unsigned int)KeTimeIncrement;
  KiEventClockStateChange(0, 1, &v15, &v16);
LABEL_36:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v21 = KiClockTimerOwner;
    v19[0] = &v20;
    v20 = v6;
    v19[1] = 16LL;
    EtwTraceKernelEvent((int)v19, 1, 0x40100000u, 0xF58u, 1538);
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
        LOBYTE(v1) = off_1402D28F0();
      goto LABEL_8;
    }
    CurrentPrcb->ClockOwner = 1;
  }
  if ( CurrentPrcb->ClockOwner )
    goto LABEL_13;
LABEL_8:
  if ( !CurrentPrcb->ClockOwner && (CurrentPrcb->PendingTickFlags & 1) != 0 )
  {
    off_1402D28F8();
    LOBYTE(v1) = KiSetPendingTick(0);
  }
  return v1;
}
