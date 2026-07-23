/*
 * XREFs of PpmRegisterPerfCap @ 0x140204E54
 * Callers:
 *     <none>
 * Callees:
 *     PpmAcquireLock @ 0x14000A0A8 (PpmAcquireLock.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     PpmReleaseLock @ 0x1400D2574 (PpmReleaseLock.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x140208EA4 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140208FD4 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PpmEventBiosCapChange @ 0x14020B8CC (PpmEventBiosCapChange.c)
 *     PpmEventHiddenProcessorBiosCapChange @ 0x14020BC2C (PpmEventHiddenProcessorBiosCapChange.c)
 *     PpmEventHiddenProcessorThermalCapChange @ 0x14020BD18 (PpmEventHiddenProcessorThermalCapChange.c)
 *     PpmEventThermalCapChange @ 0x14020C728 (PpmEventThermalCapChange.c)
 *     PpmCheckApplyPerfConstraints @ 0x140544D3C (PpmCheckApplyPerfConstraints.c)
 */

__int64 __fastcall PpmRegisterPerfCap(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  unsigned int v4; // r9d
  __int64 v5; // rdi
  __int64 Prcb; // r13
  unsigned int v7; // r10d
  __int64 v8; // rbp
  unsigned int v9; // r8d
  __int64 v10; // r11
  ULONG v11; // r14d
  unsigned int v12; // r14d
  unsigned int v13; // r15d
  int v14; // eax
  unsigned int v16; // [rsp+50h] [rbp+8h]

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v2 = 0;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    v11 = *(_DWORD *)(a1 + 4);
    v16 = v11;
    if ( v11 != -1 )
    {
      Prcb = KeGetPrcb(v11);
      v4 = v11;
      v5 = *(_QWORD *)(Prcb + 24184);
      v8 = *(_QWORD *)(Prcb + 24176);
      goto LABEL_15;
    }
LABEL_33:
    v2 = -1073741811;
    PpmReleaseLock(&PpmPerfPolicyLock);
    return v2;
  }
  v3 = PpmPerfDomainHead;
  v4 = -1;
  v5 = 0LL;
  v16 = -1;
  Prcb = 0LL;
  if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
    goto LABEL_33;
  do
  {
    v7 = *(_DWORD *)(v3 + 192);
    v8 = v3;
    v9 = 0;
    if ( v7 )
    {
      v10 = *(_QWORD *)(v3 + 200);
      while ( 1 )
      {
        v5 = v10 + 96LL * v9;
        if ( *(_BYTE *)(v5 + 16) )
        {
          if ( *(_DWORD *)(v5 + 20) == *(_DWORD *)(a1 + 4) )
            break;
        }
        if ( ++v9 >= v7 )
          goto LABEL_10;
      }
      v5 = v10 + 96LL * v9;
LABEL_10:
      if ( v5 )
        break;
    }
    v3 = *(_QWORD *)v3;
  }
  while ( (__int64 *)v3 != &PpmPerfDomainHead );
LABEL_15:
  if ( !v8 || !v5 )
    goto LABEL_33;
  v12 = *(_DWORD *)(a1 + 8);
  v13 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(v5 + 40) = *(_DWORD *)(a1 + 16);
  v14 = *(_DWORD *)(v5 + 32);
  if ( v14 != v12 )
  {
    if ( v14 == 100 )
    {
      *(_QWORD *)(v5 + 48) = MEMORY[0xFFFFF78000000008];
    }
    else if ( v12 == 100 )
    {
      PopDiagTraceProcessorThrottleDurationPerfTrack(
        (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v5 + 48)) / 0x2710uLL,
        v4);
      *(_QWORD *)(v5 + 48) = 0LL;
    }
    *(_DWORD *)(v5 + 32) = v12;
    if ( *(_BYTE *)(v8 + 199) || !*(_BYTE *)(v5 + 16) )
      PpmEventBiosCapChange(Prcb, v12);
    else
      PpmEventHiddenProcessorBiosCapChange(*(_QWORD *)(v8 + 16), *(unsigned int *)(a1 + 4), v12);
    PopDiagTraceProcessorThrottlePerfTrack(100 - v12, v16);
  }
  if ( *(_DWORD *)(v5 + 36) != v13 )
  {
    *(_DWORD *)(v5 + 36) = v13;
    if ( *(_BYTE *)(v8 + 199) || !*(_BYTE *)(v5 + 16) )
      PpmEventThermalCapChange(Prcb, v13);
    else
      PpmEventHiddenProcessorThermalCapChange(*(_QWORD *)(v8 + 16), *(unsigned int *)(a1 + 4), v13);
  }
  *(_BYTE *)(v8 + 406) = 1;
  PpmCheckApplyPerfConstraints(0LL);
  return v2;
}
