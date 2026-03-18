/*
 * XREFs of KiFreezeTargetExecution @ 0x140206774
 * Callers:
 *     KiProcessNMI @ 0x1401FF5DC (KiProcessNMI.c)
 *     KiAcquireSpinLockCheckForFreeze @ 0x140200EF4 (KiAcquireSpinLockCheckForFreeze.c)
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiRestoreProcessorControlState @ 0x1401829D0 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x140182A80 (KiSaveProcessorControlState.c)
 *     RtlCaptureContext @ 0x14018B560 (RtlCaptureContext.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KeFlushCurrentTbImmediately @ 0x140203C84 (KeFlushCurrentTbImmediately.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     KiCheckStall @ 0x1402066EC (KiCheckStall.c)
 *     KiSetDebuggerOwner @ 0x140206EA0 (KiSetDebuggerOwner.c)
 *     KiRestoreProcessorState @ 0x14020ADAC (KiRestoreProcessorState.c)
 *     KiSaveProcessorState @ 0x14020AEAC (KiSaveProcessorState.c)
 *     VfStartBranchTracing @ 0x140744694 (VfStartBranchTracing.c)
 *     VfStopBranchTracing @ 0x140744718 (VfStopBranchTracing.c)
 */

__int64 __fastcall KiFreezeTargetExecution(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 result; // rax
  __int16 v6; // bp
  bool v7; // bp
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CurrentThread; // rdi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  char v15; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v17; // r10
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // r9
  unsigned int v21; // eax
  __int64 v22; // r10
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // edx
  _KTHREAD *v26; // rcx
  unsigned __int64 v27; // r9
  unsigned int v28; // eax
  __int64 v29; // rcx
  _QWORD v30[20]; // [rsp+20h] [rbp-E8h] BYREF
  int v31; // [rsp+100h] [rbp-8h]

  v4 = 3LL;
  if ( KiFreezeExecutionLock
    || KiFreezeLockBackup
    || (result = (unsigned int)KiBugCheckActive, (KiBugCheckActive & 3) != 0) )
  {
    if ( ViVerifierEnabled )
      VfStopBranchTracing();
    v6 = v31;
    _disable();
    v7 = (v6 & 0x200) != 0;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !CurrentPrcb->NestingLevel && !PoAllProcIntrDisabled )
    {
      CurrentThread = (__int64)CurrentPrcb->CurrentThread;
      CurrentPrcb->NestingLevel = 1;
      v11 = __rdtsc();
      v12 = v11 - CurrentPrcb->StartCycles;
      v13 = v12 + *(unsigned int *)(CurrentThread + 80);
      *(_QWORD *)(CurrentThread + 72) += v12;
      v14 = 0xFFFFFFFFLL;
      CurrentPrcb->StartCycles = v11;
      v15 = *(_BYTE *)(CurrentThread + 2);
      if ( v13 > 0xFFFFFFFF )
        LODWORD(v13) = -1;
      *(_DWORD *)(CurrentThread + 80) = v13;
      if ( (v15 & 0x3E) != 0 )
      {
        if ( (v15 & 0x10) != 0 )
        {
          CurrentPrcb->TaggedCycles[*(unsigned __int8 *)(CurrentThread + 124)] += CurrentPrcb->StartCycles
                                                                                - CurrentPrcb->TaggedCyclesStart;
          v15 &= ~0x10u;
          CurrentPrcb->TaggedCyclesStart = 0LL;
        }
        if ( (v15 & 0x3E) != 0 )
        {
          if ( (v15 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(CurrentThread + 1952) )
            {
              CurrentFrequency = PpmPerfGetCurrentFrequency((__int64)CurrentPrcb);
              v18 = 3LL;
              if ( CurrentFrequency / 0x19 < 3 )
                v18 = CurrentFrequency / 0x19;
              v19 = CurrentPrcb->PowerState.Class + 2 * v18;
              v14 = v12 + *(_QWORD *)(v17 + 8 * v19);
              *(_QWORD *)(v17 + 8 * v19) = v14;
            }
            v15 &= ~0x20u;
          }
          if ( (v15 & 0x3E) != 0 )
          {
            v14 = *(_QWORD *)(CurrentThread + 104);
            if ( v14 )
            {
              for ( v14 += CurrentPrcb->ScbOffset; v14; v14 = *(_QWORD *)(v14 + 392) )
                *(_QWORD *)v14 += v12;
            }
            if ( (*(_BYTE *)(CurrentThread + 2) & 8) != 0 )
            {
              v14 = *(_QWORD *)(CurrentThread + 576);
              if ( (v14 & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
                CurrentPrcb->AffinitizedCycles += v12;
            }
            if ( *(_QWORD *)(CurrentThread + 360) )
              KiEndCounterAccumulation(CurrentThread);
          }
        }
      }
      v20 = __rdtsc();
      CurrentPrcb->CycleTime += v20 - CurrentPrcb->StartCycles;
      if ( (*(_BYTE *)(CurrentThread + 2) & 0x20) != 0 )
      {
        v21 = PpmPerfGetCurrentFrequency((__int64)CurrentPrcb);
        v23 = 3LL;
        if ( v21 / 0x19 < 3 )
          v23 = v21 / 0x19;
        v24 = CurrentPrcb->PowerState.Class + 2 * v23;
        v14 = v22 + CurrentPrcb->Cycles[0][v24];
        CurrentPrcb->Cycles[0][v24] = v14;
      }
      CurrentPrcb->StartCycles = v20;
      if ( (*(_BYTE *)(CurrentThread + 2) & 0x10) != 0 )
        CurrentPrcb->TaggedCyclesStart = v20;
      if ( (*(_BYTE *)(CurrentThread + 2) & 2) != 0 )
        KiBeginCounterAccumulation(CurrentThread, 0);
      CurrentPrcb->NestingLevel = 0;
      if ( CurrentPrcb->InterruptRequest )
      {
        LOBYTE(v14) = 2;
        CurrentPrcb->InterruptRequest = 0;
        HalRequestSoftwareInterrupt(v14);
      }
    }
    CurrentPrcb->IpiFrozen = 2;
    off_1403218F8();
    if ( a1 )
    {
      KiSaveProcessorState(a1, a2);
    }
    else
    {
      RtlCaptureContext(CurrentPrcb->Context);
      KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v25);
    }
    KeQueryPerformanceCounter(0LL);
    while ( (CurrentPrcb->IpiFrozen & 0xF) == 2 )
    {
      if ( CurrentPrcb == (struct _KPRCB *)KiDebuggerOwner )
      {
        memset(v30, 0, 0x98uLL);
        LODWORD(v30[0]) = -2147483641;
        v30[1] = v30;
        v30[2] = CurrentPrcb->Context->Rip;
        if ( (unsigned __int8)KiDebugSwitchRoutine(v30, CurrentPrcb->Context, 0LL) != 3 )
          KiSetDebuggerOwner(KiFreezeOwner);
      }
      KiCheckStall((__int64)CurrentPrcb, 1);
    }
    off_1403218F8();
    if ( a1 )
      KiRestoreProcessorState(a1, a2);
    else
      KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
    KeFlushCurrentTbImmediately();
    CurrentPrcb->IpiFrozen = 0;
    if ( !CurrentPrcb->NestingLevel && !PoAllProcIntrDisabled )
    {
      v26 = CurrentPrcb->CurrentThread;
      v27 = __rdtsc() - CurrentPrcb->StartCycles;
      CurrentPrcb->CycleTime += v27;
      if ( (v26->Header.Size & 0x20) != 0 )
      {
        v28 = PpmPerfGetCurrentFrequency((__int64)CurrentPrcb);
        if ( v28 / 0x19 < 3 )
          v4 = v28 / 0x19;
        CurrentPrcb->Cycles[v4][CurrentPrcb->PowerState.Class] += v27;
      }
      v29 = (__int64)CurrentPrcb->CurrentThread;
      CurrentPrcb->StartCycles += v27;
      if ( (*(_BYTE *)(v29 + 2) & 2) != 0 )
        KiBeginCounterAccumulation(v29, 0);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v7 )
      _enable();
    if ( ViVerifierEnabled )
      return VfStartBranchTracing();
  }
  return result;
}
