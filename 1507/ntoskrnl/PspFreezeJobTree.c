/*
 * XREFs of PspFreezeJobTree @ 0x140417490
 * Callers:
 *     PspFreezeJobTree @ 0x140417490 (PspFreezeJobTree.c)
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x140103870 (ExConvertExclusiveToSharedLite.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PspComputeReportWakeFilter @ 0x140411C34 (PspComputeReportWakeFilter.c)
 *     PspFreezeJobTree @ 0x140417490 (PspFreezeJobTree.c)
 *     PspSendWakeNotification @ 0x140417AA0 (PspSendWakeNotification.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140506878 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspFreezeJobTree(char *Object, int *a2)
{
  int v4; // ecx
  __int64 v5; // rdi
  int v6; // eax
  int v7; // ecx
  PVOID *v8; // rax
  int v9; // edx
  int v10; // r8d
  _QWORD *v11; // r8
  int v12; // ecx
  int v13; // ecx
  PVOID *v14; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  signed __int32 v18; // eax
  signed __int32 v19; // edx
  unsigned int v20; // edi
  _QWORD *v21; // rsi
  char v22; // al
  int v23; // ecx
  PVOID *v24; // rax
  int v25; // [rsp+30h] [rbp-39h] BYREF
  int v26; // [rsp+34h] [rbp-35h]
  __int64 v27; // [rsp+38h] [rbp-31h] BYREF
  __int64 v28; // [rsp+40h] [rbp-29h]
  __int64 v29; // [rsp+48h] [rbp-21h] BYREF
  int v30; // [rsp+50h] [rbp-19h]
  int *v31; // [rsp+58h] [rbp-11h] BYREF
  int v32; // [rsp+68h] [rbp-1h]
  char v33; // [rsp+6Dh] [rbp+4h]
  _OWORD v34[3]; // [rsp+78h] [rbp+Fh] BYREF

  v29 = 0LL;
  memset(v34, 0, sizeof(v34));
  v4 = a2[2];
  v25 = 0;
  v5 = 0LL;
  v26 = 0;
  v6 = *a2;
  v31 = a2;
  v27 = 0LL;
  v30 = v4;
  if ( (v6 & 2) != 0 && (~*((_DWORD *)Object + 239) & v4) != 0 )
  {
    while ( 1 )
    {
      v28 = *((_QWORD *)Object + 134);
      ExAcquireResourceExclusiveLite((PERESOURCE)(v28 + 56), 1u);
      if ( v28 == *((_QWORD *)Object + 134) )
        break;
      ExReleaseResourceLite((PERESOURCE)(v28 + 56));
    }
    v27 = v28;
    v5 = v28;
    if ( Object != (char *)v28 )
      ExConvertExclusiveToSharedLite((PERESOURCE)(v28 + 56));
  }
  v7 = 0;
  v8 = (PVOID *)&v27;
  while ( Object != *v8 )
  {
    ++v7;
    ++v8;
    if ( v7 )
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
      break;
    }
  }
  v9 = *a2;
  if ( (*a2 & 1) != 0 )
  {
    if ( *((_BYTE *)a2 + 4) )
    {
      if ( (*((_DWORD *)Object + 324) & 0x200) != 0 )
        goto LABEL_35;
    }
    else if ( (*((_DWORD *)Object + 324) & 0x200) == 0 )
    {
      goto LABEL_35;
    }
  }
  if ( (v9 & 4) != 0 )
  {
    if ( *((_BYTE *)a2 + 5) )
    {
      if ( (*((_DWORD *)Object + 324) & 0x80000) == 0 )
        goto LABEL_9;
    }
    else if ( (*((_DWORD *)Object + 324) & 0x80000) != 0 )
    {
      goto LABEL_9;
    }
LABEL_35:
    v25 = -1073741811;
    goto LABEL_64;
  }
LABEL_9:
  if ( (v9 & 2) == 0 )
    goto LABEL_13;
  v10 = ~*((_DWORD *)Object + 239) & v30;
  if ( !v10 )
  {
LABEL_11:
    v11 = a2 + 2;
    if ( (*((_DWORD *)Object + 324) & 0x800) != 0 )
    {
      PspComputeReportWakeFilter(Object, (__int64)&v29, v11, 1);
      if ( v29 )
      {
        v16 = *(_OWORD *)(Object + 904);
        v34[0] = *(_OWORD *)(Object + 888);
        v17 = *(_OWORD *)(Object + 920);
        v34[1] = v16;
        v34[2] = v17;
      }
    }
    *((_QWORD *)Object + 118) = *v11;
LABEL_13:
    if ( (*a2 & 1) != 0 )
    {
      if ( *((_BYTE *)a2 + 4) )
        _interlockedbittestandset((volatile signed __int32 *)Object + 324, 9u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)Object + 324, 9u);
      v5 = v27;
      v12 = 5;
      v26 = 5;
    }
    else
    {
      v12 = v26;
    }
    if ( (*a2 & 4) != 0 )
    {
      if ( *((_BYTE *)a2 + 5) )
        _interlockedbittestandset((volatile signed __int32 *)Object + 324, 0x13u);
      else
        _interlockedbittestandreset((volatile signed __int32 *)Object + 324, 0x13u);
      v5 = v27;
      v12 |= 5u;
      v26 = v12;
    }
    if ( v12 )
      PspEnumJobsAndProcessesInJobHierarchy(
        (_DWORD)Object,
        (unsigned int)PspSetJobFreezeCountCallback,
        0,
        (unsigned int)PspSetProcessFreezeStateCallback,
        (__int64)&v31,
        v12);
    v13 = 0;
    v14 = (PVOID *)&v27;
    while ( Object != *v14 )
    {
      ++v13;
      ++v14;
      if ( v13 )
      {
        ExReleaseResourceLite((PERESOURCE)(Object + 56));
        break;
      }
    }
    if ( v5 )
      ExReleaseResourceLite((PERESOURCE)(v5 + 56));
    if ( v26 )
    {
      PspEnumJobsAndProcessesInJobHierarchy(
        (_DWORD)Object,
        0,
        (unsigned int)PspExecuteJobFreezeThawCallback,
        0,
        (__int64)&v25,
        0);
      if ( v25 < 0 )
      {
        *a2 &= ~4u;
        v32 = 4;
        v33 = 0;
        PspFreezeJobTree(Object);
        v25 = 262;
      }
    }
    if ( v29 )
    {
      v20 = 0;
      v21 = (_QWORD *)v34 + 1;
      do
      {
        v22 = 0;
        if ( *v21 )
          v22 = 3;
        if ( (unsigned __int8)PspSendWakeNotification(Object, v22) )
          break;
        ++v20;
        ++v21;
      }
      while ( v20 < 5 );
    }
    return (unsigned int)v25;
  }
  _m_prefetchw((const void *)(v5 + 1300));
  v18 = *(_DWORD *)(v5 + 1300);
  while ( (v18 & v10) == 0 )
  {
    v19 = v18;
    v18 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 1300), v10 | v18, v18);
    if ( v18 == v19 )
    {
      *((_DWORD *)Object + 239) |= v10;
      v5 = v27;
      goto LABEL_11;
    }
  }
  v5 = v27;
  v25 = -1073741637;
LABEL_64:
  v23 = 0;
  v24 = (PVOID *)&v27;
  while ( Object != *v24 )
  {
    ++v23;
    ++v24;
    if ( v23 )
    {
      ExReleaseResourceLite((PERESOURCE)(Object + 56));
      break;
    }
  }
  if ( v5 )
    ExReleaseResourceLite((PERESOURCE)(v5 + 56));
  return (unsigned int)v25;
}
