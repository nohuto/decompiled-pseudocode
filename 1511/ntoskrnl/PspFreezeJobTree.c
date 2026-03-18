/*
 * XREFs of PspFreezeJobTree @ 0x14048641C
 * Callers:
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     PspFreezeJobTree @ 0x14048641C (PspFreezeJobTree.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400CF4E8 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1403EB6A8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJobConditionally @ 0x1403EC4B0 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x1403EC4CC (PspLockJobConditionally.c)
 *     PspLockRootJobExclusive @ 0x1403ECDA8 (PspLockRootJobExclusive.c)
 *     PspDispatchWakeNotification @ 0x1403ECE08 (PspDispatchWakeNotification.c)
 *     PspFreezeJobTree @ 0x14048641C (PspFreezeJobTree.c)
 *     PspComputeReportWakeFilter @ 0x140486874 (PspComputeReportWakeFilter.c)
 */

__int64 __fastcall PspFreezeJobTree(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  __int64 v8; // r9
  int v9; // r8d
  _QWORD *v10; // r8
  int v11; // ecx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  signed __int32 v15; // eax
  signed __int32 v16; // edx
  __int64 v17; // [rsp+30h] [rbp-39h] BYREF
  __int64 v18; // [rsp+38h] [rbp-31h] BYREF
  int v19; // [rsp+40h] [rbp-29h]
  __int64 v20; // [rsp+48h] [rbp-21h] BYREF
  int v21; // [rsp+50h] [rbp-19h]
  __int64 v22; // [rsp+58h] [rbp-11h] BYREF
  int v23; // [rsp+68h] [rbp-1h] BYREF
  char v24; // [rsp+6Dh] [rbp+4h]
  _OWORD v25[3]; // [rsp+78h] [rbp+Fh] BYREF

  v2 = 0LL;
  v20 = 0LL;
  memset(v25, 0, sizeof(v25));
  v5 = *(_DWORD *)a2;
  v6 = *(_DWORD *)(a2 + 8);
  v19 = 0;
  v22 = a2;
  LODWORD(v17) = 0;
  v18 = 0LL;
  v21 = v6;
  if ( (v5 & 2) != 0 && (~*(_DWORD *)(a1 + 956) & v6) != 0 )
  {
    PspLockRootJobExclusive(a1, 0LL, &v18);
    v2 = v18;
    if ( a1 != v18 )
      ExConvertExclusiveToSharedLite((PERESOURCE)(v18 + 56));
  }
  PspLockJobConditionally(a1, &v18);
  v7 = *(_DWORD *)a2;
  LOBYTE(v8) = 1;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    if ( *(_BYTE *)(a2 + 4) )
    {
      if ( (*(_DWORD *)(a1 + 1296) & 0x200) != 0 )
        goto LABEL_25;
    }
    else if ( (*(_DWORD *)(a1 + 1296) & 0x200) == 0 )
    {
      goto LABEL_25;
    }
  }
  if ( (v7 & 4) != 0 )
  {
    if ( *(_BYTE *)(a2 + 5) )
    {
      if ( (*(_DWORD *)(a1 + 1296) & 0x80000) == 0 )
        goto LABEL_5;
    }
    else if ( (*(_DWORD *)(a1 + 1296) & 0x80000) != 0 )
    {
      goto LABEL_5;
    }
LABEL_25:
    LODWORD(v17) = -1073741811;
    goto LABEL_48;
  }
LABEL_5:
  if ( (v7 & 2) == 0 )
  {
LABEL_9:
    if ( ((unsigned __int8)*(_DWORD *)a2 & (unsigned __int8)v8) != 0 )
    {
      if ( *(_BYTE *)(a2 + 4) )
        _interlockedbittestandset((volatile signed __int32 *)(a1 + 1296), 9u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1296), 9u);
      v2 = v18;
      v11 = 5;
      v19 = 5;
    }
    else
    {
      v11 = v19;
    }
    if ( (*(_DWORD *)a2 & 4) != 0 )
    {
      if ( *(_BYTE *)(a2 + 5) )
        _interlockedbittestandset((volatile signed __int32 *)(a1 + 1296), 0x13u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1296), 0x13u);
      v2 = v18;
      v11 |= 5u;
      v19 = v11;
    }
    if ( v11 )
      PspEnumJobsAndProcessesInJobHierarchy(
        (_QWORD *)a1,
        (int)PspSetJobFreezeCountCallback,
        0,
        (int)PspSetProcessFreezeStateCallback,
        (__int64)&v22,
        v11);
    PspUnlockJobConditionally(a1, &v18);
    if ( v2 )
      ExReleaseResourceLite((PERESOURCE)(v2 + 56));
    if ( v19 )
    {
      PspEnumJobsAndProcessesInJobHierarchy((_QWORD *)a1, 0, (int)PspExecuteJobFreezeThawCallback, 0, (__int64)&v17, 0);
      if ( (int)v17 < 0 )
      {
        *(_DWORD *)a2 &= ~4u;
        v23 = 4;
        v24 = 0;
        PspFreezeJobTree(a1, &v23);
        LODWORD(v17) = 262;
      }
    }
    PspDispatchWakeNotification((PVOID)a1, &v20, (__int64)v25);
    return (unsigned int)v17;
  }
  v9 = ~*(_DWORD *)(a1 + 956) & v21;
  if ( !v9 )
  {
LABEL_7:
    v10 = (_QWORD *)(a2 + 8);
    if ( (*(_DWORD *)(a1 + 1296) & 0x800) != 0 )
    {
      PspComputeReportWakeFilter(a1, &v20, v10, v8);
      if ( v20 )
      {
        v13 = *(_OWORD *)(a1 + 904);
        v25[0] = *(_OWORD *)(a1 + 888);
        v14 = *(_OWORD *)(a1 + 920);
        v25[1] = v13;
        v25[2] = v14;
      }
    }
    *(_QWORD *)(a1 + 944) = *v10;
    goto LABEL_9;
  }
  _m_prefetchw((const void *)(v2 + 1300));
  v15 = *(_DWORD *)(v2 + 1300);
  while ( (v15 & v9) == 0 )
  {
    v16 = v15;
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 1300), v9 | v15, v15);
    if ( v15 == v16 )
    {
      *(_DWORD *)(a1 + 956) |= v9;
      v2 = v18;
      goto LABEL_7;
    }
  }
  v2 = v18;
  LODWORD(v17) = -1073741637;
LABEL_48:
  PspUnlockJobConditionally(a1, &v18);
  if ( v2 )
    ExReleaseResourceLite((PERESOURCE)(v2 + 56));
  return (unsigned int)v17;
}
