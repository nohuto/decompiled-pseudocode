/*
 * XREFs of PspEstablishJobHierarchy @ 0x1403E7DD4
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1403E8B34 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140486CD0 (PspAssignProcessToJob.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x14003AF8C (PsGetProcessSessionId.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeInsertSchedulingGroup @ 0x1400C46B0 (KeInsertSchedulingGroup.c)
 *     KeRemoveSchedulingGroup @ 0x1400C4CFC (KeRemoveSchedulingGroup.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MmLinkJobProcess @ 0x1403E80C0 (MmLinkJobProcess.c)
 *     PspBindProcessSessionToJob @ 0x1403E82EC (PspBindProcessSessionToJob.c)
 *     PspUnlinkJobProcess @ 0x1403EC9B8 (PspUnlinkJobProcess.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404868AC (PspAddSchedulingGroupToJobChain.c)
 *     PspSetEffectiveJobLimits @ 0x1404B7374 (PspSetEffectiveJobLimits.c)
 *     PspGetRateControlJobFlag @ 0x1404C26B0 (PspGetRateControlJobFlag.c)
 *     PspEstablishDfssHierarchy @ 0x140517E8C (PspEstablishDfssHierarchy.c)
 *     PspSetEffectiveRateControlJob @ 0x1406425E8 (PspSetEffectiveRateControlJob.c)
 */

__int64 __fastcall PspEstablishJobHierarchy(volatile signed __int32 *Object, __int64 a2, unsigned int a3)
{
  int v6; // esi
  __int64 v8; // rbx
  __int64 v9; // rcx
  int RateControlJobFlag; // eax
  _QWORD *PoolWithTag; // r14
  unsigned __int64 v12; // r12
  int v13; // eax
  char **v14; // rdx
  char *v15; // r15
  char v16; // al
  unsigned __int16 *v17; // rcx
  __int64 v18; // rax
  int i; // r8d
  __int64 v21; // rdx
  __int64 v22; // rcx
  char **v23; // rax
  void *v24; // rbx
  int v25; // [rsp+60h] [rbp+18h]

  switch ( a3 )
  {
    case 1u:
      v6 = PspBindProcessSessionToJob(Object, a2);
      if ( v6 < 0 )
        return (unsigned int)v6;
      ObfReferenceObject((PVOID)Object);
      MmLinkJobProcess(Object, a2);
LABEL_4:
      if ( v6 >= 0 )
        goto LABEL_5;
      return (unsigned int)v6;
    case 2u:
LABEL_65:
      v6 = 0;
LABEL_5:
      if ( PsCpuFairShareEnabled )
      {
        if ( (unsigned int)PsGetProcessSessionId(a2) )
          PspEstablishDfssHierarchy(Object, a2, a3);
      }
      return (unsigned int)v6;
    case 3u:
      v24 = *(void **)(a2 + 944);
      PspUnlinkJobProcess(v24);
      MmLinkJobProcess(Object, a2);
      ObfReferenceObject((PVOID)Object);
      ObfDereferenceObject(v24);
      goto LABEL_65;
  }
  if ( a3 != 4 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a2 + 944);
  if ( *(unsigned __int8 *)(v8 + 882) + 1 <= 100 && (*(_DWORD *)(*(_QWORD *)(v8 + 1072) + 1300LL) & Object[325]) == 0 )
  {
    v9 = 0LL;
    do
    {
      if ( (_DWORD)v9 != 2 )
      {
        RateControlJobFlag = PspGetRateControlJobFlag(v9, 0LL);
        if ( (RateControlJobFlag & Object[324]) != 0 && (RateControlJobFlag & *(_DWORD *)(v8 + 1296)) != 0 )
          return 3221225659LL;
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (int)v9 < 3 );
    PoolWithTag = 0LL;
    v12 = *(_QWORD *)(v8 + 1096) + 1LL;
    if ( v12 > 2 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v12 - 16, 0x624A7350u);
      if ( !PoolWithTag )
        return 3221225626LL;
    }
    v6 = PspBindProcessSessionToJob(Object, a2);
    if ( v6 >= 0 )
    {
      v13 = *(_DWORD *)(*(_QWORD *)(v8 + 1072) + 1300LL);
      *(_DWORD *)(*(_QWORD *)(v8 + 1072) + 1300LL) = *((_DWORD *)Object + 325) | v13;
      v25 = v13;
      ObfReferenceObject((PVOID)Object);
      v14 = *(char ***)(v8 + 1056);
      v15 = (char *)(Object + 258);
      *((_QWORD *)Object + 129) = v8 + 1048;
      *((_QWORD *)Object + 130) = v14;
      if ( *v14 != (char *)(v8 + 1048) )
        __fastfail(3u);
      *v14 = v15;
      *(_QWORD *)(v8 + 1056) = v15;
      *((_QWORD *)Object + 133) = v8;
      *((_QWORD *)Object + 134) = *(_QWORD *)(v8 + 1072);
      v16 = *(_BYTE *)(v8 + 882) + 1;
      *((_QWORD *)Object + 137) = v12;
      *((_BYTE *)Object + 882) = v16;
      if ( v12 > 2 )
      {
        if ( v12 > 3 )
        {
          v21 = *(_QWORD *)(v8 + 1096) - 2LL;
          if ( *(_QWORD *)(v8 + 1096) != 2LL )
          {
            do
            {
              PoolWithTag[v21] = *(_QWORD *)(*(_QWORD *)(v8 + 1104) + 8 * v21 - 8);
              --v21;
            }
            while ( v21 );
          }
        }
        *PoolWithTag = *(_QWORD *)(v8 + 1064);
        *((_QWORD *)Object + 138) = PoolWithTag;
      }
      PspUnlinkJobProcess(v8);
      MmLinkJobProcess(Object, a2);
      v17 = (unsigned __int16 *)*((_QWORD *)Object + 126);
      if ( v17 )
      {
        KeRemoveSchedulingGroup(v17);
        if ( (*(_DWORD *)(v8 + 1296) & 0x20) == 0 )
        {
          v6 = PspAddSchedulingGroupToJobChain(v8, 0LL);
          if ( v6 < 0 )
          {
            *(_DWORD *)(*(_QWORD *)(v8 + 1072) + 1300LL) = v25;
            v22 = *(_QWORD *)v15;
            v23 = (char **)*((_QWORD *)Object + 130);
            if ( *(char **)(*(_QWORD *)v15 + 8LL) != v15 || *v23 != v15 )
              __fastfail(3u);
            *v23 = (char *)v22;
            *(_QWORD *)(v22 + 8) = v23;
            *((_QWORD *)Object + 130) = Object + 258;
            *(_QWORD *)v15 = v15;
            *((_QWORD *)Object + 133) = 0LL;
            *((_QWORD *)Object + 134) = Object;
            *((_BYTE *)Object + 882) = 0;
            PspUnlinkJobProcess(Object);
            MmLinkJobProcess(v8, a2);
            ObfDereferenceObject((PVOID)Object);
            *((_QWORD *)Object + 137) = 0LL;
            if ( PoolWithTag )
            {
              ExFreePoolWithTag(PoolWithTag, 0x624A7350u);
              *((_QWORD *)Object + 138) = 0LL;
            }
            KeInsertSchedulingGroup(
              *((_QWORD *)Object + 125) + 128LL,
              *(_QWORD *)(*((_QWORD *)Object + 125) + 128LL),
              0LL);
            return (unsigned int)v6;
          }
        }
        KeInsertSchedulingGroup(
          *((_QWORD *)Object + 125) + 128LL,
          *(_QWORD *)(*((_QWORD *)Object + 125) + 128LL),
          *(_QWORD *)(v8 + 1000) + 128LL);
      }
      else
      {
        v18 = *(_QWORD *)(v8 + 1008);
        if ( v18 )
          *((_QWORD *)Object + 126) = v18;
      }
      PspSetEffectiveJobLimits(Object, 0LL);
      *((_DWORD *)Object + 216) += *(_DWORD *)(v8 + 864);
      *((_DWORD *)Object + 218) += *(_DWORD *)(v8 + 872);
      *((_DWORD *)Object + 217) += *(_DWORD *)(v8 + 868);
      *((_DWORD *)Object + 219) += *(_DWORD *)(v8 + 876);
      if ( (*(_DWORD *)(*((_QWORD *)Object + 133) + 1296LL) & 0x40000) != 0 )
        _interlockedbittestandset(Object + 324, 0x12u);
      if ( (Object[324] & 0x1000) == 0 && (*(_DWORD *)(v8 + 1296) & 0x1000) != 0 )
        _interlockedbittestandset(Object + 324, 0xCu);
      if ( (*(_DWORD *)(*((_QWORD *)Object + 133) + 1296LL) & 0x1000000) != 0 )
      {
        _InterlockedOr(Object + 324, 0x1000000u);
        if ( (*(_DWORD *)(*((_QWORD *)Object + 133) + 1296LL) & 0x800000) != 0 )
          _InterlockedOr(Object + 324, 0x800000u);
      }
      for ( i = 0; i < 3; ++i )
      {
        if ( i != 2 )
        {
          if ( i ? *(_QWORD *)(v8 + 832) : *(_QWORD *)(v8 + 840) )
            PspSetEffectiveRateControlJob(Object);
        }
      }
      goto LABEL_4;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x624A7350u);
    goto LABEL_4;
  }
  return 3221225659LL;
}
