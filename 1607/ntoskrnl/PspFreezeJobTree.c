/*
 * XREFs of PspFreezeJobTree @ 0x1404D4EDC
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PspFreezeJobTree @ 0x1404D4EDC (PspFreezeJobTree.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400A4198 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140467544 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJobConditionally @ 0x1404687F4 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x140468810 (PspLockJobConditionally.c)
 *     PspLockRootJobExclusive @ 0x1404D4E7C (PspLockRootJobExclusive.c)
 *     PspFreezeJobTree @ 0x1404D4EDC (PspFreezeJobTree.c)
 *     PspDispatchWakeNotification @ 0x1404D51E0 (PspDispatchWakeNotification.c)
 *     PspComputeReportWakeFilter @ 0x1404D52F0 (PspComputeReportWakeFilter.c)
 */

__int64 __fastcall PspFreezeJobTree(__int64 a1, int *a2)
{
  int v4; // ecx
  __int64 v5; // rdi
  int v6; // eax
  __int64 v7; // r9
  int v8; // edx
  int v9; // ecx
  int v11; // r8d
  _QWORD *v12; // r8
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
  v8 = *a2;
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
  if ( (v8 & 4) != 0 )
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
  if ( (v8 & 2) == 0 )
  {
LABEL_7:
    if ( (*a2 & 1) != 0 )
    {
      if ( *((_BYTE *)a2 + 4) )
        _interlockedbittestandset((volatile signed __int32 *)(a1 + 1304), 9u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1304), 9u);
      v5 = v19;
      v9 = 5;
      v18 = 5;
    }
    else
    {
      v9 = v18;
    }
    if ( (*a2 & 4) != 0 )
    {
      if ( *((_BYTE *)a2 + 5) )
        _interlockedbittestandset((volatile signed __int32 *)(a1 + 1304), 0x13u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1304), 0x13u);
      v5 = v19;
      v9 |= 5u;
      v18 = v9;
    }
    if ( v9 )
      PspEnumJobsAndProcessesInJobHierarchy(
        (_QWORD *)a1,
        (int)PspSetJobFreezeCountCallback,
        0,
        (int)PspSetProcessFreezeStateCallback,
        (__int64)&v22,
        v9);
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
  v11 = ~*(_DWORD *)(a1 + 948) & v21;
  if ( !v11 )
  {
LABEL_26:
    v12 = a2 + 2;
    if ( (*(_DWORD *)(a1 + 1304) & 0x800) != 0 )
    {
      LOBYTE(v7) = 1;
      PspComputeReportWakeFilter(a1, &v20, v12, v7);
      if ( v20 )
      {
        v15 = *(_OWORD *)(a1 + 896);
        v25[0] = *(_OWORD *)(a1 + 880);
        v16 = *(_OWORD *)(a1 + 912);
        v25[1] = v15;
        v25[2] = v16;
      }
    }
    *(_QWORD *)(a1 + 936) = *v12;
    goto LABEL_7;
  }
  v7 = *(_QWORD *)(a1 + 1328);
  _m_prefetchw((const void *)(v7 + 1308));
  v13 = *(_DWORD *)(v7 + 1308);
  while ( (v13 & v11) == 0 )
  {
    v14 = v13;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 1308), v11 | v13, v13);
    if ( v13 == v14 )
    {
      *(_DWORD *)(a1 + 948) |= v11;
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
