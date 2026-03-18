/*
 * XREFs of KeFreezeExecution @ 0x140205F0C
 * Callers:
 *     ExpWaitForBootDevices @ 0x140262A78 (ExpWaitForBootDevices.c)
 *     KdEnterDebugger @ 0x14072AC78 (KdEnterDebugger.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     PpmPerfGetCurrentFrequency @ 0x14017063C (PpmPerfGetCurrentFrequency.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x140201108 (KiTryToAcquireSpinLockInstrumented.c)
 *     KiBeginCounterAccumulation @ 0x140204F4C (KiBeginCounterAccumulation.c)
 *     KiEndCounterAccumulation @ 0x140205058 (KiEndCounterAccumulation.c)
 *     KiSendFreeze @ 0x140206BC0 (KiSendFreeze.c)
 *     KiSetDebuggerOwner @ 0x140206EA0 (KiSetDebuggerOwner.c)
 *     RtlWriteTryAcquireTickLock @ 0x14024AFD4 (RtlWriteTryAcquireTickLock.c)
 */

char KeFreezeExecution()
{
  unsigned int v0; // ebp
  unsigned int v1; // ebp
  unsigned __int8 CurrentIrql; // r15
  int v3; // esi
  char v4; // di
  unsigned int v5; // esi
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CurrentThread; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // r11
  unsigned __int64 v10; // rcx
  char v11; // r9
  unsigned int CurrentFrequency; // eax
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // r9
  unsigned int v17; // eax
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // rbx
  unsigned __int16 i; // di
  unsigned __int64 v27; // rdx
  __int64 v28; // r14
  LARGE_INTEGER v29; // rax
  unsigned __int64 v30; // r9
  LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-F8h] BYREF
  int v33; // [rsp+28h] [rbp-F0h]
  _DWORD v34[2]; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD v35[21]; // [rsp+38h] [rbp-E0h] BYREF
  unsigned int v36; // [rsp+110h] [rbp-8h]

  v0 = v36;
  _disable();
  v1 = v0 >> 9;
  LOBYTE(v1) = v1 & 1;
  v36 = v1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  KiFreezeFlag = 4;
  if ( (KeGetCurrentPrcb()->IpiFrozen & 0xF) != 4 )
  {
LABEL_2:
    v3 = 500000;
    do
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        v4 = KiTryToAcquireSpinLockInstrumented((volatile signed __int32 *)&KdDebuggerLock);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)&KdDebuggerLock, 0LL) )
      {
        v4 = 0;
        _mm_pause();
      }
      else
      {
        v4 = 1;
      }
      if ( v4 )
        break;
      if ( KiFreezeExecutionLock )
        goto LABEL_2;
      KeStallExecutionProcessor(4u);
      --v3;
    }
    while ( v3 );
    v5 = v4 != 0 ? 4 * (500000 - v3) : 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&KiFreezeExecutionLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiFreezeExecutionLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiFreezeExecutionLock);
    }
    LOBYTE(v1) = v36;
    if ( v4 || (KiFreezeFlag & 1) == 0 )
      KdPortLocked = v4;
    else
      KiFreezeFlag |= 8u;
    if ( v5 > KdDebuggerLockMaxWaitTime )
      KdDebuggerLockMaxWaitTime = v5;
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !CurrentPrcb->NestingLevel && !PoAllProcIntrDisabled )
    {
      CurrentThread = (__int64)CurrentPrcb->CurrentThread;
      CurrentPrcb->NestingLevel = 1;
      v8 = __rdtsc();
      v9 = v8 - CurrentPrcb->StartCycles;
      v10 = v9 + *(unsigned int *)(CurrentThread + 80);
      *(_QWORD *)(CurrentThread + 72) += v9;
      CurrentPrcb->StartCycles = v8;
      v11 = *(_BYTE *)(CurrentThread + 2);
      if ( v10 > 0xFFFFFFFF )
        v10 = 0xFFFFFFFFLL;
      *(_DWORD *)(CurrentThread + 80) = v10;
      if ( (v11 & 0x3E) != 0 )
      {
        if ( (v11 & 0x10) != 0 )
        {
          CurrentPrcb->TaggedCycles[*(unsigned __int8 *)(CurrentThread + 124)] += CurrentPrcb->StartCycles
                                                                                - CurrentPrcb->TaggedCyclesStart;
          v11 &= ~0x10u;
          CurrentPrcb->TaggedCyclesStart = 0LL;
        }
        if ( (v11 & 0x3E) != 0 )
        {
          if ( (v11 & 0x20) != 0 )
          {
            if ( *(_QWORD *)(CurrentThread + 1952) )
            {
              CurrentFrequency = PpmPerfGetCurrentFrequency((__int64)CurrentPrcb);
              v14 = 3LL;
              if ( CurrentFrequency / 0x19 < 3 )
                v14 = CurrentFrequency / 0x19;
              v15 = CurrentPrcb->PowerState.Class + 2 * v14;
              v10 = v9 + *(_QWORD *)(v13 + 8 * v15);
              *(_QWORD *)(v13 + 8 * v15) = v10;
            }
            v11 &= ~0x20u;
          }
          if ( (v11 & 0x3E) != 0 )
          {
            v10 = *(_QWORD *)(CurrentThread + 104);
            if ( v10 )
            {
              for ( v10 += CurrentPrcb->ScbOffset; v10; v10 = *(_QWORD *)(v10 + 392) )
                *(_QWORD *)v10 += v9;
            }
            if ( (*(_BYTE *)(CurrentThread + 2) & 8) != 0 )
            {
              v10 = *(_QWORD *)(CurrentThread + 576);
              if ( (v10 & CurrentPrcb->ParentNode->Affinity.Mask) != CurrentPrcb->ParentNode->Affinity.Mask )
                CurrentPrcb->AffinitizedCycles += v9;
            }
            if ( *(_QWORD *)(CurrentThread + 360) )
              KiEndCounterAccumulation(CurrentThread);
          }
        }
      }
      v16 = __rdtsc();
      CurrentPrcb->CycleTime += v16 - CurrentPrcb->StartCycles;
      if ( (*(_BYTE *)(CurrentThread + 2) & 0x20) != 0 )
      {
        v17 = PpmPerfGetCurrentFrequency((__int64)CurrentPrcb);
        v19 = 3LL;
        if ( v17 / 0x19 < 3 )
          v19 = v17 / 0x19;
        v20 = CurrentPrcb->PowerState.Class + 2 * v19;
        v10 = v18 + CurrentPrcb->Cycles[0][v20];
        CurrentPrcb->Cycles[0][v20] = v10;
      }
      CurrentPrcb->StartCycles = v16;
      if ( (*(_BYTE *)(CurrentThread + 2) & 0x10) != 0 )
        CurrentPrcb->TaggedCyclesStart = v16;
      if ( (*(_BYTE *)(CurrentThread + 2) & 2) != 0 )
        KiBeginCounterAccumulation(CurrentThread, 0);
      CurrentPrcb->NestingLevel = 0;
      if ( CurrentPrcb->InterruptRequest )
      {
        LOBYTE(v10) = 2;
        CurrentPrcb->InterruptRequest = 0;
        HalRequestSoftwareInterrupt(v10);
      }
    }
    off_1403218F8();
    KiClockLatencyMeasurementEnabled = 0;
    if ( (unsigned int)KeNumberProcessors_0 > 1 && !PoAllProcIntrDisabled )
    {
      KiFreezeOwner = (__int64)CurrentPrcb;
      CurrentPrcb->IpiFrozen = 4;
      KiSetDebuggerOwner(CurrentPrcb);
      if ( !KiFreezeTimeout || PpmNonInterruptibleCount )
        v21 = 20000;
      else
        v21 = 20000 * KiFreezeTimeout;
      CurrentPrcb->ClockKeepAlive = 1;
      v22 = LOWORD(KeActiveProcessors[0]);
      v34[0] = KeActiveProcessors[0];
      v34[1] = 0;
      if ( LOWORD(KeActiveProcessors[0]) )
      {
        memmove(v35, qword_1403D15E8, 8LL * LOWORD(KeActiveProcessors[0]));
        v22 = LOWORD(v34[0]);
      }
      v23 = (unsigned int)KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] >> 6;
      if ( (unsigned __int16)v22 > (unsigned int)v23 )
      {
        v22 = (unsigned int)v23;
        v24 = v35[v23];
        _bittestandreset64(&v24, KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F);
        v35[v22] = v24;
      }
      LOBYTE(v22) = (KiBugCheckActive & 3) != 3;
      KiSendFreeze(v34, v22);
      v25 = v35[0];
      for ( i = 0; ; v25 = v35[i] )
      {
LABEL_68:
        while ( v25 )
        {
          _BitScanForward64(&v27, v25);
          v25 &= ~(1LL << v27);
          v33 = v27;
          v28 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * i + (unsigned __int8)v27]];
          while ( *(_DWORD *)(v28 + 11528) != 2 )
          {
            if ( !v21 )
            {
              KiFreezeFlag |= 2u;
              goto LABEL_68;
            }
            KeStallExecutionProcessor(0x32u);
            --v21;
          }
        }
        if ( ++i >= (unsigned int)LOWORD(v34[0]) )
          break;
      }
      LOBYTE(v1) = v36;
    }
    KiOldIrql = CurrentIrql;
    if ( (unsigned __int8)RtlWriteTryAcquireTickLock() )
    {
      v29 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v30 = MEMORY[0xFFFFF78000000008]
          + 10000000 * (v29.QuadPart - MEMORY[0xFFFFF78000000350]) / (unsigned __int64)PerformanceFrequency.LowPart;
      MEMORY[0xFFFFF78000000010] = HIDWORD(v30);
      MEMORY[0xFFFFF78000000008] = v30;
      if ( KeMaximumIncrement )
      {
        KiTickOffset = KeMaximumIncrement * (v30 / KeMaximumIncrement + 1) - v30;
        MEMORY[0xFFFFF78000000328] = (v30 / KeMaximumIncrement) >> 32;
        MEMORY[0xFFFFF78000000320] = v30 / KeMaximumIncrement;
      }
      ++MEMORY[0xFFFFF78000000340];
    }
  }
  return v1;
}
