/*
 * XREFs of PspEstablishJobHierarchy @ 0x14041B81C
 * Callers:
 *     PspAssignProcessToJob @ 0x14041A524 (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x14041AAC8 (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PsGetProcessSessionId @ 0x1400EFD94 (PsGetProcessSessionId.c)
 *     KeRemoveSchedulingGroup @ 0x140120EBC (KeRemoveSchedulingGroup.c)
 *     KeInsertSchedulingGroup @ 0x140121074 (KeInsertSchedulingGroup.c)
 *     MmGetSessionObjectByProcess @ 0x14015C7B4 (MmGetSessionObjectByProcess.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PspBindProcessSessionToJob @ 0x14041BBAC (PspBindProcessSessionToJob.c)
 *     MmLinkJobProcess @ 0x14041BBF8 (MmLinkJobProcess.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x14046A53C (MmGetSessionSchedulingGroupByProcess.c)
 *     PspUnlinkJobProcess @ 0x140505D9C (PspUnlinkJobProcess.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140506878 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspFreeRateControl @ 0x14053CDC8 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14053CE10 (PspAllocateRateControl.c)
 *     PspSetEffectiveJobLimits @ 0x14054FF0C (PspSetEffectiveJobLimits.c)
 *     PspGetRateControlJobFlag @ 0x140559DBC (PspGetRateControlJobFlag.c)
 *     PspSetEffectiveRateControlJob @ 0x1406C4B1C (PspSetEffectiveRateControlJob.c)
 */

__int64 __fastcall PspEstablishJobHierarchy(char *Object, struct _KPROCESS *a2, int a3)
{
  int v4; // r13d
  int v6; // r14d
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  int RateControlJobFlag; // eax
  _QWORD *v11; // r13
  unsigned __int64 v12; // rax
  int v13; // eax
  char **v14; // rdx
  char *v15; // r12
  unsigned __int16 *v16; // rcx
  __int64 v17; // rax
  int i; // r8d
  LARGE_INTEGER v20; // rsi
  struct _KPROCESS *v21; // rcx
  void *SessionObjectByProcess; // r15
  __int64 v23; // rdx
  unsigned __int64 v24; // r13
  PVOID *v25; // r14
  __int64 RateControl; // rax
  PVOID *PoolWithTag; // rax
  PVOID v28; // rax
  PVOID v29; // r13
  __int64 v30; // r12
  LARGE_INTEGER *v31; // rax
  __int64 v32; // r12
  _QWORD *v33; // r14
  __int64 v34; // r13
  __int64 v35; // rcx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  char **v39; // rax
  PVOID *v40; // rcx
  PVOID **v41; // rax
  void *v42; // rbx
  void *v43; // rcx
  PVOID P; // [rsp+30h] [rbp-20h]
  unsigned __int64 v45; // [rsp+38h] [rbp-18h]
  PVOID v46[2]; // [rsp+40h] [rbp-10h] BYREF
  int v48; // [rsp+A8h] [rbp+58h]
  LARGE_INTEGER *v49; // [rsp+A8h] [rbp+58h]

  v4 = a3;
  switch ( a3 )
  {
    case 1:
      v6 = PspBindProcessSessionToJob(Object, a2);
      if ( v6 < 0 )
        return (unsigned int)v6;
      ObfReferenceObject(Object);
      MmLinkJobProcess(Object, a2);
LABEL_4:
      if ( v6 < 0 )
        return (unsigned int)v6;
      goto LABEL_5;
    case 2:
LABEL_102:
      v6 = 0;
LABEL_5:
      if ( PsCpuFairShareEnabled && (unsigned int)PsGetProcessSessionId(a2) && ((v4 - 1) & 0xFFFFFFFD) == 0 )
      {
        v20.QuadPart = MmGetSessionSchedulingGroupByProcess(a2);
        SessionObjectByProcess = (void *)MmGetSessionObjectByProcess(v21);
        if ( *(_QWORD *)(*((_QWORD *)Object + 134) + 1000LL) || *((_QWORD *)Object + 126) == v20.QuadPart )
        {
          if ( v4 == 1
            && *((char **)Object + 134) == Object
            && *((_QWORD *)Object + 125)
            && !*((_DWORD *)Object + 54)
            && *((void **)Object + 138) != SessionObjectByProcess )
          {
            KeRemoveSchedulingGroup(*((unsigned __int16 **)Object + 126));
            KeInsertSchedulingGroup(
              (LARGE_INTEGER *)(*((_QWORD *)Object + 125) + 128LL),
              *(_QWORD *)(*((_QWORD *)Object + 125) + 128LL),
              v20);
            v43 = (void *)*((_QWORD *)Object + 138);
            if ( v43 )
              ObfDereferenceObject(v43);
            *((_QWORD *)Object + 138) = SessionObjectByProcess;
            ObfReferenceObject(SessionObjectByProcess);
          }
        }
        else
        {
          if ( *(_QWORD *)(*((_QWORD *)Object + 134) + 1008LL) != v20.QuadPart )
          {
            *(LARGE_INTEGER *)(*((_QWORD *)Object + 134) + 1008LL) = v20;
            *(_QWORD *)(*((_QWORD *)Object + 134) + 1104LL) = SessionObjectByProcess;
          }
          *((LARGE_INTEGER *)Object + 126) = v20;
        }
      }
      return (unsigned int)v6;
    case 3:
      v42 = (void *)a2[1].Affinity.Bitmap[16];
      PspUnlinkJobProcess(v42);
      MmLinkJobProcess(Object, a2);
      ObfReferenceObject(Object);
      ObfDereferenceObject(v42);
      goto LABEL_102;
  }
  if ( a3 != 4 )
    return (unsigned int)-1073741811;
  v8 = a2[1].Affinity.Bitmap[16];
  if ( *(unsigned __int8 *)(v8 + 882) + 1 > 100
    || (*(_DWORD *)(*(_QWORD *)(v8 + 1072) + 1300LL) & *((_DWORD *)Object + 325)) != 0 )
  {
    return 3221225659LL;
  }
  v9 = 0LL;
  do
  {
    if ( (_DWORD)v9 != 2 )
    {
      RateControlJobFlag = PspGetRateControlJobFlag(v9, 0LL);
      if ( (RateControlJobFlag & *((_DWORD *)Object + 324)) != 0 && (RateControlJobFlag & *(_DWORD *)(v8 + 1296)) != 0 )
        return 3221225659LL;
    }
    v9 = (unsigned int)(v9 + 1);
  }
  while ( (int)v9 < 3 );
  v11 = 0LL;
  v12 = *(_QWORD *)(v8 + 1096) + 1LL;
  P = 0LL;
  v45 = v12;
  if ( v12 <= 2 || (P = ExAllocatePoolWithTag(PagedPool, 8 * v12 - 16, 0x624A7350u), (v11 = P) != 0LL) )
  {
    v6 = PspBindProcessSessionToJob(Object, a2);
    if ( v6 < 0 )
    {
      if ( v11 )
        ExFreePoolWithTag(v11, 0x624A7350u);
    }
    else
    {
      v13 = *(_DWORD *)(*(_QWORD *)(v8 + 1072) + 1300LL);
      *(_DWORD *)(*(_QWORD *)(v8 + 1072) + 1300LL) = *((_DWORD *)Object + 325) | v13;
      v48 = v13;
      ObfReferenceObject(Object);
      v14 = *(char ***)(v8 + 1056);
      v15 = Object + 1032;
      *((_QWORD *)Object + 129) = v8 + 1048;
      *((_QWORD *)Object + 130) = v14;
      if ( *v14 != (char *)(v8 + 1048) )
        __fastfail(3u);
      *v14 = v15;
      *(_QWORD *)(v8 + 1056) = v15;
      *((_QWORD *)Object + 133) = v8;
      *((_QWORD *)Object + 134) = *(_QWORD *)(v8 + 1072);
      Object[882] = *(_BYTE *)(v8 + 882) + 1;
      *((_QWORD *)Object + 137) = v45;
      if ( v45 > 2 )
      {
        if ( v45 > 3 )
        {
          v23 = *(_QWORD *)(v8 + 1096) - 2LL;
          if ( *(_QWORD *)(v8 + 1096) != 2LL )
          {
            do
            {
              v11[v23] = *(_QWORD *)(*(_QWORD *)(v8 + 1104) + 8 * v23 - 8);
              --v23;
            }
            while ( v23 );
          }
        }
        *v11 = *(_QWORD *)(v8 + 1064);
        *((_QWORD *)Object + 138) = v11;
      }
      PspUnlinkJobProcess(v8);
      MmLinkJobProcess(Object, a2);
      v16 = (unsigned __int16 *)*((_QWORD *)Object + 126);
      if ( v16 )
      {
        KeRemoveSchedulingGroup(v16);
        if ( (*(_DWORD *)(v8 + 1296) & 0x20) == 0 )
        {
          v24 = v8;
          v25 = v46;
          v46[1] = v46;
          v46[0] = v46;
          while ( 1 )
          {
            if ( (*(_DWORD *)(v24 + 1296) & 0x20) != 0 )
            {
LABEL_71:
              while ( v25 != v46 )
              {
                v29 = v25[2];
                v30 = *((_QWORD *)v29 + 133);
                v31 = (LARGE_INTEGER *)(*((_QWORD *)v29 + 125) + 128LL);
                v49 = v31;
                if ( v30 )
                {
                  v32 = *(_QWORD *)(v30 + 1000) + 128LL;
                }
                else
                {
                  v32 = *((_QWORD *)v29 + 126);
                  if ( PsCpuFairShareEnabled && v32 )
                  {
                    ObfReferenceObject(*((PVOID *)v29 + 138));
                    v31 = v49;
                  }
                }
                KeInsertSchedulingGroup(v31, v31->QuadPart, (LARGE_INTEGER)v32);
                if ( *((_QWORD *)v29 + 126) )
                  PspEnumJobsAndProcessesInJobHierarchy(
                    (_DWORD)v29,
                    (unsigned int)PspSetCpuRateControlJobPreCallback,
                    (unsigned int)PspSetCpuRateControlJobPostCallback,
                    0,
                    0LL,
                    5);
                PspEnumJobsAndProcessesInJobHierarchy(
                  (_DWORD)v29,
                  (unsigned int)PspSetCpuRateControlJobPreCallback,
                  (unsigned int)PspSetCpuRateControlJobPostCallback,
                  0,
                  *((_QWORD *)v29 + 125),
                  5);
                v40 = (PVOID *)*v25;
                v41 = (PVOID **)v25[1];
                if ( *((PVOID **)*v25 + 1) != v25 || *v41 != v25 )
                  __fastfail(3u);
                *v41 = v40;
                v40[1] = v41;
                ExFreePoolWithTag(v25, 0x624A7350u);
                v25 = (PVOID *)v46[0];
              }
              v6 = 0;
              goto LABEL_98;
            }
            RateControl = PspAllocateRateControl(2LL);
            *(_QWORD *)(v24 + 1000) = RateControl;
            if ( !RateControl )
              goto LABEL_76;
            *(_DWORD *)(RateControl + 132) |= 3u;
            *(_DWORD *)(RateControl + 128) = 655370000;
            *(_DWORD *)(*(_QWORD *)(v24 + 1000) + 44LL) = *(_DWORD *)(RateControl + 128);
            *(_DWORD *)(*(_QWORD *)(v24 + 1000) + 40LL) |= 0x40u;
            PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x624A7350u);
            v25 = PoolWithTag;
            if ( !PoolWithTag )
              break;
            _InterlockedOr((volatile signed __int32 *)(v24 + 1296), 0x20u);
            PoolWithTag[2] = (PVOID)v24;
            v28 = v46[0];
            v25[1] = v46;
            *v25 = v28;
            if ( *((PVOID **)v28 + 1) != v46 )
              __fastfail(3u);
            *((_QWORD *)v28 + 1) = v25;
            v46[0] = v25;
            v24 = *(_QWORD *)(v24 + 1064);
            if ( !v24 )
              goto LABEL_71;
          }
          PspFreeRateControl(*(_QWORD *)(v24 + 1000), 2LL);
          *(_QWORD *)(v24 + 1000) = 0LL;
LABEL_76:
          while ( 1 )
          {
            v33 = v46[0];
            if ( v46[0] == v46 )
              break;
            v34 = *((_QWORD *)v46[0] + 2);
            v35 = *(_QWORD *)(v34 + 1000);
            if ( v35 )
            {
              PspFreeRateControl(v35, 2LL);
              *(_QWORD *)(v34 + 1000) = 0LL;
              _InterlockedAnd((volatile signed __int32 *)(v34 + 1296), 0xFFFFFFDF);
            }
            v36 = *v33;
            v37 = (_QWORD *)v33[1];
            if ( *(_QWORD **)(*v33 + 8LL) != v33 || (_QWORD *)*v37 != v33 )
              __fastfail(3u);
            *v37 = v36;
            *(_QWORD *)(v36 + 8) = v37;
            ExFreePoolWithTag(v33, 0x624A7350u);
          }
          *(_DWORD *)(*(_QWORD *)(v8 + 1072) + 1300LL) = v48;
          v38 = *(_QWORD *)v15;
          v39 = (char **)*((_QWORD *)Object + 130);
          if ( *(char **)(*(_QWORD *)v15 + 8LL) != v15 || *v39 != v15 )
            __fastfail(3u);
          *v39 = (char *)v38;
          *(_QWORD *)(v38 + 8) = v39;
          *((_QWORD *)Object + 130) = Object + 1032;
          *(_QWORD *)v15 = v15;
          *((_QWORD *)Object + 133) = 0LL;
          *((_QWORD *)Object + 134) = Object;
          Object[882] = 0;
          PspUnlinkJobProcess(Object);
          MmLinkJobProcess(v8, a2);
          ObfDereferenceObject(Object);
          *((_QWORD *)Object + 137) = 0LL;
          if ( P )
          {
            ExFreePoolWithTag(P, 0x624A7350u);
            *((_QWORD *)Object + 138) = 0LL;
          }
          KeInsertSchedulingGroup(
            (LARGE_INTEGER *)(*((_QWORD *)Object + 125) + 128LL),
            *(_QWORD *)(*((_QWORD *)Object + 125) + 128LL),
            0LL);
          return 3221225626LL;
        }
LABEL_98:
        KeInsertSchedulingGroup(
          (LARGE_INTEGER *)(*((_QWORD *)Object + 125) + 128LL),
          *(_QWORD *)(*((_QWORD *)Object + 125) + 128LL),
          (LARGE_INTEGER)(*(_QWORD *)(v8 + 1000) + 128LL));
      }
      else
      {
        v17 = *(_QWORD *)(v8 + 1008);
        if ( v17 )
          *((_QWORD *)Object + 126) = v17;
      }
      PspSetEffectiveJobLimits(Object, 0LL);
      *((_DWORD *)Object + 216) += *(_DWORD *)(v8 + 864);
      *((_DWORD *)Object + 218) += *(_DWORD *)(v8 + 872);
      *((_DWORD *)Object + 217) += *(_DWORD *)(v8 + 868);
      *((_DWORD *)Object + 219) += *(_DWORD *)(v8 + 876);
      if ( (*(_DWORD *)(*((_QWORD *)Object + 133) + 1296LL) & 0x40000) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)Object + 324, 0x12u);
      if ( (*((_DWORD *)Object + 324) & 0x1000) == 0 && (*(_DWORD *)(v8 + 1296) & 0x1000) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)Object + 324, 0xCu);
      if ( (*(_DWORD *)(*((_QWORD *)Object + 133) + 1296LL) & 0x1000000) != 0 )
      {
        _InterlockedOr((volatile signed __int32 *)Object + 324, 0x1000000u);
        if ( (*(_DWORD *)(*((_QWORD *)Object + 133) + 1296LL) & 0x800000) != 0 )
          _InterlockedOr((volatile signed __int32 *)Object + 324, 0x800000u);
      }
      for ( i = 0; i < 3; ++i )
      {
        if ( i != 2 )
        {
          if ( i ? *(_QWORD *)(v8 + 832) : *(_QWORD *)(v8 + 840) )
            PspSetEffectiveRateControlJob(Object);
        }
      }
    }
    v4 = a3;
    goto LABEL_4;
  }
  return 3221225626LL;
}
