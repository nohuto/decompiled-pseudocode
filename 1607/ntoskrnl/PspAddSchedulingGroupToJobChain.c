/*
 * XREFs of PspAddSchedulingGroupToJobChain @ 0x1404B58A0
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PspEstablishJobHierarchy @ 0x1404D5F88 (PspEstablishJobHierarchy.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     KeInsertSchedulingGroup @ 0x1400A498C (KeInsertSchedulingGroup.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140467544 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspFreeRateControl @ 0x1404B57B4 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1404B57F8 (PspAllocateRateControl.c)
 */

__int64 __fastcall PspAddSchedulingGroupToJobChain(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  _QWORD *PoolWithTag; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 *v9; // r15
  __int64 v10; // r14
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *RateControl; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD P[2]; // [rsp+30h] [rbp-10h] BYREF

  P[1] = P;
  v3 = P;
  P[0] = P;
  if ( a2 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x624A7350u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    PoolWithTag[2] = a2;
    v6 = P[0];
    if ( *(_QWORD **)(P[0] + 8LL) != P )
      __fastfail(3u);
    *v3 = P[0];
    v3[1] = P;
    *(_QWORD *)(v6 + 8) = v3;
    P[0] = v3;
  }
  if ( a1 )
  {
    while ( (*(_DWORD *)(a1 + 1304) & 0x20) == 0 )
    {
      RateControl = PspAllocateRateControl(2LL);
      *(_QWORD *)(a1 + 992) = RateControl;
      if ( !RateControl )
        goto LABEL_29;
      *((_DWORD *)RateControl + 33) |= 3u;
      *((_DWORD *)RateControl + 32) = 655370000;
      *(_DWORD *)(*(_QWORD *)(a1 + 992) + 44LL) = *((_DWORD *)RateControl + 32);
      *(_DWORD *)(*(_QWORD *)(a1 + 992) + 40LL) |= 0x40u;
      v15 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x624A7350u);
      v3 = v15;
      if ( !v15 )
      {
        PspFreeRateControl(*(_QWORD *)(a1 + 992), 2u);
        *(_QWORD *)(a1 + 992) = 0LL;
LABEL_29:
        while ( 1 )
        {
          v17 = (_QWORD *)P[0];
          if ( (_QWORD *)P[0] == P )
            break;
          v18 = *(_QWORD *)(P[0] + 16LL);
          v19 = *(_QWORD *)(v18 + 992);
          if ( v19 )
          {
            PspFreeRateControl(v19, 2u);
            *(_QWORD *)(v18 + 992) = 0LL;
            _InterlockedAnd((volatile signed __int32 *)(v18 + 1304), 0xFFFFFFDF);
          }
          v20 = *v17;
          v21 = (_QWORD *)v17[1];
          if ( *(_QWORD **)(*v17 + 8LL) != v17 || (_QWORD *)*v21 != v17 )
            __fastfail(3u);
          *v21 = v20;
          *(_QWORD *)(v20 + 8) = v21;
          ExFreePoolWithTag(v17, 0x624A7350u);
        }
        return 3221225626LL;
      }
      _InterlockedOr((volatile signed __int32 *)(a1 + 1304), 0x20u);
      v15[2] = a1;
      v16 = P[0];
      if ( *(_QWORD **)(P[0] + 8LL) != P )
        __fastfail(3u);
      *v3 = P[0];
      v3[1] = P;
      *(_QWORD *)(v16 + 8) = v3;
      P[0] = v3;
      a1 = *(_QWORD *)(a1 + 1056);
      if ( !a1 )
        break;
    }
  }
  while ( v3 != P )
  {
    v7 = v3[2];
    v8 = *(_QWORD *)(v7 + 1056);
    v9 = (__int64 *)(*(_QWORD *)(v7 + 992) + 128LL);
    if ( v8 )
    {
      v10 = *(_QWORD *)(v8 + 992) + 128LL;
    }
    else
    {
      v10 = *(_QWORD *)(v7 + 1000);
      if ( PsCpuFairShareEnabled && v10 )
        ObfReferenceObject(*(PVOID *)(v7 + 1104));
    }
    KeInsertSchedulingGroup((__int64)v9, *v9, v10);
    if ( *(_QWORD *)(v7 + 1000) )
      PspEnumJobsAndProcessesInJobHierarchy(
        (_QWORD *)v7,
        (int)PspSetCpuRateControlJobPreCallback,
        (int)PspSetCpuRateControlJobPostCallback,
        0,
        0LL,
        8);
    PspEnumJobsAndProcessesInJobHierarchy(
      (_QWORD *)v7,
      (int)PspSetCpuRateControlJobPreCallback,
      (int)PspSetCpuRateControlJobPostCallback,
      0,
      *(_QWORD *)(v7 + 992),
      8);
    v11 = *v3;
    v12 = (_QWORD *)v3[1];
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v12 != v3 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    ExFreePoolWithTag(v3, 0x624A7350u);
    v3 = (_QWORD *)P[0];
  }
  return 0LL;
}
