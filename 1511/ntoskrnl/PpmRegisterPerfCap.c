/*
 * XREFs of PpmRegisterPerfCap @ 0x1401EC570
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     PpmReleaseLock @ 0x140097098 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
 *     KeGetProcessorIndexFromNumber @ 0x14009D720 (KeGetProcessorIndexFromNumber.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1401F029C (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x1401F03CC (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x1401F1B38 (PpmEventBiosCapChange.c)
 *     PpmEventThermalCapChange @ 0x1401F27BC (PpmEventThermalCapChange.c)
 *     PpmCheckApplyPerfConstraints @ 0x14050CF58 (PpmCheckApplyPerfConstraints.c)
 */

__int64 __fastcall PpmRegisterPerfCap(__int64 a1)
{
  ULONG ProcessorIndexFromNumber; // r14d
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  unsigned int v5; // r15d
  __int64 Prcb; // r13
  __int64 v7; // r12
  __int64 v8; // rdi
  int v9; // eax

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(a1 + 4));
  if ( ProcessorIndexFromNumber == -1 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    v4 = *(_DWORD *)(a1 + 8);
    v5 = *(_DWORD *)(a1 + 12);
    v3 = 0;
    Prcb = KeGetPrcb(ProcessorIndexFromNumber);
    v7 = *(_QWORD *)(Prcb + 24176);
    v8 = *(_QWORD *)(Prcb + 24184);
    if ( v7 && v8 )
    {
      v9 = *(_DWORD *)(v8 + 24);
      *(_DWORD *)(v8 + 32) = *(_DWORD *)(a1 + 16);
      if ( v9 != v4 )
      {
        if ( v9 == 100 )
        {
          *(_QWORD *)(v8 + 40) = MEMORY[0xFFFFF78000000008];
        }
        else if ( v4 == 100 )
        {
          PopDiagTraceProcessorThrottleDurationPerfTrack(
            (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v8 + 40)) / 0x2710uLL,
            ProcessorIndexFromNumber);
          *(_QWORD *)(v8 + 40) = 0LL;
        }
        *(_DWORD *)(v8 + 24) = v4;
        PpmEventBiosCapChange(Prcb, v4);
        PopDiagTraceProcessorThrottlePerfTrack(100 - v4, ProcessorIndexFromNumber);
      }
      if ( *(_DWORD *)(v8 + 28) != v5 )
      {
        *(_DWORD *)(v8 + 28) = v5;
        PpmEventThermalCapChange(Prcb, v5);
      }
      KeAddProcessorAffinityEx(PpmPerfDomainsToUpdate, *(_DWORD *)(*(_QWORD *)(v7 + 16) + 36LL));
      PpmCheckApplyPerfConstraints(0LL);
    }
    else
    {
      v3 = -1073741811;
      PpmReleaseLock(&PpmPerfPolicyLock);
    }
  }
  return v3;
}
