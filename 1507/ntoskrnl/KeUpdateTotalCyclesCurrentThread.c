/*
 * XREFs of KeUpdateTotalCyclesCurrentThread @ 0x1400F0E94
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x1400F0A40 (KeQueryTotalCycleTimeThread.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140511240 (PsQueryTotalCycleTimeProcess.c)
 *     KeEnableProfiling @ 0x14069905C (KeEnableProfiling.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 */

unsigned __int64 __fastcall KeUpdateTotalCyclesCurrentThread(__int64 a1, unsigned __int64 *a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  char v10; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v12; // r11
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // r9
  unsigned int v16; // edx
  __int64 v17; // r10
  __int64 v18; // rdx
  bool v19; // zf

  _disable();
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->NestingLevel = 1;
  v5 = 3LL;
  v6 = __rdtsc();
  v7 = v6 - CurrentPrcb->StartCycles;
  v8 = v7 + *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = v8;
  v9 = v7 + *(unsigned int *)(a1 + 80);
  CurrentPrcb->StartCycles = v6;
  v10 = *(_BYTE *)(a1 + 2);
  if ( v9 > 0xFFFFFFFF )
    v9 = 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 80) = v9;
  if ( (v10 & 0x3E) != 0 )
  {
    if ( (v10 & 0x10) != 0 )
    {
      CurrentPrcb->TaggedCycles[*(unsigned __int8 *)(a1 + 124)] += CurrentPrcb->StartCycles
                                                                 - CurrentPrcb->TaggedCyclesStart;
      CurrentPrcb->TaggedCyclesStart = 0LL;
      v10 &= ~0x10u;
    }
    if ( (v10 & 0x3E) != 0 )
    {
      if ( (v10 & 0x20) != 0 )
      {
        if ( *(_QWORD *)(a1 + 1952) )
        {
          CurrentFrequency = PpmPerfGetCurrentFrequency(CurrentPrcb);
          v13 = 3LL;
          if ( CurrentFrequency / 0x19 < 3 )
            v13 = CurrentFrequency / 0x19;
          v14 = CurrentPrcb->PowerState.Class + 2 * v13;
          v9 = v7 + *(_QWORD *)(v12 + 8 * v14);
          *(_QWORD *)(v12 + 8 * v14) = v9;
        }
        v10 &= ~0x20u;
      }
      if ( (v10 & 0x3E) != 0 )
      {
        v9 = *(_QWORD *)(a1 + 104);
        if ( v9 )
        {
          for ( v9 += CurrentPrcb->ScbOffset; v9; v9 = *(_QWORD *)(v9 + 392) )
            *(_QWORD *)v9 += v7;
        }
        if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
        {
          v9 = *(_QWORD *)(a1 + 576);
          if ( (v9 & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
            CurrentPrcb->AffinitizedCycles += v7;
        }
        if ( *(_QWORD *)(a1 + 360) )
          KiEndCounterAccumulation(a1);
      }
    }
  }
  if ( a2 )
    *a2 = v6;
  v15 = __rdtsc();
  CurrentPrcb->CycleTime += v15 - CurrentPrcb->StartCycles;
  if ( (*(_BYTE *)(a1 + 2) & 0x20) != 0 )
  {
    v16 = (unsigned int)PpmPerfGetCurrentFrequency(CurrentPrcb) / 0x19;
    if ( v16 < 3 )
      v5 = v16;
    v18 = CurrentPrcb->PowerState.Class + 2 * v5;
    v9 = v17 + CurrentPrcb->Cycles[0][v18];
    CurrentPrcb->Cycles[0][v18] = v9;
  }
  CurrentPrcb->StartCycles = v15;
  if ( (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
    CurrentPrcb->TaggedCyclesStart = v15;
  if ( (*(_BYTE *)(a1 + 2) & 2) != 0 )
    KiBeginCounterAccumulation(a1, 0LL);
  v19 = CurrentPrcb->InterruptRequest == 0;
  CurrentPrcb->NestingLevel = 0;
  if ( !v19 )
  {
    LOBYTE(v9) = 2;
    CurrentPrcb->InterruptRequest = 0;
    HalRequestSoftwareInterrupt(v9);
  }
  _enable();
  return v8;
}
