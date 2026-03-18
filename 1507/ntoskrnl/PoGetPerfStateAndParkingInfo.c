/*
 * XREFs of PoGetPerfStateAndParkingInfo @ 0x14023F454
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     ExpQueryProcessorInformationCounters @ 0x1404FABCC (ExpQueryProcessorInformationCounters.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140013958 (PopExecuteOnTargetProcessors.c)
 *     PpmSnapPerformanceAccumulation @ 0x1400A7330 (PpmSnapPerformanceAccumulation.c)
 *     PpmPerfGetCurrentState @ 0x14012D224 (PpmPerfGetCurrentState.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

char __fastcall PoGetPerfStateAndParkingInfo(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  int v7; // edi
  unsigned __int16 v8; // ax
  unsigned int v9; // ecx
  unsigned __int8 v10; // dl
  struct _KPRCB *v11; // r14
  _PROC_PERF_DOMAIN *Domain; // r15
  unsigned __int64 *v13; // rcx
  unsigned __int64 SnapTimeLast; // rax
  unsigned __int8 CurrentIrql; // bl
  char v16; // al
  char v17; // cl
  unsigned __int16 v18; // ax
  unsigned int v19; // ecx
  char v20; // r9
  __int64 v21; // rcx
  unsigned __int8 v22; // dl
  int v23; // ecx
  unsigned int v25; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 *v26; // [rsp+38h] [rbp-C8h]
  LARGE_INTEGER v27[10]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v29[21]; // [rsp+98h] [rbp-68h] BYREF

  v26 = a4;
  memset((void *)a2, 0, 0x20uLL);
  v7 = -1;
  if ( *(_BYTE *)(a1 + 3) )
    goto LABEL_10;
  v8 = *(_WORD *)a1;
  if ( !*(_WORD *)a1 && !*(_BYTE *)(a1 + 2) )
  {
    v9 = 0;
    goto LABEL_11;
  }
  if ( v8 >= (unsigned __int16)KiMaximumGroups || (v10 = *(_BYTE *)(a1 + 2), v10 >= 0x40u) )
  {
LABEL_10:
    v9 = -1;
  }
  else
  {
    v9 = KiProcessorNumberToIndexMappingTable[64 * v8 + v10];
    if ( !v9 )
      v9 = -1;
  }
LABEL_11:
  if ( v9 >= (unsigned int)KeNumberProcessors_0 )
  {
    v11 = 0LL;
  }
  else
  {
    _mm_lfence();
    v11 = (struct _KPRCB *)KiProcessorBlock[v9];
  }
  Domain = v11->PowerState.Domain;
  PpmPerfGetCurrentState((__int64)v11, (_DWORD *)(a2 + 4), &v25, (_DWORD *)(a2 + 8), (_DWORD *)a2, (int *)(a2 + 24));
  if ( Domain )
  {
    *(_DWORD *)(a2 + 12) = Domain->MinPolicyPercent;
    *(_DWORD *)(a2 + 16) = Domain->MaxPolicyPercent;
    if ( Domain->MaxPercent != Domain->MinThrottlePercent )
      *(_BYTE *)(a2 + 28) = 1;
    if ( Domain->MaxPolicyPercent < 0x64 )
      *(_DWORD *)(a2 + 24) |= 1u;
    *(_DWORD *)(a2 + 20) = 100 * v25 / Domain->NominalFrequency;
  }
  else
  {
    *(_DWORD *)(a2 + 20) = 100;
  }
  v13 = v26;
  LOBYTE(SnapTimeLast) = v11->PowerState.Parked;
  *(_BYTE *)(a2 + 29) = SnapTimeLast;
  if ( v13 )
  {
    SnapTimeLast = v11->PowerState.SnapTimeLast;
    *v13 = SnapTimeLast;
  }
  if ( a3 )
  {
    memset(v27, 0, sizeof(v27));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v16 = PpmSnapPerformanceAccumulation((LARGE_INTEGER *)v11, 0, v11 != KeGetCurrentPrcb(), 0, v27);
    __writecr8(CurrentIrql);
    if ( v16 )
    {
      v17 = PpmPerformanceCounterShift;
      if ( v11->PowerState.Hypervisor == ProcHypervisorHvCounters )
        v17 = PpmHvPerformanceCounterShift;
      *(_QWORD *)(a3 + 8) = (unsigned __int64)v27[4].QuadPart >> v17;
      *(_QWORD *)(a3 + 16) = (unsigned __int64)v27[5].QuadPart >> v17;
      *(_DWORD *)a3 = (unsigned __int64)v27[0].QuadPart >> v17;
      SnapTimeLast = (unsigned __int64)v27[1].QuadPart >> v17;
      *(_DWORD *)(a3 + 4) = (unsigned __int64)v27[1].QuadPart >> v17;
    }
    else
    {
      v28 = 1310721LL;
      memset(v29, 0, 0xA0uLL);
      if ( !*(_BYTE *)(a1 + 3) )
      {
        v18 = *(_WORD *)a1;
        if ( *(_WORD *)a1 || *(_BYTE *)(a1 + 2) )
        {
          if ( v18 < (unsigned __int16)KiMaximumGroups )
          {
            v22 = *(_BYTE *)(a1 + 2);
            if ( v22 < 0x40u )
            {
              v23 = KiProcessorNumberToIndexMappingTable[64 * v18 + v22];
              if ( !v23 )
                v23 = -1;
              v7 = v23;
            }
          }
        }
        else
        {
          v7 = 0;
        }
      }
      v19 = KiProcessorIndexToNumberMappingTable[v7];
      v20 = v19 & 0x3F;
      v21 = v19 >> 6;
      if ( (unsigned __int16)v28 <= (unsigned int)v21 )
        LOWORD(v28) = v21 + 1;
      v29[(unsigned int)v21] = v29[v21] | (1LL << v20);
      LOBYTE(SnapTimeLast) = PopExecuteOnTargetProcessors((__int64)&v28, (__int64)PpmGetThroughputInfoCallback, a3, 0LL);
    }
  }
  return SnapTimeLast;
}
