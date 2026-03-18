/*
 * XREFs of PpmRegisterPerfCap @ 0x14023A7B8
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x1400E70D0 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x14023E688 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x14023E7B8 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x1402407F0 (PpmEventBiosCapChange.c)
 *     PpmEventThermalCapChange @ 0x1402412B8 (PpmEventThermalCapChange.c)
 *     PpmCheckApplyPerfConstraints @ 0x14058430C (PpmCheckApplyPerfConstraints.c)
 */

__int64 __fastcall PpmRegisterPerfCap(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v3; // ax
  unsigned int v4; // ebp
  unsigned __int8 v5; // dl
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // r8d

  v1 = 0;
  if ( *(_BYTE *)(a1 + 7) )
    return (unsigned int)-1073741811;
  v3 = *(_WORD *)(a1 + 4);
  if ( !v3 && !*(_BYTE *)(a1 + 6) )
  {
    v4 = 0;
    goto LABEL_12;
  }
  if ( v3 >= (unsigned __int16)KiMaximumGroups || (v5 = *(_BYTE *)(a1 + 6), v5 >= 0x40u) )
  {
    v4 = -1;
  }
  else
  {
    v4 = KiProcessorNumberToIndexMappingTable[64 * v3 + v5];
    if ( !v4 )
      return (unsigned int)-1073741811;
  }
  if ( v4 == -1 )
    return (unsigned int)-1073741811;
LABEL_12:
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v7 = *(_DWORD *)(a1 + 8);
  v8 = *(_DWORD *)(a1 + 12);
  if ( v4 >= (unsigned int)KeNumberProcessors_0 )
  {
    v9 = 0LL;
  }
  else
  {
    _mm_lfence();
    v9 = KiProcessorBlock[v4];
  }
  v10 = *(_QWORD *)(v9 + 24176);
  v11 = *(_QWORD *)(v9 + 24184);
  if ( v10 && v11 )
  {
    *(_DWORD *)(v11 + 32) = *(_DWORD *)(a1 + 16);
    v12 = *(_DWORD *)(v11 + 24);
    if ( v12 != v7 )
    {
      if ( v12 == 100 )
      {
        *(_QWORD *)(v11 + 40) = MEMORY[0xFFFFF78000000008];
      }
      else if ( v7 == 100 )
      {
        PopDiagTraceProcessorThrottleDurationPerfTrack(
          (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v11 + 40)) / 0x2710uLL,
          v4);
        *(_QWORD *)(v11 + 40) = 0LL;
      }
      *(_DWORD *)(v11 + 24) = v7;
      PpmEventBiosCapChange(v9, v7);
      PopDiagTraceProcessorThrottlePerfTrack(100 - v7, v4);
    }
    if ( *(_DWORD *)(v11 + 28) != v8 )
    {
      *(_DWORD *)(v11 + 28) = v8;
      PpmEventThermalCapChange(v9, v8);
    }
    v13 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(*(_QWORD *)(v10 + 16) + 36LL)] >> 6;
    v14 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(*(_QWORD *)(v10 + 16) + 36LL)] & 0x3F;
    if ( (unsigned __int16)PpmPerfDomainsToUpdate <= (unsigned int)v13 )
      LOWORD(PpmPerfDomainsToUpdate) = v13 + 1;
    qword_140320838[(unsigned int)v13] = qword_140320838[v13] | (1LL << v14);
    PpmCheckApplyPerfConstraints(0LL);
  }
  else
  {
    v1 = -1073741811;
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
  return v1;
}
