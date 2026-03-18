/*
 * XREFs of PspAddSchedulingGroupToJobChain @ 0x1404868AC
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1403E7DD4 (PspEstablishJobHierarchy.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeInsertSchedulingGroup @ 0x1400C46B0 (KeInsertSchedulingGroup.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1403EB6A8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspFreeRateControl @ 0x140487854 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140487898 (PspAllocateRateControl.c)
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
  __int64 RateControl; // rax
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
    v3[1] = P;
    *v3 = v6;
    if ( *(_QWORD **)(v6 + 8) != P )
      __fastfail(3u);
    *(_QWORD *)(v6 + 8) = v3;
    P[0] = v3;
  }
  if ( a1 )
  {
    while ( (*(_DWORD *)(a1 + 1296) & 0x20) == 0 )
    {
      RateControl = PspAllocateRateControl(2LL);
      *(_QWORD *)(a1 + 1000) = RateControl;
      if ( !RateControl )
        goto LABEL_29;
      *(_DWORD *)(RateControl + 132) |= 3u;
      *(_DWORD *)(RateControl + 128) = 655370000;
      *(_DWORD *)(*(_QWORD *)(a1 + 1000) + 44LL) = *(_DWORD *)(RateControl + 128);
      *(_DWORD *)(*(_QWORD *)(a1 + 1000) + 40LL) |= 0x40u;
      v15 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x624A7350u);
      v3 = v15;
      if ( !v15 )
      {
        PspFreeRateControl(*(_QWORD *)(a1 + 1000), 2LL);
        *(_QWORD *)(a1 + 1000) = 0LL;
LABEL_29:
        while ( 1 )
        {
          v17 = (_QWORD *)P[0];
          if ( (_QWORD *)P[0] == P )
            break;
          v18 = *(_QWORD *)(P[0] + 16LL);
          v19 = *(_QWORD *)(v18 + 1000);
          if ( v19 )
          {
            PspFreeRateControl(v19, 2LL);
            *(_QWORD *)(v18 + 1000) = 0LL;
            _InterlockedAnd((volatile signed __int32 *)(v18 + 1296), 0xFFFFFFDF);
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
      _InterlockedOr((volatile signed __int32 *)(a1 + 1296), 0x20u);
      v15[2] = a1;
      v16 = P[0];
      v3[1] = P;
      *v3 = v16;
      if ( *(_QWORD **)(v16 + 8) != P )
        __fastfail(3u);
      *(_QWORD *)(v16 + 8) = v3;
      P[0] = v3;
      a1 = *(_QWORD *)(a1 + 1064);
      if ( !a1 )
        break;
    }
  }
  while ( v3 != P )
  {
    v7 = v3[2];
    v8 = *(_QWORD *)(v7 + 1064);
    v9 = (__int64 *)(*(_QWORD *)(v7 + 1000) + 128LL);
    if ( v8 )
    {
      v10 = *(_QWORD *)(v8 + 1000) + 128LL;
    }
    else
    {
      v10 = *(_QWORD *)(v7 + 1008);
      if ( PsCpuFairShareEnabled && v10 )
        ObfReferenceObject(*(PVOID *)(v7 + 1104));
    }
    KeInsertSchedulingGroup((__int64)v9, *v9, v10);
    if ( *(_QWORD *)(v7 + 1008) )
      PspEnumJobsAndProcessesInJobHierarchy(
        (_QWORD *)v7,
        (int)PspSetCpuRateControlJobPreCallback,
        (int)PspSetCpuRateControlJobPostCallback,
        0,
        0LL,
        5u);
    PspEnumJobsAndProcessesInJobHierarchy(
      (_QWORD *)v7,
      (int)PspSetCpuRateControlJobPreCallback,
      (int)PspSetCpuRateControlJobPostCallback,
      0,
      *(_QWORD *)(v7 + 1000),
      5u);
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
