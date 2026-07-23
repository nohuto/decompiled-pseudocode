/*
 * XREFs of PspEstablishJobHierarchy @ 0x1404D5F88
 * Callers:
 *     PspAssignProcessToJob @ 0x1404D5BEC (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x1404D65FC (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x140013CD0 (PsGetProcessSessionId.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x14007649C (IoSetDiskIoAttributionOnProcess.c)
 *     KeRemoveSchedulingGroup @ 0x1400A47E8 (KeRemoveSchedulingGroup.c)
 *     KeInsertSchedulingGroup @ 0x1400A498C (KeInsertSchedulingGroup.c)
 *     PspIsServerSilo @ 0x1400B0D44 (PspIsServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140467544 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404B58A0 (PspAddSchedulingGroupToJobChain.c)
 *     PspIsSetJobIoAttribution @ 0x1404D49E4 (PspIsSetJobIoAttribution.c)
 *     PspUnlinkJobProcess @ 0x1404D5364 (PspUnlinkJobProcess.c)
 *     PspSetEffectiveJobLimits @ 0x1404D53D0 (PspSetEffectiveJobLimits.c)
 *     MmLinkJobProcess @ 0x1404D6388 (MmLinkJobProcess.c)
 *     PspBindProcessSessionToJob @ 0x1404D65B4 (PspBindProcessSessionToJob.c)
 *     PspEstablishDfssHierarchy @ 0x14054C574 (PspEstablishDfssHierarchy.c)
 *     PspSetEffectiveRateControlJob @ 0x1406809D4 (PspSetEffectiveRateControlJob.c)
 */

__int64 __fastcall PspEstablishJobHierarchy(volatile signed __int32 *Object, __int64 a2, unsigned int a3)
{
  int v6; // ebp
  __int64 v7; // rcx
  __int64 v9; // rbx
  int v10; // ecx
  __int64 v11; // rdx
  _QWORD *PoolWithTag; // r14
  unsigned __int64 v13; // r15
  unsigned __int16 *v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // r8
  _QWORD *v17; // rdx
  char v18; // al
  int i; // r8d
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rdx
  void *v23; // rbx
  __int64 v24; // rcx
  _QWORD v25[4]; // [rsp+30h] [rbp-38h] BYREF

  switch ( a3 )
  {
    case 1u:
      v6 = PspBindProcessSessionToJob(Object, a2);
      if ( v6 >= 0 )
      {
        ObfReferenceObjectWithTag((PVOID)Object, 0x73507350u);
        MmLinkJobProcess(Object, a2);
      }
      v7 = *((_QWORD *)Object + 168);
      if ( !*((_DWORD *)Object + 335) )
      {
        if ( !v7 )
          goto LABEL_6;
        v7 = *(_QWORD *)(v7 + 1344);
      }
LABEL_81:
      IoSetDiskIoAttributionOnProcess(v7, a2);
LABEL_6:
      if ( v6 >= 0 )
        goto LABEL_7;
      return (unsigned int)v6;
    case 2u:
      goto LABEL_79;
    case 3u:
      v23 = *(void **)(a2 + 944);
      PspUnlinkJobProcess((__int64)v23, a2);
      MmLinkJobProcess(Object, a2);
      ObfReferenceObject((PVOID)Object);
      ObfDereferenceObject(v23);
      v24 = *((_QWORD *)Object + 168);
      if ( *((_DWORD *)Object + 335) )
      {
LABEL_78:
        IoSetDiskIoAttributionOnProcess(v24, a2);
        goto LABEL_79;
      }
      if ( v24 )
      {
        v24 = *(_QWORD *)(v24 + 1344);
        goto LABEL_78;
      }
LABEL_79:
      v6 = 0;
LABEL_7:
      if ( PsCpuFairShareEnabled )
      {
        if ( (unsigned int)PsGetProcessSessionId(a2) )
          PspEstablishDfssHierarchy(Object, a2, a3);
      }
      return (unsigned int)v6;
  }
  if ( a3 != 4 )
    return (unsigned int)-1073741811;
  v9 = *(_QWORD *)(a2 + 944);
  if ( *(unsigned __int8 *)(v9 + 874) + 1 <= 100 && (*(_DWORD *)(*(_QWORD *)(v9 + 1328) + 1308LL) & Object[327]) == 0 )
  {
    v10 = 0;
    v11 = 0x2000000LL;
    while ( (unsigned int)(v10 - 1) <= 1 || (Object[326] & 0x2000000) == 0 || (*(_DWORD *)(v9 + 1304) & 0x2000000) == 0 )
    {
      if ( ++v10 >= 3 )
      {
        if ( (*(_DWORD *)(v9 + 1340) || PspIsSetJobIoAttribution((_QWORD *)v9, 0x2000000LL, 1))
          && (*((_DWORD *)Object + 335) || PspIsSetJobIoAttribution(Object, v11, 0)) )
        {
          return 3221225659LL;
        }
        PoolWithTag = 0LL;
        v13 = *(_QWORD *)(v9 + 1096) + 1LL;
        if ( v13 > 2 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v13 - 16, 0x624A7350u);
          if ( !PoolWithTag )
            return 3221225626LL;
        }
        v6 = PspBindProcessSessionToJob(Object, a2);
        if ( v6 < 0 )
        {
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0x624A7350u);
          goto LABEL_6;
        }
        v14 = (unsigned __int16 *)*((_QWORD *)Object + 125);
        if ( v14 )
        {
          KeRemoveSchedulingGroup(v14);
          if ( (*(_DWORD *)(v9 + 1304) & 0x20) == 0 )
          {
            v6 = PspAddSchedulingGroupToJobChain(v9, 0LL);
            if ( v6 < 0 )
            {
              KeInsertSchedulingGroup(
                *((_QWORD *)Object + 124) + 128LL,
                *(_QWORD *)(*((_QWORD *)Object + 124) + 128LL),
                0LL);
              if ( PoolWithTag )
                ExFreePoolWithTag(PoolWithTag, 0x624A7350u);
              return (unsigned int)v6;
            }
          }
          KeInsertSchedulingGroup(
            *((_QWORD *)Object + 124) + 128LL,
            *(_QWORD *)(*((_QWORD *)Object + 124) + 128LL),
            *(_QWORD *)(v9 + 992) + 128LL);
        }
        else
        {
          v15 = *(_QWORD *)(v9 + 1000);
          if ( v15 )
            *((_QWORD *)Object + 125) = v15;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(v9 + 1328) + 1304LL) & 0x40000000) == 0
          || !PspIsServerSilo(*(_QWORD *)(v9 + 1328)) )
        {
          *(_DWORD *)(*(_QWORD *)(v9 + 1328) + 1308LL) |= *((_DWORD *)Object + 327);
          *((_QWORD *)Object + 166) = *(_QWORD *)(v9 + 1328);
        }
        ObfReferenceObject((PVOID)Object);
        v16 = *(_QWORD **)(v9 + 1048);
        v17 = Object + 256;
        if ( *v16 != v9 + 1040 )
          __fastfail(3u);
        *v17 = v9 + 1040;
        *((_QWORD *)Object + 129) = v16;
        *v16 = v17;
        *(_QWORD *)(v9 + 1048) = v17;
        *((_QWORD *)Object + 132) = v9;
        *((_QWORD *)Object + 134) = *(_QWORD *)(v9 + 1072);
        v18 = *(_BYTE *)(v9 + 874) + 1;
        *((_QWORD *)Object + 137) = v13;
        *((_BYTE *)Object + 874) = v18;
        if ( v13 > 2 )
        {
          if ( v13 > 3 )
          {
            v22 = *(_QWORD *)(v9 + 1096) - 2LL;
            if ( *(_QWORD *)(v9 + 1096) != 2LL )
            {
              do
              {
                PoolWithTag[v22] = *(_QWORD *)(*(_QWORD *)(v9 + 1104) + 8 * v22 - 8);
                --v22;
              }
              while ( v22 );
            }
          }
          *PoolWithTag = *(_QWORD *)(v9 + 1056);
          *((_QWORD *)Object + 138) = PoolWithTag;
        }
        PspUnlinkJobProcess(v9, a2);
        MmLinkJobProcess(Object, a2);
        PspSetEffectiveJobLimits((__int64)Object);
        *((_DWORD *)Object + 214) += *(_DWORD *)(v9 + 856);
        *((_DWORD *)Object + 216) += *(_DWORD *)(v9 + 864);
        *((_DWORD *)Object + 215) += *(_DWORD *)(v9 + 860);
        *((_DWORD *)Object + 217) += *(_DWORD *)(v9 + 868);
        if ( (*(_DWORD *)(*((_QWORD *)Object + 132) + 1304LL) & 0x40000) != 0 )
          _interlockedbittestandset(Object + 326, 0x12u);
        if ( (Object[326] & 0x1000) == 0 && (*(_DWORD *)(v9 + 1304) & 0x1000) != 0 )
          _interlockedbittestandset(Object + 326, 0xCu);
        if ( (*(_DWORD *)(*((_QWORD *)Object + 132) + 1304LL) & 0x1000000) != 0 )
        {
          _InterlockedOr(Object + 326, 0x1000000u);
          if ( (*(_DWORD *)(*((_QWORD *)Object + 132) + 1304LL) & 0x800000) != 0 )
            _InterlockedOr(Object + 326, 0x800000u);
        }
        for ( i = 0; i < 3; ++i )
        {
          if ( (unsigned int)(i - 1) > 1 && *(_QWORD *)(v9 + 832) )
            PspSetEffectiveRateControlJob(Object);
        }
        v20 = *(_DWORD *)(v9 + 1340);
        if ( !v20 && (v21 = *(_QWORD *)(v9 + 1344)) != 0 || (v21 = v9 & -(__int64)(v20 != 0)) != 0 )
        {
          v25[1] = v21;
          v25[0] = 0LL;
          v25[2] = 1LL;
          v6 = PspEnumJobsAndProcessesInJobHierarchy(
                 Object,
                 (int)PspSetJobIoAttributionJobPreCallback,
                 0,
                 0,
                 (__int64)v25,
                 5);
          goto LABEL_6;
        }
        if ( !*((_DWORD *)Object + 335) )
          goto LABEL_6;
        v7 = *((_QWORD *)Object + 168);
        goto LABEL_81;
      }
    }
  }
  return 3221225659LL;
}
