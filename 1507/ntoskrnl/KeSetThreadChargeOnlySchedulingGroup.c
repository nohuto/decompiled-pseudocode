/*
 * XREFs of KeSetThreadChargeOnlySchedulingGroup @ 0x14003237C
 * Callers:
 *     IopProcessWorkItem @ 0x140032200 (IopProcessWorkItem.c)
 *     PsImpersonateContainerOfThread @ 0x14003262C (PsImpersonateContainerOfThread.c)
 *     NtRevertContainerImpersonation @ 0x140244494 (NtRevertContainerImpersonation.c)
 *     PsImpersonateContainerOfProcess @ 0x1402444F4 (PsImpersonateContainerOfProcess.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 */

char __fastcall KeSetThreadChargeOnlySchedulingGroup(__int64 a1, __int64 a2)
{
  bool v4; // zf
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v14; // r10
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // r9
  unsigned int v18; // edx
  __int64 v19; // r10
  __int64 v20; // rdx
  unsigned int v21; // ebp

  if ( (*(_DWORD *)(a1 + 120) & 0x100) != 0 )
  {
    v4 = a2 == 0;
  }
  else
  {
    if ( !a2 )
      return 0;
    v4 = *(_QWORD *)(a1 + 104) == 0LL;
  }
  if ( !v4 )
    return 0;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  CurrentPrcb->NestingLevel = 1;
  v7 = 3LL;
  v8 = __rdtsc();
  v9 = v8 - CurrentPrcb->StartCycles;
  v10 = v9 + *(unsigned int *)(a1 + 80);
  *(_QWORD *)(a1 + 72) += v9;
  v11 = 0xFFFFFFFFLL;
  CurrentPrcb->StartCycles = v8;
  v12 = *(_BYTE *)(a1 + 2);
  if ( v10 > 0xFFFFFFFF )
    LODWORD(v10) = -1;
  *(_DWORD *)(a1 + 80) = v10;
  if ( (v12 & 0x3E) != 0 )
  {
    if ( (v12 & 0x10) != 0 )
    {
      CurrentPrcb->TaggedCycles[*(unsigned __int8 *)(a1 + 124)] += CurrentPrcb->StartCycles
                                                                 - CurrentPrcb->TaggedCyclesStart;
      v12 &= ~0x10u;
      CurrentPrcb->TaggedCyclesStart = 0LL;
    }
    if ( (v12 & 0x3E) != 0 )
    {
      if ( (v12 & 0x20) != 0 )
      {
        if ( *(_QWORD *)(a1 + 1952) )
        {
          CurrentFrequency = PpmPerfGetCurrentFrequency(CurrentPrcb);
          v15 = 3LL;
          if ( CurrentFrequency / 0x19 < 3 )
            v15 = CurrentFrequency / 0x19;
          v16 = CurrentPrcb->PowerState.Class + 2 * v15;
          v11 = v9 + *(_QWORD *)(v14 + 8 * v16);
          *(_QWORD *)(v14 + 8 * v16) = v11;
        }
        v12 &= ~0x20u;
      }
      if ( (v12 & 0x3E) != 0 )
      {
        v11 = *(_QWORD *)(a1 + 104);
        if ( v11 )
        {
          for ( v11 += CurrentPrcb->ScbOffset; v11; v11 = *(_QWORD *)(v11 + 392) )
            *(_QWORD *)v11 += v9;
        }
        if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
        {
          v11 = *(_QWORD *)(a1 + 576);
          if ( (v11 & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
            CurrentPrcb->AffinitizedCycles += v9;
        }
        if ( *(_QWORD *)(a1 + 360) )
          KiEndCounterAccumulation(a1);
      }
    }
  }
  v17 = __rdtsc();
  CurrentPrcb->CycleTime += v17 - CurrentPrcb->StartCycles;
  if ( (*(_BYTE *)(a1 + 2) & 0x20) != 0 )
  {
    v18 = (unsigned int)PpmPerfGetCurrentFrequency(CurrentPrcb) / 0x19;
    if ( v18 < 3 )
      v7 = v18;
    v20 = CurrentPrcb->PowerState.Class + 2 * v7;
    v11 = CurrentPrcb->Cycles[0][v20] + v19;
    CurrentPrcb->Cycles[0][v20] = v11;
  }
  CurrentPrcb->StartCycles = v17;
  if ( (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
    CurrentPrcb->TaggedCyclesStart = v17;
  if ( (*(_BYTE *)(a1 + 2) & 2) != 0 )
    KiBeginCounterAccumulation(a1, 0LL);
  CurrentPrcb->NestingLevel = 0;
  if ( CurrentPrcb->InterruptRequest )
  {
    LOBYTE(v11) = 2;
    CurrentPrcb->InterruptRequest = 0;
    HalRequestSoftwareInterrupt(v11);
  }
  _enable();
  v21 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
  {
    do
    {
      if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v21);
    }
    while ( CurrentPrcb->PrcbLock );
  }
  if ( a2 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 8u);
    *(_QWORD *)(a1 + 104) = a2;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  }
  else
  {
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 8u);
  }
  _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
  __writecr8(0LL);
  return 1;
}
