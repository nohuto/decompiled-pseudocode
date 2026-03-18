/*
 * XREFs of PspFreezeJobTree @ 0x140489E4C
 * Callers:
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     PspFreezeJobTree @ 0x140489E4C (PspFreezeJobTree.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400A5C20 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140468674 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJobConditionally @ 0x140469924 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x140469940 (PspLockJobConditionally.c)
 *     PspComputeReportWakeFilter @ 0x140489E14 (PspComputeReportWakeFilter.c)
 *     PspFreezeJobTree @ 0x140489E4C (PspFreezeJobTree.c)
 *     PspDispatchWakeNotification @ 0x14048A150 (PspDispatchWakeNotification.c)
 *     PspLockRootJobExclusive @ 0x14048AB04 (PspLockRootJobExclusive.c)
 */

__int64 __fastcall PspFreezeJobTree(__int64 a1, int *a2)
{
  int v4; // ecx
  __int64 v5; // rdi
  int v6; // eax
  int v7; // edx
  int v8; // ecx
  int v10; // r8d
  _QWORD *v11; // r8
  __int64 v12; // r9
  signed __int32 v13; // eax
  signed __int32 v14; // edx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  int v17; // [rsp+30h] [rbp-39h] BYREF
  int v18; // [rsp+34h] [rbp-35h]
  __int64 v19; // [rsp+38h] [rbp-31h] BYREF
  __int64 v20; // [rsp+40h] [rbp-29h] BYREF
  int v21; // [rsp+48h] [rbp-21h]
  int *v22; // [rsp+50h] [rbp-19h] BYREF
  int v23; // [rsp+60h] [rbp-9h] BYREF
  char v24; // [rsp+65h] [rbp-4h]
  _OWORD v25[3]; // [rsp+70h] [rbp+7h] BYREF

  v20 = 0LL;
  memset(v25, 0, sizeof(v25));
  v4 = a2[2];
  v17 = 0;
  v5 = 0LL;
  v18 = 0;
  v6 = *a2;
  v22 = a2;
  v19 = 0LL;
  v21 = v4;
  if ( (v6 & 2) != 0 && (~*(_DWORD *)(a1 + 948) & v4) != 0 )
  {
    PspLockRootJobExclusive(a1, 0LL, &v19);
    v5 = v19;
    if ( a1 != v19 )
      ExConvertExclusiveToSharedLite((PERESOURCE)(v19 + 56));
  }
  PspLockJobConditionally(a1, &v19);
  v7 = *a2;
  if ( (*a2 & 1) != 0 )
  {
    if ( *((_BYTE *)a2 + 4) )
    {
      if ( (*(_DWORD *)(a1 + 1304) & 0x200) != 0 )
        goto LABEL_29;
    }
    else if ( (*(_DWORD *)(a1 + 1304) & 0x200) == 0 )
    {
      goto LABEL_29;
    }
  }
  if ( (v7 & 4) != 0 )
  {
    if ( *((_BYTE *)a2 + 5) )
    {
      if ( (*(_DWORD *)(a1 + 1304) & 0x80000) == 0 )
        goto LABEL_6;
    }
    else if ( (*(_DWORD *)(a1 + 1304) & 0x80000) != 0 )
    {
      goto LABEL_6;
    }
LABEL_29:
    v17 = -1073741811;
    goto LABEL_47;
  }
LABEL_6:
  if ( (v7 & 2) == 0 )
  {
LABEL_7:
    if ( (*a2 & 1) != 0 )
    {
      if ( *((_BYTE *)a2 + 4) )
        _interlockedbittestandset((volatile signed __int32 *)(a1 + 1304), 9u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1304), 9u);
      v5 = v19;
      v8 = 5;
      v18 = 5;
    }
    else
    {
      v8 = v18;
    }
    if ( (*a2 & 4) != 0 )
    {
      if ( *((_BYTE *)a2 + 5) )
        _interlockedbittestandset((volatile signed __int32 *)(a1 + 1304), 0x13u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1304), 0x13u);
      v5 = v19;
      v8 |= 5u;
      v18 = v8;
    }
    if ( v8 )
      PspEnumJobsAndProcessesInJobHierarchy(
        (_QWORD *)a1,
        (int)PspSetJobFreezeCountCallback,
        0,
        (int)PspSetProcessFreezeStateCallback,
        (__int64)&v22,
        v8);
    PspUnlockJobConditionally(a1, &v19);
    if ( v5 )
      ExReleaseResourceLite((PERESOURCE)(v5 + 56));
    if ( v18 )
    {
      PspEnumJobsAndProcessesInJobHierarchy((_QWORD *)a1, 0, (int)PspExecuteJobFreezeThawCallback, 0, (__int64)&v17, 0);
      if ( v17 < 0 )
      {
        *a2 &= ~4u;
        v23 = 4;
        v24 = 0;
        PspFreezeJobTree(a1, &v23);
        v17 = 262;
      }
    }
    PspDispatchWakeNotification((PVOID)a1);
    return (unsigned int)v17;
  }
  v10 = ~*(_DWORD *)(a1 + 948) & v21;
  if ( !v10 )
  {
LABEL_26:
    v11 = a2 + 2;
    if ( (*(_DWORD *)(a1 + 1304) & 0x800) != 0 )
    {
      PspComputeReportWakeFilter((_DWORD *)a1, (__int64)&v20, v11, 1);
      if ( v20 )
      {
        v15 = *(_OWORD *)(a1 + 896);
        v25[0] = *(_OWORD *)(a1 + 880);
        v16 = *(_OWORD *)(a1 + 912);
        v25[1] = v15;
        v25[2] = v16;
      }
    }
    *(_QWORD *)(a1 + 936) = *v11;
    goto LABEL_7;
  }
  v12 = *(_QWORD *)(a1 + 1328);
  _m_prefetchw((const void *)(v12 + 1308));
  v13 = *(_DWORD *)(v12 + 1308);
  while ( (v13 & v10) == 0 )
  {
    v14 = v13;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 1308), v10 | v13, v13);
    if ( v13 == v14 )
    {
      *(_DWORD *)(a1 + 948) |= v10;
      v5 = v19;
      goto LABEL_26;
    }
  }
  v5 = v19;
  v17 = -1073741637;
LABEL_47:
  PspUnlockJobConditionally(a1, &v19);
  if ( v5 )
    ExReleaseResourceLite((PERESOURCE)(v5 + 56));
  return (unsigned int)v17;
}
